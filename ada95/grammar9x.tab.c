/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yaxx.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */

#define yyparse adaparse
#define yylex   adalex
#define yyerror adaerror
#define yylval  adalval
#define yytext  adatext
#define YYYAXX_XML  "adayaxx.xml"
#define YYYAXX_DTD  "adayaxx.dtd"
#define yychar  adachar
#define yydebug adadebug
#define yynerrs adanerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIC = 258,
     DOT_DOT = 259,
     LT_LT = 260,
     BOX = 261,
     LT_EQ = 262,
     EXPON = 263,
     NE = 264,
     GT_GT = 265,
     GE = 266,
     IS_ASSIGNED = 267,
     RIGHT_SHAFT = 268,
     ABORT = 269,
     ABS = 270,
     ABSTRACT = 271,
     ACCEPT = 272,
     ACCESS = 273,
     ALIASED = 274,
     ALL = 275,
     AND = 276,
     ARRAY = 277,
     AT = 278,
     BEGiN = 279,
     BODY = 280,
     CASE = 281,
     CONSTANT = 282,
     DECLARE = 283,
     DELAY = 284,
     DELTA = 285,
     DIGITS = 286,
     DO = 287,
     ELSE = 288,
     ELSIF = 289,
     END = 290,
     ENTRY = 291,
     EXCEPTION = 292,
     EXIT = 293,
     FOR = 294,
     FUNCTION = 295,
     GENERIC = 296,
     GOTO = 297,
     IF = 298,
     IN = 299,
     IS = 300,
     LIMITED = 301,
     LOOP = 302,
     MOD = 303,
     NEW = 304,
     NOT = 305,
     NuLL = 306,
     OF = 307,
     OR = 308,
     OTHERS = 309,
     OUT = 310,
     PACKAGE = 311,
     PRAGMA = 312,
     PRIVATE = 313,
     PROCEDURE = 314,
     PROTECTED = 315,
     RAISE = 316,
     RANGE = 317,
     RECORD = 318,
     REM = 319,
     RENAMES = 320,
     REQUEUE = 321,
     RETURN = 322,
     REVERSE = 323,
     SELECT = 324,
     SEPARATE = 325,
     SUBTYPE = 326,
     TAGGED = 327,
     TASK = 328,
     TERMINATE = 329,
     THEN = 330,
     TYPE = 331,
     UNTIL = 332,
     USE = 333,
     WHEN = 334,
     WHILE = 335,
     WITH = 336,
     XOR = 337,
     char_lit = 338,
     identifier = 339,
     char_string = 340,
     numeric_lit = 341
   };
#endif
#define TIC 258
#define DOT_DOT 259
#define LT_LT 260
#define BOX 261
#define LT_EQ 262
#define EXPON 263
#define NE 264
#define GT_GT 265
#define GE 266
#define IS_ASSIGNED 267
#define RIGHT_SHAFT 268
#define ABORT 269
#define ABS 270
#define ABSTRACT 271
#define ACCEPT 272
#define ACCESS 273
#define ALIASED 274
#define ALL 275
#define AND 276
#define ARRAY 277
#define AT 278
#define BEGiN 279
#define BODY 280
#define CASE 281
#define CONSTANT 282
#define DECLARE 283
#define DELAY 284
#define DELTA 285
#define DIGITS 286
#define DO 287
#define ELSE 288
#define ELSIF 289
#define END 290
#define ENTRY 291
#define EXCEPTION 292
#define EXIT 293
#define FOR 294
#define FUNCTION 295
#define GENERIC 296
#define GOTO 297
#define IF 298
#define IN 299
#define IS 300
#define LIMITED 301
#define LOOP 302
#define MOD 303
#define NEW 304
#define NOT 305
#define NuLL 306
#define OF 307
#define OR 308
#define OTHERS 309
#define OUT 310
#define PACKAGE 311
#define PRAGMA 312
#define PRIVATE 313
#define PROCEDURE 314
#define PROTECTED 315
#define RAISE 316
#define RANGE 317
#define RECORD 318
#define REM 319
#define RENAMES 320
#define REQUEUE 321
#define RETURN 322
#define REVERSE 323
#define SELECT 324
#define SEPARATE 325
#define SUBTYPE 326
#define TAGGED 327
#define TASK 328
#define TERMINATE 329
#define THEN 330
#define TYPE 331
#define UNTIL 332
#define USE 333
#define WHEN 334
#define WHILE 335
#define WITH 336
#define XOR 337
#define char_lit 338
#define identifier 339
#define char_string 340
#define numeric_lit 341




/* Copy the first part of user declarations.  */
#line 95 "grammar9x.y"



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 274 "grammar9x.tab.c"

//#if ! defined (yyoverflow) || YYERROR_VERBOSE
#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

#define XML_ALLOC(X) malloc(X)
#define XML_FREE(X) free(X)
#if YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  char *yyxs; // Yijun Yu: for XML
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)
// Yijun Yu: for yyxs
/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
     + sizeof(char *) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2310

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  234
/* YYNRULES -- Number of rules. */
#define YYNRULES  514
/* YYNRULES -- Number of states. */
#define YYNSTATES  976

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,     2,
      88,    89,   100,    97,    90,    98,    93,   101,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    87,
      95,    94,    96,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    92,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

//#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     9,    16,    18,    22,    24,    28,
      29,    32,    34,    36,    38,    40,    42,    44,    46,    48,
      50,    52,    54,    56,    59,    66,    68,    72,    74,    75,
      77,    79,    82,    84,    86,    87,    90,    97,   103,   104,
     106,   110,   111,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   136,   139,   141,   143,   145,   149,   152,   157,
     162,   168,   174,   177,   181,   185,   192,   196,   198,   202,
     204,   206,   208,   211,   213,   214,   216,   218,   220,   224,
     228,   234,   236,   238,   245,   250,   253,   254,   256,   258,
     262,   266,   270,   272,   276,   279,   281,   282,   284,   288,
     294,   297,   298,   300,   303,   306,   309,   313,   315,   319,
     321,   325,   331,   334,   338,   340,   344,   350,   352,   353,
     355,   364,   366,   369,   375,   377,   381,   383,   385,   387,
     390,   392,   395,   399,   403,   408,   415,   416,   418,   419,
     421,   422,   424,   426,   429,   431,   433,   435,   437,   439,
     442,   444,   446,   448,   450,   452,   454,   456,   458,   460,
     462,   464,   466,   470,   474,   476,   478,   482,   484,   488,
     490,   492,   497,   499,   503,   505,   507,   509,   511,   515,
     519,   523,   527,   531,   533,   535,   537,   539,   541,   543,
     545,   549,   553,   559,   566,   571,   575,   579,   583,   585,
     589,   593,   595,   597,   599,   602,   605,   607,   611,   615,
     619,   621,   623,   625,   627,   629,   631,   633,   636,   639,
     641,   645,   647,   649,   651,   653,   655,   657,   661,   663,
     665,   667,   669,   671,   674,   677,   681,   683,   685,   687,
     689,   691,   693,   697,   701,   704,   707,   709,   712,   714,
     717,   719,   721,   723,   725,   727,   729,   731,   733,   735,
     737,   739,   741,   743,   745,   748,   750,   752,   754,   756,
     758,   760,   764,   767,   772,   779,   781,   785,   788,   791,
     793,   794,   797,   804,   808,   809,   812,   817,   823,   824,
     827,   828,   831,   835,   839,   840,   842,   847,   848,   850,
     857,   858,   861,   864,   867,   868,   870,   875,   876,   878,
     879,   882,   885,   889,   893,   896,   899,   903,   907,   913,
     916,   918,   920,   921,   923,   927,   929,   933,   939,   941,
     942,   944,   946,   949,   951,   954,   961,   964,   967,   970,
     978,   979,   982,   983,   985,   995,   996,   998,  1002,  1003,
    1005,  1009,  1014,  1016,  1020,  1027,  1033,  1035,  1040,  1044,
    1050,  1055,  1058,  1061,  1065,  1071,  1072,  1079,  1080,  1084,
    1094,  1097,  1101,  1107,  1113,  1114,  1117,  1118,  1121,  1123,
    1126,  1128,  1130,  1131,  1134,  1136,  1138,  1147,  1149,  1153,
    1155,  1157,  1160,  1162,  1166,  1171,  1179,  1186,  1197,  1199,
    1206,  1207,  1211,  1213,  1216,  1223,  1227,  1229,  1234,  1238,
    1243,  1245,  1247,  1249,  1251,  1259,  1261,  1266,  1267,  1271,
    1274,  1277,  1280,  1283,  1286,  1295,  1305,  1314,  1315,  1317,
    1321,  1322,  1325,  1328,  1333,  1337,  1338,  1340,  1343,  1347,
    1350,  1354,  1355,  1358,  1360,  1362,  1364,  1366,  1368,  1370,
    1372,  1378,  1380,  1382,  1384,  1386,  1393,  1400,  1405,  1412,
    1417,  1420,  1423,  1428,  1435,  1437,  1441,  1443,  1445,  1449,
    1453,  1459,  1463,  1467,  1469,  1472,  1475,  1482,  1489,  1498,
    1509,  1517,  1519,  1520,  1522,  1526,  1527,  1530,  1533,  1537,
    1540,  1543,  1546,  1551,  1554,  1556,  1558,  1560,  1562,  1565,
    1570,  1576,  1580,  1585,  1588,  1590,  1592,  1594,  1600,  1610,
    1611,  1616,  1617,  1625,  1632
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     103,     0,    -1,   302,    -1,    57,    84,    87,    -1,    57,
     175,    88,   105,    89,    87,    -1,   106,    -1,   105,    90,
     106,    -1,   190,    -1,   175,    13,   190,    -1,    -1,   107,
     104,    -1,   109,    -1,   115,    -1,   116,    -1,   120,    -1,
     241,    -1,   252,    -1,   265,    -1,   270,    -1,   312,    -1,
     262,    -1,   319,    -1,   311,    -1,     1,    87,    -1,   110,
      91,   112,   113,   114,    87,    -1,   111,    -1,   110,    90,
     111,    -1,    84,    -1,    -1,    19,    -1,    27,    -1,    19,
      27,    -1,   121,    -1,   136,    -1,    -1,    12,   190,    -1,
     110,    91,    27,    12,   190,    87,    -1,    76,    84,   117,
     118,    87,    -1,    -1,   154,    -1,    88,     6,    89,    -1,
      -1,    45,   119,    -1,   127,    -1,   130,    -1,   133,    -1,
     136,    -1,   147,    -1,   164,    -1,   124,    -1,   258,    -1,
      71,    84,    45,   121,    87,    -1,   173,   122,    -1,   173,
      -1,   125,    -1,   123,    -1,    31,   190,   146,    -1,    49,
     121,    -1,    49,   121,    81,    58,    -1,    49,   121,    81,
     148,    -1,    16,    49,   121,    81,    58,    -1,    16,    49,
     121,    81,   148,    -1,    62,   126,    -1,   196,     4,   196,
      -1,   173,     3,    62,    -1,   173,     3,    62,    88,   190,
      89,    -1,    88,   128,    89,    -1,   129,    -1,   128,    90,
     129,    -1,    84,    -1,    83,    -1,   131,    -1,    48,   190,
      -1,   125,    -1,    -1,   131,    -1,   134,    -1,   135,    -1,
      31,   190,   132,    -1,    30,   190,   131,    -1,    30,   190,
      31,   190,   132,    -1,   137,    -1,   138,    -1,    22,    88,
     141,    89,    52,   139,    -1,    22,   143,    52,   139,    -1,
     140,   121,    -1,    -1,    19,    -1,   142,    -1,   141,    90,
     142,    -1,   173,    62,     6,    -1,    88,   144,    89,    -1,
     145,    -1,   144,    90,   145,    -1,   173,   146,    -1,   126,
      -1,    -1,   125,    -1,   149,   259,   148,    -1,    63,   107,
     150,    35,    63,    -1,    51,    63,    -1,    -1,    72,    -1,
      16,    72,    -1,   151,   152,    -1,   158,   107,    -1,    51,
      87,   107,    -1,   153,    -1,   151,   107,   153,    -1,   107,
      -1,   107,   158,   107,    -1,   110,    91,   139,   114,    87,
      -1,     1,    87,    -1,    88,   155,    89,    -1,   156,    -1,
     155,    87,   156,    -1,   110,    91,   157,   174,   114,    -1,
       1,    -1,    -1,    18,    -1,    26,   175,    45,   107,   159,
      35,    26,    87,    -1,   160,    -1,   159,   160,    -1,    79,
     161,    13,   107,   150,    -1,   162,    -1,   161,    92,   162,
      -1,   190,    -1,   163,    -1,    54,    -1,   173,   125,    -1,
     126,    -1,    18,   121,    -1,    18,    27,   121,    -1,    18,
      20,   121,    -1,    18,   165,    59,   244,    -1,    18,   165,
      40,   244,    67,   174,    -1,    -1,    60,    -1,    -1,   170,
      -1,    -1,   168,    -1,   169,    -1,   168,   169,    -1,   108,
      -1,   260,    -1,   329,    -1,   104,    -1,   171,    -1,   170,
     171,    -1,   172,    -1,   169,    -1,   250,    -1,   256,    -1,
     269,    -1,   278,    -1,   175,    -1,   180,    -1,   183,    -1,
     184,    -1,   179,    -1,   175,    -1,   174,     3,   185,    -1,
     174,    93,   175,    -1,    84,    -1,   175,    -1,   176,    93,
     175,    -1,   176,    -1,   177,    90,   176,    -1,    83,    -1,
      85,    -1,   173,    88,   181,    89,    -1,   182,    -1,   181,
      90,   182,    -1,   190,    -1,   189,    -1,   163,    -1,     1,
      -1,   173,    93,   175,    -1,   173,    93,   178,    -1,   173,
      93,   179,    -1,   173,    93,    20,    -1,   173,     3,   185,
      -1,    84,    -1,    31,    -1,    30,    -1,    18,    -1,    86,
      -1,   178,    -1,    51,    -1,    88,   189,    89,    -1,    88,
     188,    89,    -1,    88,   190,    81,   181,    89,    -1,    88,
     190,    81,    51,    63,    89,    -1,    88,    51,    63,    89,
      -1,   182,    90,   182,    -1,   188,    90,   182,    -1,   161,
      13,   190,    -1,   193,    -1,   190,   191,   193,    -1,   190,
     192,   193,    -1,    21,    -1,    53,    -1,    82,    -1,    21,
      75,    -1,    53,    33,    -1,   196,    -1,   196,   194,   196,
      -1,   196,   195,   126,    -1,   196,   195,   173,    -1,    94,
      -1,     9,    -1,    95,    -1,     7,    -1,    96,    -1,    11,
      -1,    44,    -1,    50,    44,    -1,   197,   199,    -1,   199,
      -1,   196,   198,   199,    -1,    97,    -1,    98,    -1,    97,
      -1,    98,    -1,    99,    -1,   201,    -1,   199,   200,   201,
      -1,   100,    -1,   101,    -1,    48,    -1,    64,    -1,   202,
      -1,    50,   202,    -1,    15,   202,    -1,   202,     8,   202,
      -1,   186,    -1,   173,    -1,   205,    -1,   204,    -1,   203,
      -1,   187,    -1,    88,   190,    89,    -1,   173,     3,   203,
      -1,    49,   173,    -1,    49,   204,    -1,   207,    -1,   206,
     207,    -1,   208,    -1,   211,   207,    -1,   209,    -1,   210,
      -1,   104,    -1,   212,    -1,   213,    -1,   236,    -1,   239,
      -1,   240,    -1,   251,    -1,   290,    -1,   301,    -1,   317,
      -1,   335,    -1,   318,    -1,     1,    87,    -1,   214,    -1,
     220,    -1,   224,    -1,   231,    -1,   287,    -1,   291,    -1,
       5,    84,    10,    -1,    51,    87,    -1,   173,    12,   190,
      87,    -1,    43,   215,   219,    35,    43,    87,    -1,   216,
      -1,   215,    34,   216,    -1,   217,   206,    -1,   218,    75,
      -1,   190,    -1,    -1,    33,   206,    -1,   221,   107,   222,
      35,    26,    87,    -1,    26,   190,    45,    -1,    -1,   222,
     223,    -1,    79,   161,    13,   206,    -1,   225,   226,   229,
     230,    87,    -1,    -1,    84,    91,    -1,    -1,    80,   218,
      -1,   227,   228,   145,    -1,    39,    84,    44,    -1,    -1,
      68,    -1,    47,   206,    35,    47,    -1,    -1,   243,    -1,
     225,   232,   233,    35,   230,    87,    -1,    -1,    28,   166,
      -1,    24,   234,    -1,   206,   235,    -1,    -1,   313,    -1,
      38,   237,   238,    87,    -1,    -1,   173,    -1,    -1,    79,
     218,    -1,    67,    87,    -1,    67,   190,    87,    -1,    42,
     173,    87,    -1,   242,    87,    -1,   326,    87,    -1,   249,
      16,    87,    -1,    59,   176,   244,    -1,    40,   243,   244,
      67,   173,    -1,    40,   243,    -1,   176,    -1,    85,    -1,
      -1,   245,    -1,    88,   246,    89,    -1,   247,    -1,   246,
      87,   247,    -1,   110,    91,   248,   174,   114,    -1,     1,
      -1,    -1,    44,    -1,    55,    -1,    44,    55,    -1,    18,
      -1,   242,    45,    -1,   249,   166,   233,    35,   230,    87,
      -1,   173,    87,    -1,   253,    87,    -1,   327,    87,    -1,
      56,   176,    45,   167,   254,    35,   255,    -1,    -1,    58,
     167,    -1,    -1,   176,    -1,    56,    25,   176,    45,   166,
     257,    35,   255,    87,    -1,    -1,   233,    -1,   149,   259,
      58,    -1,    -1,    46,    -1,    78,   261,    87,    -1,    78,
      76,   261,    87,    -1,   173,    -1,   261,    90,   173,    -1,
     110,    91,   112,   121,   264,    87,    -1,   110,    91,    37,
     264,    87,    -1,   263,    -1,    56,   176,   264,    87,    -1,
     242,   264,    87,    -1,   320,    56,   176,   264,    87,    -1,
     320,   242,   264,    87,    -1,    65,   173,    -1,   266,    87,
      -1,    73,   175,   267,    -1,    73,    76,   175,   117,   267,
      -1,    -1,    45,   281,   285,   268,    35,   230,    -1,    -1,
      58,   281,   285,    -1,    73,    25,   175,    45,   166,   233,
      35,   230,    87,    -1,   271,    87,    -1,    60,    84,   272,
      -1,    60,    76,   175,   117,   272,    -1,    45,   274,   273,
      35,   230,    -1,    -1,    58,   276,    -1,    -1,   274,   275,
      -1,   282,    -1,   242,    87,    -1,   329,    -1,   104,    -1,
      -1,   276,   277,    -1,   275,    -1,   153,    -1,    60,    25,
     175,    45,   279,    35,   230,    87,    -1,   107,    -1,   279,
     280,   107,    -1,   283,    -1,   250,    -1,   242,    87,    -1,
     107,    -1,   281,   282,   107,    -1,    36,    84,   244,    87,
      -1,    36,    84,    88,   145,    89,   244,    87,    -1,    36,
      84,   244,    79,   218,   284,    -1,    36,    84,    88,   227,
     145,    89,   244,    79,   218,   284,    -1,    87,    -1,    45,
     166,   233,    35,   230,    87,    -1,    -1,   285,   329,   107,
      -1,   251,    -1,   288,    87,    -1,   288,    32,   234,    35,
     230,    87,    -1,    17,   289,   244,    -1,   175,    -1,   289,
      88,   190,    89,    -1,    29,   190,    87,    -1,    29,    77,
     190,    87,    -1,   292,    -1,   297,    -1,   298,    -1,   299,
      -1,    69,   293,   294,   219,    35,    69,    87,    -1,   295,
      -1,    79,   218,    13,   295,    -1,    -1,   294,    53,   293,
      -1,   287,   300,    -1,   290,   300,    -1,    74,    87,    -1,
     290,   300,    -1,   286,   300,    -1,    69,   296,    75,    14,
     206,    35,    69,    87,    -1,    69,   286,   300,    53,   290,
     300,    35,    69,    87,    -1,    69,   286,   300,    33,   206,
      35,    69,    87,    -1,    -1,   206,    -1,    14,   261,    87,
      -1,    -1,   302,   303,    -1,   104,   107,    -1,   305,   304,
     308,   107,    -1,   304,   308,   107,    -1,    -1,    58,    -1,
     306,   307,    -1,   305,   306,   307,    -1,   305,   104,    -1,
      81,   177,    87,    -1,    -1,   307,   260,    -1,   252,    -1,
     256,    -1,   241,    -1,   250,    -1,   309,    -1,   319,    -1,
     263,    -1,    70,    88,   176,    89,   310,    -1,   250,    -1,
     256,    -1,   269,    -1,   278,    -1,    73,    25,   175,    45,
      70,    87,    -1,    56,    25,   176,    45,    70,    87,    -1,
     242,    45,    70,    87,    -1,    60,    25,   175,    45,    70,
      87,    -1,   110,    91,    37,    87,    -1,    37,   314,    -1,
     313,   314,    -1,    79,   315,    13,   206,    -1,    79,    84,
      91,   315,    13,   206,    -1,   316,    -1,   315,    92,   316,
      -1,   173,    -1,    54,    -1,    61,   237,    87,    -1,    66,
     173,    87,    -1,    66,   173,    81,    14,    87,    -1,   320,
     242,    87,    -1,   320,   253,    87,    -1,    41,    -1,   320,
     321,    -1,   247,    87,    -1,    76,   175,   322,    45,   324,
      87,    -1,    81,    59,   175,   244,   323,    87,    -1,    81,
      40,   243,   244,    67,   173,   323,    87,    -1,    81,    56,
     175,    45,    49,   173,    88,     6,    89,    87,    -1,    81,
      56,   175,    45,    49,   173,    87,    -1,   260,    -1,    -1,
     154,    -1,    88,     6,    89,    -1,    -1,    45,   173,    -1,
      45,     6,    -1,    88,     6,    89,    -1,    62,     6,    -1,
      48,     6,    -1,    30,     6,    -1,    30,     6,    31,     6,
      -1,    31,     6,    -1,   136,    -1,   164,    -1,   258,    -1,
     325,    -1,    49,   121,    -1,    49,   121,    81,    58,    -1,
      16,    49,   121,    81,    58,    -1,   242,    45,   328,    -1,
      56,   176,    45,   328,    -1,    49,   173,    -1,   330,    -1,
     331,    -1,   334,    -1,    39,   174,    78,   190,    87,    -1,
      39,   174,    78,    63,   332,   333,    35,    63,    87,    -1,
      -1,    23,    48,   190,    87,    -1,    -1,   333,   174,    23,
     190,    62,   126,    87,    -1,    39,   174,    78,    23,   190,
      87,    -1,   204,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   100,   100,   103,   104,   107,   108,   111,   112,   115,
     116,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   134,   137,   138,   141,   144,   145,
     146,   147,   150,   151,   154,   155,   158,   161,   164,   165,
     166,   169,   170,   173,   174,   175,   176,   177,   178,   179,
     180,   183,   186,   187,   190,   191,   194,   197,   198,   199,
     200,   201,   204,   207,   208,   209,   212,   214,   215,   218,
     219,   222,   223,   227,   230,   231,   234,   235,   238,   241,
     242,   245,   246,   249,   252,   255,   258,   259,   262,   263,
     266,   269,   272,   273,   276,   277,   280,   281,   284,   287,
     288,   291,   292,   293,   296,   297,   298,   301,   302,   305,
     306,   309,   310,   313,   316,   317,   320,   321,   324,   325,
     328,   331,   332,   335,   338,   339,   342,   343,   344,   347,
     348,   351,   352,   353,   354,   355,   358,   359,   362,   363,
     366,   367,   370,   371,   374,   375,   376,   377,   380,   381,
     384,   385,   388,   389,   390,   391,   394,   395,   396,   397,
     398,   401,   402,   403,   406,   409,   410,   413,   414,   417,
     420,   423,   426,   427,   430,   431,   432,   433,   436,   437,
     438,   439,   442,   445,   446,   447,   448,   451,   452,   453,
     456,   457,   458,   459,   460,   463,   464,   467,   470,   471,
     472,   475,   476,   477,   480,   481,   484,   485,   486,   487,
     490,   491,   492,   493,   494,   495,   498,   499,   502,   503,
     504,   507,   508,   511,   512,   513,   516,   517,   520,   521,
     522,   523,   526,   527,   528,   529,   532,   533,   534,   535,
     536,   539,   540,   543,   546,   547,   550,   551,   554,   555,
     558,   559,   560,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   577,   578,   579,   580,   581,
     582,   585,   588,   591,   594,   597,   598,   601,   604,   607,
     610,   611,   614,   617,   620,   621,   624,   627,   630,   631,
     634,   635,   636,   639,   642,   643,   646,   649,   650,   653,
     656,   657,   660,   663,   666,   667,   670,   673,   674,   677,
     678,   681,   682,   685,   688,   689,   690,   693,   694,   695,
     698,   699,   702,   703,   706,   709,   710,   713,   714,   717,
     718,   719,   720,   721,   724,   727,   731,   734,   735,   738,
     742,   743,   746,   747,   750,   754,   755,   758,   761,   762,
     765,   766,   769,   770,   773,   774,   775,   778,   779,   780,
     781,   784,   787,   790,   791,   794,   795,   798,   799,   802,
     806,   809,   810,   813,   816,   817,   820,   821,   824,   825,
     826,   827,   830,   831,   834,   834,   836,   840,   841,   844,
     845,   846,   849,   850,   853,   854,   857,   858,   862,   863,
     866,   867,   870,   873,   874,   877,   880,   881,   884,   885,
     888,   889,   890,   891,   894,   898,   899,   902,   903,   906,
     907,   908,   911,   912,   914,   919,   924,   929,   930,   933,
     936,   937,   938,   941,   942,   945,   946,   949,   950,   951,
     954,   957,   958,   961,   962,   963,   964,   965,   966,   967,
     970,   974,   975,   976,   977,   980,   981,   982,   983,   986,
     989,   990,   993,   994,   997,   998,  1001,  1002,  1005,  1008,
    1009,  1012,  1013,  1016,  1017,  1020,  1021,  1022,  1024,  1026,
    1027,  1028,  1031,  1032,  1033,  1036,  1037,  1038,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1053,  1054,
    1055,  1058,  1061,  1064,  1067,  1068,  1069,  1072,  1075,  1078,
    1079,  1082,  1083,  1086,  1089
};
//#endif

//#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIC", "DOT_DOT", "LT_LT", "BOX", "LT_EQ", 
  "EXPON", "NE", "GT_GT", "GE", "IS_ASSIGNED", "RIGHT_SHAFT", "ABORT", 
  "ABS", "ABSTRACT", "ACCEPT", "ACCESS", "ALIASED", "ALL", "AND", "ARRAY", 
  "AT", "BEGiN", "BODY", "CASE", "CONSTANT", "DECLARE", "DELAY", "DELTA", 
  "DIGITS", "DO", "ELSE", "ELSIF", "END", "ENTRY", "EXCEPTION", "EXIT", 
  "FOR", "FUNCTION", "GENERIC", "GOTO", "IF", "IN", "IS", "LIMITED", 
  "LOOP", "MOD", "NEW", "NOT", "NuLL", "OF", "OR", "OTHERS", "OUT", 
  "PACKAGE", "PRAGMA", "PRIVATE", "PROCEDURE", "PROTECTED", "RAISE", 
  "RANGE", "RECORD", "REM", "RENAMES", "REQUEUE", "RETURN", "REVERSE", 
  "SELECT", "SEPARATE", "SUBTYPE", "TAGGED", "TASK", "TERMINATE", "THEN", 
  "TYPE", "UNTIL", "USE", "WHEN", "WHILE", "WITH", "XOR", "char_lit", 
  "identifier", "char_string", "numeric_lit", "';'", "'('", "')'", "','", 
  "':'", "'|'", "'.'", "'='", "'<'", "'>'", "'+'", "'-'", "'&'", "'*'", 
  "'/'", "$accept", "goal_symbol", "pragma", "pragma_arg_s", "pragma_arg", 
  "pragma_s", "decl", "object_decl", "def_id_s", "def_id", 
  "object_qualifier_opt", "object_subtype_def", "init_opt", "number_decl", 
  "type_decl", "discrim_part_opt", "type_completion", "type_def", 
  "subtype_decl", "subtype_ind", "constraint", 
  "decimal_digits_constraint", "derived_type", "range_constraint", 
  "range", "enumeration_type", "enum_id_s", "enum_id", "integer_type", 
  "range_spec", "range_spec_opt", "real_type", "float_type", "fixed_type", 
  "array_type", "unconstr_array_type", "constr_array_type", 
  "component_subtype_def", "aliased_opt", "index_s", "index", 
  "iter_index_constraint", "iter_discrete_range_s", "discrete_range", 
  "range_constr_opt", "record_type", "record_def", "tagged_opt", 
  "comp_list", "comp_decl_s", "variant_part_opt", "comp_decl", 
  "discrim_part", "discrim_spec_s", "discrim_spec", "access_opt", 
  "variant_part", "variant_s", "variant", "choice_s", "choice", 
  "discrete_with_range", "access_type", "prot_opt", "decl_part", 
  "decl_item_s", "decl_item_s1", "decl_item", "decl_item_or_body_s1", 
  "decl_item_or_body", "body", "name", "mark", "simple_name", 
  "compound_name", "c_name_list", "used_char", "operator_symbol", 
  "indexed_comp", "value_s", "value", "selected_comp", "attribute", 
  "attribute_id", "literal", "aggregate", "value_s_2", "comp_assoc", 
  "expression", "logical", "short_circuit", "relation", "relational", 
  "membership", "simple_expression", "unary", "adding", "term", 
  "multiplying", "factor", "primary", "parenthesized_primary", 
  "qualified", "allocator", "statement_s", "statement", "unlabeled", 
  "simple_stmt", "compound_stmt", "label", "null_stmt", "assign_stmt", 
  "if_stmt", "cond_clause_s", "cond_clause", "cond_part", "condition", 
  "else_opt", "case_stmt", "case_hdr", "alternative_s", "alternative", 
  "loop_stmt", "label_opt", "iteration", "iter_part", "reverse_opt", 
  "basic_loop", "id_opt", "block", "block_decl", "block_body", 
  "handled_stmt_s", "except_handler_part_opt", "exit_stmt", "name_opt", 
  "when_opt", "return_stmt", "goto_stmt", "subprog_decl", "subprog_spec", 
  "designator", "formal_part_opt", "formal_part", "param_s", "param", 
  "mode", "subprog_spec_is_push", "subprog_body", "procedure_call", 
  "pkg_decl", "pkg_spec", "private_part", "c_id_opt", "pkg_body", 
  "body_opt", "private_type", "limited_opt", "use_clause", "name_s", 
  "rename_decl", "rename_unit", "renames", "task_decl", "task_spec", 
  "task_def", "task_private_opt", "task_body", "prot_decl", "prot_spec", 
  "prot_def", "prot_private_opt", "prot_op_decl_s", "prot_op_decl", 
  "prot_elem_decl_s", "prot_elem_decl", "prot_body", "prot_op_body_s", 
  "prot_op_body", "entry_decl_s", "entry_decl", "entry_body", 
  "entry_body_part", "rep_spec_s", "entry_call", "accept_stmt", 
  "accept_hdr", "entry_name", "delay_stmt", "select_stmt", "select_wait", 
  "guarded_select_alt", "or_select", "select_alt", "delay_or_entry_alt", 
  "async_select", "timed_entry_call", "cond_entry_call", "stmts_opt", 
  "abort_stmt", "compilation", "comp_unit", "private_opt", "context_spec", 
  "with_clause", "use_clause_opt", "unit", "subunit", "subunit_body", 
  "body_stub", "exception_decl", "except_handler_part", 
  "exception_handler", "except_choice_s", "except_choice", "raise_stmt", 
  "requeue_stmt", "generic_decl", "generic_formal_part", "generic_formal", 
  "generic_discrim_part_opt", "subp_default", "generic_type_def", 
  "generic_derived_type", "generic_subp_inst", "generic_pkg_inst", 
  "generic_inst", "rep_spec", "attrib_def", "record_type_spec", 
  "align_opt", "comp_loc_s", "address_spec", "code_stmt", 0
};
//#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    59,    40,    41,
      44,    58,   124,    46,    61,    60,    62,    43,    45,    38,
      42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   102,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   110,   110,   111,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   116,   117,   117,
     117,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   121,   121,   122,   122,   123,   124,   124,   124,
     124,   124,   125,   126,   126,   126,   127,   128,   128,   129,
     129,   130,   130,   131,   132,   132,   133,   133,   134,   135,
     135,   136,   136,   137,   138,   139,   140,   140,   141,   141,
     142,   143,   144,   144,   145,   145,   146,   146,   147,   148,
     148,   149,   149,   149,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   159,   159,   160,   161,   161,   162,   162,   162,   163,
     163,   164,   164,   164,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   172,   172,   173,   173,   173,   173,
     173,   174,   174,   174,   175,   176,   176,   177,   177,   178,
     179,   180,   181,   181,   182,   182,   182,   182,   183,   183,
     183,   183,   184,   185,   185,   185,   185,   186,   186,   186,
     187,   187,   187,   187,   187,   188,   188,   189,   190,   190,
     190,   191,   191,   191,   192,   192,   193,   193,   193,   193,
     194,   194,   194,   194,   194,   194,   195,   195,   196,   196,
     196,   197,   197,   198,   198,   198,   199,   199,   200,   200,
     200,   200,   201,   201,   201,   201,   202,   202,   202,   202,
     202,   203,   203,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   208,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   210,   210,   210,   210,   210,
     210,   211,   212,   213,   214,   215,   215,   216,   217,   218,
     219,   219,   220,   221,   222,   222,   223,   224,   225,   225,
     226,   226,   226,   227,   228,   228,   229,   230,   230,   231,
     232,   232,   233,   234,   235,   235,   236,   237,   237,   238,
     238,   239,   239,   240,   241,   241,   241,   242,   242,   242,
     243,   243,   244,   244,   245,   246,   246,   247,   247,   248,
     248,   248,   248,   248,   249,   250,   251,   252,   252,   253,
     254,   254,   255,   255,   256,   257,   257,   258,   259,   259,
     260,   260,   261,   261,   262,   262,   262,   263,   263,   263,
     263,   264,   265,   266,   266,   267,   267,   268,   268,   269,
     270,   271,   271,   272,   273,   273,   274,   274,   275,   275,
     275,   275,   276,   276,   277,   277,   278,   279,   279,   280,
     280,   280,   281,   281,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   287,   287,   288,   289,   289,   290,   290,
     291,   291,   291,   291,   292,   293,   293,   294,   294,   295,
     295,   295,   296,   296,   297,   298,   299,   300,   300,   301,
     302,   302,   302,   303,   303,   304,   304,   305,   305,   305,
     306,   307,   307,   308,   308,   308,   308,   308,   308,   308,
     309,   310,   310,   310,   310,   311,   311,   311,   311,   312,
     313,   313,   314,   314,   315,   315,   316,   316,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   321,   321,   321,
     321,   321,   322,   322,   322,   323,   323,   323,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   325,   325,
     325,   326,   327,   328,   329,   329,   329,   330,   331,   332,
     332,   333,   333,   334,   335
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     6,     1,     3,     1,     3,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     6,     1,     3,     1,     0,     1,
       1,     2,     1,     1,     0,     2,     6,     5,     0,     1,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     2,     1,     1,     1,     3,     2,     4,     4,
       5,     5,     2,     3,     3,     6,     3,     1,     3,     1,
       1,     1,     2,     1,     0,     1,     1,     1,     3,     3,
       5,     1,     1,     6,     4,     2,     0,     1,     1,     3,
       3,     3,     1,     3,     2,     1,     0,     1,     3,     5,
       2,     0,     1,     2,     2,     2,     3,     1,     3,     1,
       3,     5,     2,     3,     1,     3,     5,     1,     0,     1,
       8,     1,     2,     5,     1,     3,     1,     1,     1,     2,
       1,     2,     3,     3,     4,     6,     0,     1,     0,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     3,     1,     3,     1,
       1,     4,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     5,     6,     4,     3,     3,     3,     1,     3,
       3,     1,     1,     1,     2,     2,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     2,     4,     6,     1,     3,     2,     2,     1,
       0,     2,     6,     3,     0,     2,     4,     5,     0,     2,
       0,     2,     3,     3,     0,     1,     4,     0,     1,     6,
       0,     2,     2,     2,     0,     1,     4,     0,     1,     0,
       2,     2,     3,     3,     2,     2,     3,     3,     5,     2,
       1,     1,     0,     1,     3,     1,     3,     5,     1,     0,
       1,     1,     2,     1,     2,     6,     2,     2,     2,     7,
       0,     2,     0,     1,     9,     0,     1,     3,     0,     1,
       3,     4,     1,     3,     6,     5,     1,     4,     3,     5,
       4,     2,     2,     3,     5,     0,     6,     0,     3,     9,
       2,     3,     5,     5,     0,     2,     0,     2,     1,     2,
       1,     1,     0,     2,     1,     1,     8,     1,     3,     1,
       1,     2,     1,     3,     4,     7,     6,    10,     1,     6,
       0,     3,     1,     2,     6,     3,     1,     4,     3,     4,
       1,     1,     1,     1,     7,     1,     4,     0,     3,     2,
       2,     2,     2,     2,     8,     9,     8,     0,     1,     3,
       0,     2,     2,     4,     3,     0,     1,     2,     3,     2,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     1,     1,     6,     6,     4,     6,     4,
       2,     2,     4,     6,     1,     3,     1,     1,     3,     3,
       5,     3,     3,     1,     2,     2,     6,     6,     8,    10,
       7,     1,     0,     1,     3,     0,     2,     2,     3,     2,
       2,     2,     4,     2,     1,     1,     1,     1,     2,     4,
       5,     3,     4,     2,     1,     1,     1,     5,     9,     0,
       4,     0,     7,     6,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
     430,     0,     0,     9,   435,   164,     0,     1,   432,   436,
       0,   431,     0,   435,   441,     3,     0,    10,   164,   165,
     167,     0,     0,   473,     0,     0,     0,   445,     0,     0,
     446,   443,     0,   444,   449,     9,   447,   448,     0,     0,
       0,   439,     0,   441,   437,     0,     0,     0,   189,   169,
     170,   187,     0,   221,   222,     0,     5,   237,   156,   188,
     160,   157,   158,   159,   236,   241,     7,   198,   206,     0,
     219,   226,   232,   240,   239,   238,     0,   440,     0,   321,
     320,   319,     0,     0,   322,     0,   334,     0,   314,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
     147,   144,    11,     0,    25,    12,    13,    14,     0,   151,
       0,   148,   150,    15,     0,   152,    16,   153,   145,    20,
     356,    17,     0,   154,    18,     0,   155,    22,    19,    21,
     146,   504,   505,   506,   337,   434,   328,     0,     0,     0,
       0,     0,     0,     0,   481,   474,   315,   338,     9,   438,
     442,   156,   234,   244,   245,   233,   177,   189,   128,   130,
       0,   124,   127,   237,     0,     0,   175,   126,   206,     0,
       0,     0,     0,     0,     0,   201,   202,   203,     0,     0,
     213,   211,   215,   216,     0,   210,   212,   214,   223,   224,
     225,     0,     0,     0,   218,   230,   231,   228,   229,     0,
       0,   166,   168,     0,     0,   323,     0,     0,     0,   317,
       0,     0,   501,   361,   358,    23,   316,     0,   161,     0,
       0,     0,     0,     0,     0,     0,   365,    38,     0,   352,
       0,     0,    28,     0,     0,   149,   334,   362,   370,     0,
     482,     0,     0,     0,   329,   471,     0,   475,   472,   433,
       0,     0,     0,     0,     0,   129,     0,   191,     0,   190,
       0,   242,     0,     4,     6,   186,   185,   184,   183,   182,
     243,     0,   172,   175,   126,   181,   178,   179,   180,     8,
     204,   205,   199,   200,   217,   207,   208,   209,     0,   220,
     227,   235,     0,   325,     0,     0,     0,     0,     0,   340,
       0,   142,     0,   502,   357,     0,   503,     0,     0,     0,
       0,     0,     0,    38,   376,   371,     0,     0,    38,     9,
     363,     0,    41,    39,     0,   350,     0,    26,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   307,     0,
       0,     0,   307,     0,     0,     0,   164,   252,     0,     0,
       0,   246,   248,   250,   251,     0,   253,   254,   265,   266,
       9,   267,   290,   268,   302,   255,   256,   257,   258,   269,
       0,   259,   270,   410,   411,   412,   413,   260,   261,   263,
     262,   297,     0,     0,     0,     0,   483,     0,   322,     0,
     322,   333,   330,   331,     0,   360,   194,   197,   125,   127,
     126,    64,    62,   237,   195,   196,   189,     0,    63,   171,
       0,     0,   324,   318,   345,     0,     0,     0,     0,     0,
     143,     0,     0,     0,     0,     0,   451,   452,   453,   454,
     450,   162,     0,   509,     0,   163,     0,     9,     0,   374,
       0,    53,     0,   365,   392,   400,   117,     0,     0,     0,
     114,   101,     0,   351,   353,    31,     0,   459,     0,     0,
      34,    32,    33,    81,    82,   264,     0,     0,   406,   322,
       0,     0,     0,   308,   309,     0,   279,   280,   275,     0,
       0,   272,     0,     0,   311,     0,     0,     0,     0,   402,
       0,     0,     0,   417,   415,     0,   289,     0,   336,   514,
       0,   247,   303,   305,   249,   284,     0,     0,     0,     0,
     294,     0,     0,   403,     0,   298,   457,   359,     0,   101,
       0,     0,   485,   332,    34,     0,     0,   192,   173,   326,
     346,     0,     0,     0,     0,   341,   342,     0,     0,   334,
       0,     0,   511,   507,     0,     0,   387,     0,   372,     0,
     382,   381,     0,     0,   377,   378,   380,    51,     0,    52,
      55,    54,     0,     0,   364,     9,   367,    40,   118,     0,
     113,     0,   136,     0,     0,     0,     0,   102,     0,    42,
      49,    73,    43,    44,    71,    45,    76,    77,    46,    47,
     348,    48,    50,    37,     0,   355,     0,     0,     0,     0,
       0,   271,   429,     0,   405,   283,     0,   408,     0,     0,
     313,     0,     0,     0,     0,   278,   468,     0,   469,   312,
     421,     0,     0,   423,   419,   420,   280,     0,     0,     0,
     460,   461,     0,   301,     0,   291,     0,   297,   295,     0,
       0,     0,   335,   484,     0,     0,     0,     0,     0,     0,
       0,   494,   348,   495,   496,     0,   497,     0,     0,     0,
       0,   327,     0,   193,   342,     0,     0,     0,   343,   339,
       0,     0,   513,     0,     0,   456,   458,   297,     0,     0,
     390,     9,   389,   322,     0,   379,   297,    96,   455,     0,
     393,     9,     0,     9,   119,     0,   115,     0,   103,     0,
       0,   137,   131,     0,     0,    74,    72,    57,    70,    69,
       0,    67,   349,     0,    36,    95,     0,    88,     0,    92,
     237,    86,    35,    24,   354,   164,     0,   409,   310,   306,
       0,   276,     0,     0,     0,     0,     0,     0,     0,     0,
     273,   467,   164,   466,     0,   464,     0,     0,   285,   293,
       0,     0,   292,   237,   297,   297,     0,   491,   493,   490,
     498,   489,     0,     0,   476,   485,     0,   487,   486,   477,
      65,     0,     9,     0,     0,     0,     0,     0,   322,   391,
     388,     0,     0,     0,     0,   385,   384,   383,   373,    97,
      56,   297,   400,   297,   401,    34,     0,   133,   132,   322,
     322,     0,    79,    75,    78,     0,    66,     0,     0,   347,
       9,    98,     0,     0,    91,     0,     0,    94,    87,    84,
       0,   407,     0,   470,     0,   416,     0,     0,   418,     0,
       0,     0,     0,     0,     0,     0,     0,   287,     0,     0,
       0,     0,     0,   488,     0,   480,     0,   344,   510,     0,
       0,   386,     0,     0,     0,   394,   112,    86,     0,   368,
     366,   116,     0,     0,   134,    74,    58,    59,    68,   100,
       0,    86,    89,     0,    93,    90,    85,   274,   420,     0,
       0,     0,     0,     0,     0,   465,   282,     0,   296,   299,
     404,     0,   492,   499,   478,     0,   508,     0,     0,     0,
     322,    34,   369,    60,    61,     0,    80,     0,     0,     0,
       9,   107,     9,    83,     0,     0,     0,   414,     0,     0,
       0,   500,     0,     0,     0,     0,     0,     0,   135,     0,
       9,     0,     0,   104,   105,   426,     0,   424,     0,   479,
       0,   322,     0,   398,   396,   395,   111,     9,   106,    99,
     108,     9,   425,   512,     0,     0,     0,   110,     0,     0,
       0,     0,   121,     0,   297,     0,     0,   122,   397,     0,
       9,     0,   399,     0,   120,   123
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     2,   347,    55,    56,   444,   101,   102,   103,   104,
     331,   460,   599,   105,   106,   322,   452,   579,   107,   440,
     559,   560,   580,   581,   159,   582,   710,   711,   583,   803,
     804,   585,   586,   587,   462,   463,   464,   819,   820,   716,
     717,   597,   718,   719,   817,   589,   811,   590,   909,   910,
     933,   911,   323,   449,   450,   695,   912,   961,   962,   160,
     161,   162,   591,   703,   108,   299,   300,   109,   110,   111,
     112,    57,   217,   151,    80,    21,    59,    60,    61,   271,
     272,    62,    63,   269,    64,    65,   165,   273,   476,   178,
     179,    67,   191,   192,    68,    69,   193,    70,   199,    71,
      72,    73,    74,    75,   622,   351,   352,   353,   354,   355,
     356,   357,   358,   477,   478,   479,   480,   613,   359,   360,
     632,   748,   361,   362,   509,   510,   639,   637,   514,   363,
     511,   234,   364,   502,   365,   474,   609,   366,   367,   113,
     114,   515,   204,   205,   292,   293,   394,    29,   115,   368,
     116,    32,   419,   669,   117,   531,   592,   713,   118,   230,
     119,   120,    89,   121,   122,   320,   692,   123,   124,   125,
     315,   553,   439,   554,   684,   787,   126,   547,   681,   445,
     555,   682,   944,   566,   490,   369,   370,   469,   371,   372,
     373,   493,   626,   494,   495,   374,   375,   376,   623,   377,
       4,    11,    12,    13,    14,    44,    35,    36,   430,   127,
     128,   503,   630,   744,   745,   378,   379,   129,    38,   145,
     387,   660,   655,   656,    39,    40,   212,   130,   131,   132,
     542,   674,   133,   380
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -701
static const short yypact[] =
{
      15,    24,    85,  -701,   266,   172,    -1,  -701,    15,  -701,
     273,  -701,  1013,   708,  -701,  -701,  2212,  -701,  -701,  -701,
     276,   492,   770,  -701,    74,   273,   324,  -701,   519,  1106,
    -701,  -701,   375,  -701,  -701,  -701,  -701,  -701,   534,   391,
     399,  -701,  1013,  -701,   342,   950,   784,   950,  -701,  -701,
    -701,  -701,   910,  -701,  -701,   782,  -701,    49,   528,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,   467,  -701,  1030,   572,
     284,  -701,   558,  -701,  -701,  -701,   273,  -701,   273,  -701,
     276,   275,   273,    23,   504,   273,   565,   784,  -701,   494,
     540,   562,   273,   187,   316,   561,   476,   578,   887,  -701,
    -701,  -701,  -701,   840,  -701,  -701,  -701,  -701,   674,  -701,
    1159,  -701,  -701,  -701,   630,  -701,  -701,  -701,  -701,  -701,
    -701,  -701,   600,  -701,  -701,   615,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,  -701,    15,  -701,   273,   273,   793,
     853,   428,   619,   631,  -701,  -701,  -701,  -701,  -701,   342,
    -701,  -701,  -701,    49,  -701,  -701,  -701,   660,  -701,  -701,
      48,  -701,   889,   129,   635,   895,   648,   551,   460,   653,
    2212,   272,   926,   493,  2212,   667,   722,  -701,  2212,  2212,
    -701,  -701,  -701,  -701,   719,  -701,  -701,  -701,  -701,  -701,
    -701,  2212,  2212,   572,   284,  -701,  -701,  -701,  -701,   572,
     950,  -701,   276,    99,   705,  -701,   251,   416,   687,  -701,
     348,   784,  -701,   131,  -701,  -701,  -701,   229,  -701,   273,
     273,   273,   738,   745,   273,   273,   747,   733,   784,   131,
     548,   739,   878,  2003,   792,  -701,    54,  -701,  -701,   606,
     744,   770,   273,   273,   686,  -701,   757,  -701,  -701,    15,
     759,  2212,  1554,   452,  2212,  -701,   926,  -701,   926,  -701,
     932,  -701,  2212,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,   900,  -701,  -701,   333,  -701,  -701,  -701,  -701,   467,
    -701,  -701,  -701,  -701,  -701,   680,  -701,    88,    65,   284,
    -701,  -701,     8,  -701,   784,  2050,   208,   507,   609,   808,
    2060,  -701,   859,  -701,  -701,   817,   131,   321,   321,   838,
     273,   285,   841,   733,  -701,  -701,   784,   846,   733,  -701,
    -701,    47,   864,  -701,   576,  -701,   784,  -701,   856,   886,
     432,   220,   813,   820,   784,   273,  2212,  2189,   784,   784,
    2212,   825,   784,   784,  2206,   411,   826,  -701,    81,   833,
    1550,  -701,  -701,  -701,  -701,  2003,  -701,  -701,  -701,  -701,
    -701,  -701,   875,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
     279,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    -701,   770,   852,  2102,   863,   121,  -701,   901,   865,   913,
     865,  -701,   907,  -701,   273,  -701,  -701,   467,  -701,  -701,
     467,   881,  -701,   152,  -701,  -701,   911,   902,   680,  -701,
     926,    99,  -701,   131,   674,   273,   273,   273,  2153,   965,
    -701,   981,   988,   994,   980,  2176,  -701,  -701,  -701,  -701,
    -701,  -701,  2212,  1017,   456,  -701,  1025,   975,   738,  1081,
     961,   153,  2111,   747,    15,  1016,  -701,   968,   912,   587,
    -701,  1028,   974,  -701,   131,  -701,  2212,  -701,   983,   979,
    1056,  1008,  -701,  -701,  -701,  -701,  1065,   593,  -701,   990,
     486,  2212,   652,   131,  1000,   175,   467,   971,  -701,  2003,
    1018,  -701,  1004,   240,  -701,   656,  1005,  2212,   227,  -701,
    1376,  1445,  1212,  -701,  -701,  1019,  -701,  2212,  -701,  -701,
    1020,  -701,  -701,  1020,  -701,    15,  2176,  1021,  2212,  1055,
    1038,   674,  2003,  -701,  1023,  -701,  -701,  -701,  1024,  1119,
    1041,  1063,  1070,  -701,    86,  2212,  1029,  -701,  -701,  -701,
    -701,  1084,   317,  1086,  1091,  -701,   273,   273,   273,  -701,
     671,  1094,  -701,  -701,  1057,  1061,    15,   760,  -701,  1059,
    -701,  -701,  1064,  1117,  -701,  -701,  -701,  -701,  2212,  -701,
    -701,  -701,  1066,   674,  -701,  -701,   440,  -701,  1136,   112,
    -701,   287,   347,  2212,  2212,  2212,   784,  -701,   938,  -701,
    -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,  -701,
    1109,  -701,  -701,  -701,   699,  -701,  2212,  1104,  2212,  1071,
    1072,  -701,  -701,   796,  -701,  -701,   711,  -701,  2212,  1074,
    -701,  2003,  2212,  1122,  1514,  -701,  -701,  1150,  -701,  -701,
    -701,  1156,  1299,   214,  -701,  1095,   373,  1157,   723,   672,
    -701,  -701,    38,  -701,  1129,  -701,  2003,   770,  -701,  2212,
    1141,  1143,  -701,  -701,   396,  1174,  1179,  1180,   784,  1181,
    1182,  -701,  1109,  -701,  -701,  1102,  -701,   784,   784,   198,
    1105,  -701,   217,  -701,   273,  1123,   975,  1125,   276,  -701,
    1151,  1152,  -701,  2212,    36,  -701,  -701,   770,  1118,   191,
    -701,  -701,  -701,  1113,   560,  -701,   770,   577,  -701,  1168,
      15,  -701,  1169,  -701,  -701,   273,  -701,   784,  -701,   784,
     784,  -701,  -701,   613,   554,   577,   467,  1127,  -701,  -701,
     942,  -701,  -701,   777,  -701,  -701,   953,  -701,   966,  -701,
     120,  1187,   467,  -701,  -701,   937,   377,  -701,  -701,  -701,
    1763,  -701,  1166,  1124,   608,  2003,  1183,   429,  1185,  2003,
    -701,  -701,  1130,   131,    53,  -701,  1197,  1554,  -701,  -701,
    1811,  1137,  -701,   104,   770,   770,   784,  1196,  -701,  -701,
    1147,  -701,  1144,  1176,  -701,   102,   247,  -701,   131,  -701,
    -701,  1155,  -701,  2176,   778,  1186,    79,  1161,  1158,  -701,
      15,   796,  1165,  1170,   972,  -701,  -701,  -701,  -701,  -701,
    -701,   770,  1016,   770,    15,    86,  1163,  -701,  -701,   865,
     865,  2212,  -701,  -701,  -701,   844,  -701,   938,  1190,  -701,
    -701,  -701,  1206,   784,  -701,  2212,   663,  -701,  -701,  -701,
     784,  -701,  1173,  -701,  1445,  -701,  1859,  1907,  -701,  1192,
    1955,   758,  2003,   758,  1175,   136,  1217,  -701,  1184,  1188,
    1189,  1233,  1208,  -701,  1193,  -701,   753,  -701,  -701,  1195,
    2212,  -701,    75,  1198,  1178,  -701,  -701,  1187,  1199,  1229,
    -701,  -701,   855,  1205,  -701,   577,  -701,  -701,  -701,  -701,
      55,  1187,  -701,   288,  -701,  -701,  -701,  -701,  -701,  1207,
    1239,  1202,  1214,   221,  1619,  -701,  -701,  2003,  -701,  -701,
    -701,  1226,  -701,  -701,  -701,  1204,  -701,   599,  2212,  2212,
     865,  1056,  -701,  -701,  -701,   273,  -701,   273,  1211,  1250,
    -701,  -701,  -701,  -701,  1288,  1216,  1240,  -701,  1223,  2003,
    1667,  -701,  1224,  2212,  1225,   332,  1228,  1230,    87,  1267,
    -701,  1255,   345,  -701,    15,  -701,  1232,  -701,  1715,  -701,
    1235,   865,  2176,  -701,  -701,  -701,  -701,  -701,    15,  -701,
    -701,  -701,  -701,  -701,  1241,   674,   532,    15,  2212,  1289,
    1554,    42,  -701,   332,   770,   231,  1300,  -701,  -701,  1242,
    -701,  1243,  -701,    55,  -701,  -701
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -701,  -701,     0,  -701,  1177,    -2,  -701,  -701,   -36,  1100,
    -701,  -701,  -502,  -701,  -701,   376,  -701,  -701,  -701,  -303,
    -701,  -701,  -701,  -140,  -187,  -701,  -701,   526,  -701,  -427,
     470,  -701,  -701,  -701,  -391,  -701,  -701,  -329,  -701,  -701,
     523,  -701,  -701,  -604,   657,  -701,  -524,   821,   366,  -701,
    -701,  -645,  1103,  -701,   776,  -701,   417,  -701,   387,  -700,
    1099,  -245,   834,  -701,  -292,   936,  -701,  -167,  -701,  1245,
    -701,   475,  -376,    33,     1,  -701,  1191,  1194,  -701,  1097,
     -21,  -701,  -701,  1050,  -701,  -701,  -701,  1309,    28,  -701,
    -701,   909,  -701,  -701,   -31,  -701,  -701,   -28,  -701,  1164,
      18,   -52,    32,  -701,  -223,  -296,  -701,  -701,  -701,  -701,
    -701,  -701,  -701,  -701,   763,  -701,  -478,   743,  -701,  -701,
    -701,  -701,  -701,  -701,  -701,   518,  -701,  -701,  -438,  -701,
    -701,  -410,   860,  -701,  -701,  1034,  -701,  -701,  -701,    62,
       4,    14,   -78,  -701,  -701,   -18,  -701,  -157,     3,  1026,
     421,  1340,  -701,   716,    20,  -701,   866,   730,    26,  -177,
    -701,   449,   -66,  -701,  -701,   943,  -701,  1082,  -701,  -701,
     951,  -701,  -701,   704,  -701,  -701,  1087,  -701,  -701,   700,
    -431,  -701,   433,   605,  -701,  -326,  -701,  -701,  -333,  -701,
    -701,   662,  -701,   669,  -701,  -701,  -701,  -701,  -454,  -701,
    -701,  -701,  1388,  -701,  1393,  1364,  1366,  -701,  -701,  -701,
    -701,  -701,   908,   579,   583,  -701,  -701,   506,  -701,  -701,
    -701,   647,  -701,  -701,  -701,  -701,  1210,  -412,  -701,  -701,
    -701,  -701,  -701,  -701
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -464
static const short yytable[] =
{
       3,     8,   140,   414,   530,   286,   209,   399,    17,   621,
     350,    20,   492,    41,   565,    30,    28,   208,   524,   491,
     142,   168,   661,   255,   584,    83,    84,   556,   461,   100,
     635,   164,    33,   135,     6,   752,    81,   624,   625,   785,
     301,   194,   141,    19,    66,    30,    28,   835,   446,    58,
     302,   324,   171,   447,   501,    19,   783,    19,    19,   504,
     588,   251,    33,   152,   144,   155,   832,   402,   207,   262,
     150,   775,     1,   746,    27,   246,   136,   966,   154,   202,
     167,   907,   308,   206,   171,     7,   210,    16,    87,   308,
     308,   253,  -237,   497,    83,   411,  -237,   412,   598,    82,
     136,   640,   850,   211,    27,   307,   908,   253,     5,   201,
     100,    19,     1,   446,   507,    19,    76,   747,    19,   270,
      18,   960,   446,   253,   382,   218,    19,   518,   651,   226,
     728,    99,   253,   420,   307,    17,  -237,   172,   239,    99,
     252,   168,   173,   302,   414,   833,   249,   659,   425,   887,
     563,   -96,  -237,   689,   693,   253,   307,   467,    18,    99,
     285,   288,   188,   189,   190,   289,   254,   140,   498,   172,
      19,   240,   310,   384,   173,   150,   172,   854,   307,   310,
     310,   173,   816,    99,   558,  -237,  -237,  -237,  -237,  -237,
     172,   254,   172,   -96,   -96,   173,    99,   173,    66,   751,
     274,   270,   279,    58,   767,    99,   276,   100,   172,   -96,
     -96,   874,   219,   173,   633,   254,   301,   172,   291,   172,
     311,   168,   173,   288,   173,   168,   302,   168,   252,   168,
     307,   408,   308,   415,   919,   404,   539,   405,   175,   777,
     172,   172,   459,   307,   970,   173,   173,   735,   788,    17,
     307,   301,    19,   312,   313,   388,   614,   317,   318,    15,
     965,   302,   610,   172,   458,   349,    -2,   736,   173,   702,
     176,    18,   556,   707,    19,   389,   390,   802,   779,   397,
     400,   867,    18,    50,   274,   448,   274,   950,   274,   350,
     265,   307,    18,   861,   924,   100,   295,    83,   776,   177,
     100,   561,   266,   267,    18,    50,   770,   309,   426,   424,
     520,   512,   522,   833,   498,   172,   838,   839,   501,   795,
     173,   617,   310,   252,     9,   427,   501,   618,   172,    19,
     436,   226,   195,   173,   845,   846,   697,   434,   904,   265,
     173,   220,  -322,   435,    76,   760,   783,    10,   196,   448,
     914,   266,   267,   858,   175,   860,   268,    18,   505,   698,
      52,   565,   665,   203,   470,   472,   513,   699,   468,    76,
     878,   907,   485,   880,   700,   140,   172,   942,    76,   168,
    -109,   173,   349,   100,   197,   198,   176,   349,   730,   528,
     425,   604,   221,   529,   796,   600,   797,   798,   175,   927,
     222,   824,     1,   827,   824,   268,   611,   701,   491,   715,
      76,   491,    85,   750,    19,   177,   532,    90,   100,   943,
      98,   925,  -174,  -174,  -109,   100,   737,   218,   335,    99,
     176,    18,    50,    31,   501,   546,   100,   305,   274,   551,
     337,    76,   100,   552,    17,   756,   335,   693,    19,   533,
     534,  -140,   715,   840,   501,    92,    22,    23,   337,   177,
     540,    34,   134,    31,   262,   211,   821,   180,   698,   181,
     265,   182,   296,     1,  -140,    25,   297,   175,   146,    92,
     963,   563,   266,   267,   594,   486,   147,    95,   175,   298,
     487,    34,    97,    87,    98,    18,    50,    87,   691,   606,
      99,   224,   399,   486,   183,    17,   100,   175,   487,   176,
     184,   349,   826,   275,   401,   245,   830,   876,    37,   457,
     176,   153,   349,   349,   349,   628,   969,   163,   901,   928,
     501,   605,   416,   448,   501,   136,   268,   668,   177,   176,
      52,   174,   913,   543,   349,   959,    17,   789,    37,   177,
     680,   679,   225,   662,   185,   186,   187,   188,   189,   190,
      18,   783,   213,   690,    86,   288,   200,   140,   177,    19,
     670,   671,   175,   229,    22,   175,    49,    18,    50,    77,
     789,   214,    78,   221,    87,   801,   687,    45,   501,     1,
     137,   222,   203,    25,   715,  -375,   549,    76,   175,    92,
      22,   704,   705,   706,   176,   782,    88,   176,   288,   884,
     138,   960,    98,   789,   211,   139,   254,     1,    99,    25,
     175,    46,    47,    48,   501,   335,   722,   215,   715,   402,
     176,   726,   260,   177,   417,   325,   177,   337,   326,   254,
     261,  -174,   501,   349,    99,   223,   349,   163,   784,   216,
     955,   383,   176,   799,   349,    49,    18,    50,    51,   177,
      52,   923,   227,   453,   920,   668,   326,   287,   349,   875,
      19,    87,   800,   175,   569,   236,   570,   175,    45,   780,
     602,   177,   486,   326,   551,   225,   306,   237,   552,   438,
      17,   794,   175,    18,   443,    87,   938,    19,   233,    76,
     853,   774,   238,   229,   391,   176,   247,   218,   348,   176,
      19,   715,    46,    47,    48,   399,   168,    88,   248,    19,
     175,   863,   864,   250,   176,   256,   741,   163,   218,   403,
     392,   163,   175,   163,   177,   163,   940,   259,   177,   607,
     263,   393,   280,   619,   175,   140,    49,    18,    50,    51,
     288,    52,   176,   177,   156,   281,   742,    50,   672,   895,
      53,    54,   349,   284,   176,     1,     9,   349,    45,   413,
     546,   349,   294,   100,   304,   400,   176,   188,   189,   190,
      17,   177,   349,   314,   288,   288,   714,    19,    19,    10,
     316,   441,   319,   177,    17,   677,   678,   136,   727,   175,
      22,   454,    46,    47,    48,   177,   441,   158,   870,   229,
     740,    45,   741,   473,   475,   168,   140,   473,   483,    25,
     488,   321,   926,    99,    19,   348,    19,   381,   808,   865,
     348,   176,   385,   241,   784,   809,    49,    18,    50,    51,
     810,    52,    18,    50,   395,    46,    47,    48,   396,   242,
      53,    54,   243,    45,    18,    79,   349,    22,   349,   349,
     177,   432,   349,   954,   349,   848,   418,   288,    18,    50,
      17,   169,   170,   421,   274,    91,    25,   422,   897,    49,
     725,    50,    51,   455,    52,   163,   437,    46,    47,    48,
     423,   442,   288,    53,    54,   808,   784,   328,   456,  -300,
     465,   433,   866,   506,   466,   329,   808,   810,   932,   451,
     934,   156,   481,   903,   507,   330,   349,   496,   810,   349,
     499,    49,    18,    50,    51,    45,    52,   156,   948,   168,
     231,   232,    17,   156,    17,    53,    54,   784,   218,   516,
     929,    45,   100,   231,   244,   956,   519,    45,    17,   957,
     517,   349,   349,   203,   348,   508,    17,    17,   521,    46,
      47,   157,   523,   228,   158,   348,   348,   348,   973,   525,
     349,    18,    50,    17,   526,    46,    47,    48,  -176,  -176,
     158,    46,    47,   406,   257,   258,   158,   348,   400,   409,
     410,   527,   410,    49,    18,    50,    51,    19,    52,    46,
     536,    48,   231,   568,   611,   612,    82,    53,    54,    49,
      18,    50,    51,   537,    52,    49,    18,    50,    51,   538,
      52,   708,   709,    53,    54,   539,    90,   -27,   -27,    53,
      54,   806,   807,    49,    18,    50,    51,   180,    52,   181,
     541,   182,   812,   813,   571,   545,   572,   441,   557,  -138,
     459,   441,   549,    22,    23,   814,   815,   567,   573,   574,
    -138,   593,   231,   857,    92,    22,    23,   596,   598,    24,
     595,   720,    25,    87,   183,   601,   575,   576,   603,   608,
     184,    93,     1,    26,    25,    94,   348,   282,   283,   348,
     254,   616,   620,   615,   627,   544,    95,   348,    96,   629,
     577,    97,   636,    98,   743,   634,   638,    90,   657,    99,
     642,   348,   658,   643,   753,   659,   578,   549,   663,   664,
      92,    22,    91,   441,   185,   186,   187,   188,   189,   190,
    -138,   666,   765,   766,   768,   644,   667,   572,     1,   550,
      25,   459,   673,   683,   675,    92,    22,    23,   676,   645,
     646,   685,   686,   688,   694,   712,   721,   732,   723,   724,
      90,   729,    93,     1,   733,    25,    94,   647,   648,   734,
    -422,   739,   441,   749,   441,   441,   754,    95,   755,    96,
     757,   649,    97,  -139,    98,   758,   759,   761,   762,   764,
      99,   577,   769,   544,  -139,   562,   772,   773,    92,    22,
      23,   781,   778,   791,   793,   348,   818,   650,   805,   822,
     348,   823,   337,   332,   348,    93,     1,   333,    25,    94,
     829,   831,   163,   834,   837,   348,   334,   841,   842,   335,
      95,   441,    96,   843,   809,    97,  -288,    98,   336,   892,
    -288,   337,   847,    99,   862,  -427,   852,  -427,   851,   849,
     338,  -288,   855,   869,   339,   340,   753,   856,   871,  -288,
     877,   881,   886,   341,   888,  -427,   893,   900,    92,     1,
     891,   889,   905,   342,   916,   890,   915,   899,   343,   344,
     894,   345,   896,   918,   921,   931,   902,  -427,   873,   917,
     753,   403,  -288,   922,   875,   441,   346,    50,   930,   348,
     332,   348,   348,   935,   333,   348,   743,   348,   743,   936,
     937,   939,   947,   334,   941,   945,   335,   946,   949,   952,
     958,   163,   953,  -288,   964,   336,   971,  -288,   337,   972,
     974,   327,  -428,   868,  -428,   906,   872,   338,  -288,   975,
     652,   339,   340,   386,   790,   696,  -288,   264,   967,   951,
     341,   398,  -428,   653,   535,   235,     1,   407,   431,   348,
     342,   166,   348,   290,   277,   343,   344,   278,   345,   738,
     898,   489,   641,   753,  -428,   731,   482,   332,   143,  -288,
     771,   333,   763,   346,    50,   654,   564,   428,   786,   548,
     334,   792,   429,   335,   348,   348,   968,   859,   403,   828,
    -288,    42,   336,   825,  -288,   337,    43,   149,   148,  -427,
     883,   631,   844,   348,   338,  -288,   885,   303,   339,   340,
       0,     0,     0,  -288,     0,     0,     0,   341,     0,  -427,
       0,     0,     0,     1,     0,   163,     0,   342,     0,     0,
       0,     0,   343,   344,     0,   345,   332,     0,     0,     0,
     333,  -427,     0,     0,     0,     0,  -288,     0,     0,   334,
     346,    50,   335,     0,     0,     0,     0,     0,     0,  -288,
       0,   336,     0,  -288,   337,     0,     0,     0,  -427,     0,
    -427,     0,     0,   338,  -288,     0,     0,   339,   340,     0,
       0,     0,  -288,     0,     0,     0,   341,     0,  -427,     0,
       0,     0,     1,     0,     0,     0,   342,     0,     0,     0,
       0,   343,   344,     0,   345,   332,     0,     0,     0,   333,
       0,     0,     0,     0,     0,  -288,     0,     0,   334,   346,
      50,   335,     0,     0,     0,     0,     0,     0,  -288,     0,
     336,     0,  -288,   337,     0,     0,     0,  -277,  -277,  -277,
       0,   332,   338,  -288,     0,   333,   339,   340,     0,     0,
       0,  -288,     0,     0,   334,   341,     0,   335,     0,    45,
       0,     1,     0,     0,  -288,   342,   336,     0,  -288,   337,
     343,   344,     0,   345,     0,  -304,     0,   500,   338,  -288,
       0,     0,   339,   340,  -288,     0,     0,  -288,   346,    50,
       0,   341,     0,    46,    47,    48,     0,     1,   158,     0,
       0,   342,     0,     0,     0,     0,   343,   344,     0,   345,
     332,     0,     0,     0,   333,     0,     0,     0,     0,     0,
    -288,     0,     0,   334,   346,    50,   335,    49,    18,    50,
      51,     0,    52,  -288,     0,   336,     0,  -288,   337,     0,
       0,    53,    54,     0,  -462,     0,     0,   338,  -288,     0,
       0,   339,   340,     0,     0,     0,  -288,     0,   332,     0,
     341,     0,   333,     0,     0,     0,     1,     0,     0,     0,
     342,   334,     0,     0,   335,   343,   344,     0,   345,     0,
       0,  -288,     0,   336,     0,  -288,   337,     0,  -462,  -288,
       0,     0,  -286,   346,    50,   338,  -288,     0,     0,   339,
     340,     0,     0,     0,  -288,     0,   332,     0,   341,     0,
     333,     0,     0,     0,     1,     0,     0,     0,   342,   334,
       0,     0,   335,   343,   344,     0,   345,     0,     0,  -288,
       0,   336,     0,  -288,   337,     0,  -286,  -288,     0,     0,
    -463,   346,    50,   338,  -288,     0,     0,   339,   340,     0,
       0,     0,  -288,     0,   332,     0,   341,     0,   333,     0,
       0,     0,     1,     0,     0,     0,   342,   334,     0,     0,
     335,   343,   344,     0,   345,     0,     0,  -288,     0,   336,
       0,  -288,   337,     0,  -463,  -288,     0,     0,  -281,   346,
      50,   338,  -288,     0,     0,   339,   340,     0,     0,     0,
    -288,     0,   332,     0,   341,     0,   333,     0,     0,     0,
       1,     0,     0,     0,   342,   334,     0,     0,   335,   343,
     344,     0,   345,     0,     0,  -288,     0,   336,     0,  -288,
     337,     0,     0,  -288,     0,     0,   836,   346,    50,   338,
    -288,     0,     0,   339,   340,     0,     0,     0,  -288,     0,
     332,     0,   341,     0,   333,     0,     0,     0,     1,     0,
       0,     0,   342,   334,     0,     0,   335,   343,   344,     0,
     345,     0,     0,  -288,     0,   336,     0,  -288,   337,     0,
       0,  -288,     0,     0,   879,   346,    50,   338,  -288,     0,
       0,   339,   340,     0,     0,     0,  -288,     0,   332,     0,
     341,     0,   333,     0,     0,     0,     1,     0,     0,     0,
     342,   334,     0,     0,   335,   343,   344,     0,   345,     0,
       0,  -288,     0,   336,     0,  -288,   337,     0,     0,  -288,
       0,     0,  -427,   346,    50,   338,  -288,     0,     0,   339,
     340,     0,     0,     0,  -288,     0,   332,     0,   341,     0,
     333,     0,     0,     0,     1,     0,     0,     0,   342,   334,
       0,     0,   335,   343,   344,     0,   345,     0,     0,  -288,
       0,   336,     0,  -288,   337,     0,     0,  -288,     0,     0,
     882,   346,    50,   338,  -288,     0,     0,   339,   340,     0,
       0,     0,  -288,     0,   332,     0,   341,     0,   333,     0,
       0,     0,     1,     0,     0,     0,   342,   334,     0,     0,
     335,   343,   344,     0,   345,     0,     0,  -288,     0,   336,
       0,  -288,   337,     0,     0,  -288,     0,     0,     0,   346,
      50,   338,  -288,     0,     0,   339,   340,     0,     0,     0,
    -288,    90,     0,     0,   341,     0,     0,     0,     0,     0,
       1,    90,     0,     0,   342,     0,     0,     0,     0,   343,
     344,     0,   345,     0,  -138,     0,     0,     0,     0,     0,
       0,     0,     0,  -288,     0,  -138,     0,   346,    50,    92,
      22,    23,     0,     0,     0,  -141,     0,     0,     0,    92,
      22,    23,     0,    90,     0,     0,    93,     1,     0,    25,
      94,     0,    90,     0,     0,     0,   296,     1,  -141,    25,
     297,    95,     0,    96,     0,     0,    97,     0,    98,     0,
       0,    95,     0,   298,    99,  -138,    97,  -140,    98,     0,
       0,    92,    22,    23,    99,     0,     0,     0,     0,     0,
      92,    22,    23,     0,    90,     0,     0,     0,   296,     1,
    -140,    25,   297,     0,     0,     0,     0,    93,     1,     0,
      25,    94,     0,    95,     0,   298,     0,    90,    97,     0,
      98,   562,    95,     0,    96,     0,    99,    97,  -140,    98,
       0,     0,    92,    22,    23,    99,     0,     0,     0,     0,
    -138,     0,     0,     0,    45,     0,     0,     0,     0,   296,
       1,     0,    25,   297,     0,    92,    22,    23,     0,     0,
       0,    45,     0,     0,    95,     0,   298,    45,     0,    97,
       0,    98,    93,     1,     0,    25,    94,    99,    46,    47,
      48,     0,     0,     0,     0,     0,     0,    95,     0,    96,
       0,     0,    97,     0,    98,    46,    47,    48,     0,     0,
      99,    46,    47,    48,     0,     0,   471,     0,     0,     0,
       0,     0,    49,    18,    50,    51,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    54,     0,    49,
      18,    50,    51,   484,    52,    49,    18,    50,    51,     0,
      52,     0,     0,    53,    54,     0,     0,     0,     0,    53,
      54
};

static const short yycheck[] =
{
       0,     3,    38,   295,   414,   192,    84,   252,     8,   487,
     233,    10,   345,    13,   445,    12,    12,    83,   394,   345,
      38,    52,   524,   163,   451,    24,    25,   439,   331,    29,
     508,    52,    12,    35,     1,   639,    22,   491,   492,   684,
     207,    69,    38,    10,    16,    42,    42,   747,     1,    16,
     207,   228,     3,     6,   350,    22,     1,    24,    25,   355,
     451,    13,    42,    45,    38,    47,    13,   254,    45,     4,
      44,    35,    57,    35,    12,   141,     1,    35,    46,    78,
      52,    26,     3,    82,     3,     0,    85,    88,    65,     3,
       3,     3,     4,    12,    93,    87,     8,    89,    12,    25,
       1,   511,    23,    49,    42,     3,    51,     3,    84,    76,
     110,    78,    57,     1,    39,    82,    93,    79,    85,   171,
      84,    79,     1,     3,    70,    92,    93,     6,   519,    96,
     608,    84,     3,   300,     3,   135,    48,    88,   137,    84,
      92,   172,    93,   300,   436,    92,   148,    45,   305,    13,
     442,    47,    64,   563,   566,     3,     3,   334,    84,    84,
     191,   192,    97,    98,    99,   193,    62,   203,    87,    88,
     137,   138,    93,   239,    93,   149,    88,   781,     3,    93,
      93,    93,    62,    84,    31,    97,    98,    99,   100,   101,
      88,    62,    88,    89,    90,    93,    84,    93,   170,   637,
     172,   253,   174,   170,     6,    84,   173,   207,    88,    89,
      90,   815,    25,    93,   506,    62,   383,    88,   200,    88,
     219,   252,    93,   254,    93,   256,   383,   258,    92,   260,
       3,   262,     3,    25,    13,   256,    45,   258,    21,   677,
      88,    88,    22,     3,    13,    93,    93,    33,   686,   249,
       3,   418,   219,   220,   221,   241,   479,   224,   225,    87,
     960,   418,    87,    88,   330,   233,     0,    53,    93,   572,
      53,    84,   684,   576,   241,   242,   243,   704,    87,   251,
     252,   805,    84,    85,   256,   321,   258,   932,   260,   512,
      18,     3,    84,   795,   898,   295,    45,   296,   674,    82,
     300,   441,    30,    31,    84,    85,    89,    78,   305,   305,
     388,    32,   390,    92,    87,    88,   754,   755,   614,   695,
      93,    81,    93,    92,    58,   305,   622,    87,    88,   296,
      45,   298,    48,    93,    87,    88,    49,   309,   862,    18,
      93,    25,    67,   310,    93,   648,     1,    81,    64,   385,
      62,    30,    31,   791,    21,   793,    84,    84,   360,    72,
      88,   792,    45,    88,   336,   337,    87,    20,   335,    93,
     824,    26,   344,   827,    27,   411,    88,    45,    93,   410,
      35,    93,   350,   383,   100,   101,    53,   355,   611,   410,
     547,   469,    76,   411,   697,   461,   699,   700,    21,   901,
      84,   734,    57,   736,   737,    84,    33,    60,   734,   596,
      93,   737,    88,   636,   381,    82,   415,     1,   418,    87,
      78,   899,    89,    90,    79,   425,    53,   394,    17,    84,
      53,    84,    85,    12,   730,   437,   436,    89,   410,   439,
      29,    93,   442,   439,   444,    49,    17,   859,   415,   416,
     417,    35,   639,   756,   750,    39,    40,    41,    29,    82,
     432,    12,    87,    42,     4,    49,    89,     7,    72,     9,
      18,    11,    56,    57,    58,    59,    60,    21,    87,    39,
     958,   773,    30,    31,   456,    74,    87,    71,    21,    73,
      79,    42,    76,    65,    78,    84,    85,    65,    58,   471,
      84,    25,   747,    74,    44,   505,   506,    21,    79,    53,
      50,   479,   735,    20,    62,    87,   739,   820,    12,    87,
      53,    46,   490,   491,   492,   497,   964,    52,   857,   905,
     826,    45,    25,   569,   830,     1,    84,   536,    82,    53,
      88,    13,   871,    87,   512,   955,   546,   687,    42,    82,
     547,   547,    76,   525,    94,    95,    96,    97,    98,    99,
      84,     1,    87,   565,    45,   596,     8,   603,    82,   536,
     537,   538,    21,    98,    40,    21,    83,    84,    85,    87,
     720,    87,    90,    76,    65,    31,   558,    15,   884,    57,
      56,    84,    88,    59,   781,    35,    36,    93,    21,    39,
      40,   573,   574,   575,    53,   683,    87,    53,   639,   832,
      76,    79,    78,   753,    49,    81,    62,    57,    84,    59,
      21,    49,    50,    51,   920,    17,   598,    87,   815,   816,
      53,   603,    81,    82,    25,    87,    82,    29,    90,    62,
      89,    90,   938,   611,    84,    84,   614,   172,   684,    87,
     942,    45,    53,    40,   622,    83,    84,    85,    86,    82,
      88,    62,    84,    87,   887,   664,    90,   192,   636,     6,
     637,    65,    59,    21,    87,    45,    89,    21,    15,   681,
      87,    82,    74,    90,   684,    76,   211,    87,   684,   313,
     690,   693,    21,    84,   318,    65,   919,   664,    24,    93,
     778,   673,    87,   228,    18,    53,    87,   674,   233,    53,
     677,   898,    49,    50,    51,   960,   747,    87,    87,   686,
      21,   799,   800,    63,    53,    90,    54,   252,   695,   254,
      44,   256,    21,   258,    82,   260,   923,    89,    82,    87,
      87,    55,    75,    87,    21,   781,    83,    84,    85,    86,
     781,    88,    53,    82,     1,    33,    84,    85,    87,     6,
      97,    98,   730,    44,    53,    57,    58,   735,    15,   294,
     772,   739,    67,   773,    87,   747,    53,    97,    98,    99,
     780,    82,   750,    45,   815,   816,    87,   754,   755,    81,
      45,   316,    45,    82,   794,    35,    36,     1,    87,    21,
      40,   326,    49,    50,    51,    82,   331,    54,   810,   334,
      87,    15,    54,   338,   339,   846,   852,   342,   343,    59,
     345,    88,   900,    84,   791,   350,   793,    35,    51,   801,
     355,    53,    88,    40,   870,    58,    83,    84,    85,    86,
      63,    88,    84,    85,    87,    49,    50,    51,    89,    56,
      97,    98,    59,    15,    84,    85,   824,    40,   826,   827,
      82,    23,   830,   941,   832,    87,    58,   898,    84,    85,
     870,    89,    90,    56,   846,    16,    59,    60,   850,    83,
      84,    85,    86,    27,    88,   410,    45,    49,    50,    51,
      73,    45,   923,    97,    98,    51,   932,    19,    12,    24,
      87,    63,    58,    28,    84,    27,    51,    63,   910,    45,
     912,     1,    87,    58,    39,    37,   884,    91,    63,   887,
      87,    83,    84,    85,    86,    15,    88,     1,   930,   960,
      90,    91,   932,     1,   934,    97,    98,   973,   905,    87,
     907,    15,   942,    90,    91,   947,    45,    15,   948,   951,
      87,   919,   920,    88,   479,    80,   956,   957,    45,    49,
      50,    51,    55,    76,    54,   490,   491,   492,   970,    88,
     938,    84,    85,   973,    63,    49,    50,    51,    89,    90,
      54,    49,    50,    51,    89,    90,    54,   512,   960,    89,
      90,    89,    90,    83,    84,    85,    86,   964,    88,    49,
      35,    51,    90,    91,    33,    34,    25,    97,    98,    83,
      84,    85,    86,    25,    88,    83,    84,    85,    86,    25,
      88,    83,    84,    97,    98,    45,     1,    90,    91,    97,
      98,    89,    90,    83,    84,    85,    86,     7,    88,     9,
      23,    11,    89,    90,    16,    70,    18,   572,    87,    24,
      22,   576,    36,    40,    41,    89,    90,    89,    30,    31,
      35,    87,    90,    91,    39,    40,    41,    88,    12,    56,
      87,   596,    59,    65,    44,    10,    48,    49,    88,    79,
      50,    56,    57,    70,    59,    60,   611,   178,   179,   614,
      62,    87,    87,    75,    75,    70,    71,   622,    73,    79,
      72,    76,    47,    78,   629,    84,    68,     1,    67,    84,
      87,   636,    49,    89,   639,    45,    88,    36,    89,    35,
      39,    40,    16,   648,    94,    95,    96,    97,    98,    99,
      24,    45,   657,   658,   659,    16,    45,    18,    57,    58,
      59,    22,    48,    84,    87,    39,    40,    41,    87,    30,
      31,    87,    35,    87,    18,    46,    52,    35,    87,    87,
       1,    87,    56,    57,    14,    59,    60,    48,    49,    13,
      75,    14,   697,    44,   699,   700,    35,    71,    35,    73,
       6,    62,    76,    24,    78,     6,     6,     6,     6,    87,
      84,    72,    87,    70,    35,    70,    45,    45,    39,    40,
      41,    88,    84,    35,    35,   730,    19,    88,    81,    43,
     735,    87,    29,     1,   739,    56,    57,     5,    59,    60,
      35,    91,   747,    26,    87,   750,    14,    31,    81,    17,
      71,   756,    73,    89,    58,    76,    24,    78,    26,     6,
      28,    29,    87,    84,    81,    33,    88,    35,    87,    63,
      38,    39,    87,    63,    42,    43,   781,    87,    52,    47,
      87,    69,    87,    51,    47,    53,    58,    89,    39,    57,
      81,    87,    67,    61,    35,    87,    69,    79,    66,    67,
      87,    69,    87,    69,    58,    35,    87,    75,   813,    87,
     815,   816,    80,    89,     6,   820,    84,    85,    87,   824,
       1,   826,   827,    87,     5,   830,   831,   832,   833,    69,
      87,    87,    45,    14,    89,    87,    17,    87,    63,    87,
      79,   846,    87,    24,    35,    26,    26,    28,    29,    87,
      87,   231,    33,   807,    35,   865,   813,    38,    39,   973,
     519,    42,    43,   240,   687,   569,    47,   170,   961,   932,
      51,   252,    53,   519,   418,   110,    57,   260,   308,   884,
      61,    52,   887,   199,   173,    66,    67,   173,    69,   626,
     852,   345,   512,   898,    75,   612,   342,     1,    38,    80,
     664,     5,   652,    84,    85,   519,   443,   305,   684,   438,
      14,   691,   305,    17,   919,   920,   963,   792,   923,   737,
      24,    13,    26,   734,    28,    29,    13,    43,    42,    33,
     831,   503,   765,   938,    38,    39,   833,   207,    42,    43,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    57,    -1,   960,    -1,    61,    -1,    -1,
      -1,    -1,    66,    67,    -1,    69,     1,    -1,    -1,    -1,
       5,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    14,
      84,    85,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    66,    67,    -1,    69,     1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    14,    84,
      85,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    -1,     5,    42,    43,    -1,    -1,
      -1,    47,    -1,    -1,    14,    51,    -1,    17,    -1,    15,
      -1,    57,    -1,    -1,    24,    61,    26,    -1,    28,    29,
      66,    67,    -1,    69,    -1,    35,    -1,    37,    38,    39,
      -1,    -1,    42,    43,    80,    -1,    -1,    47,    84,    85,
      -1,    51,    -1,    49,    50,    51,    -1,    57,    54,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    66,    67,    -1,    69,
       1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    14,    84,    85,    17,    83,    84,    85,
      86,    -1,    88,    24,    -1,    26,    -1,    28,    29,    -1,
      -1,    97,    98,    -1,    35,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    -1,     1,    -1,
      51,    -1,     5,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    14,    -1,    -1,    17,    66,    67,    -1,    69,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    -1,    79,    80,
      -1,    -1,    35,    84,    85,    38,    39,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,    -1,     1,    -1,    51,    -1,
       5,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    14,
      -1,    -1,    17,    66,    67,    -1,    69,    -1,    -1,    24,
      -1,    26,    -1,    28,    29,    -1,    79,    80,    -1,    -1,
      35,    84,    85,    38,    39,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,     1,    -1,    51,    -1,     5,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    14,    -1,    -1,
      17,    66,    67,    -1,    69,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    -1,    79,    80,    -1,    -1,    35,    84,
      85,    38,    39,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    -1,     1,    -1,    51,    -1,     5,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    14,    -1,    -1,    17,    66,
      67,    -1,    69,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    -1,    -1,    80,    -1,    -1,    35,    84,    85,    38,
      39,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,    -1,
       1,    -1,    51,    -1,     5,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    61,    14,    -1,    -1,    17,    66,    67,    -1,
      69,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    -1,
      -1,    80,    -1,    -1,    35,    84,    85,    38,    39,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    -1,     1,    -1,
      51,    -1,     5,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    14,    -1,    -1,    17,    66,    67,    -1,    69,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    -1,    -1,    80,
      -1,    -1,    35,    84,    85,    38,    39,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,    -1,     1,    -1,    51,    -1,
       5,    -1,    -1,    -1,    57,    -1,    -1,    -1,    61,    14,
      -1,    -1,    17,    66,    67,    -1,    69,    -1,    -1,    24,
      -1,    26,    -1,    28,    29,    -1,    -1,    80,    -1,    -1,
      35,    84,    85,    38,    39,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    -1,     1,    -1,    51,    -1,     5,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    14,    -1,    -1,
      17,    66,    67,    -1,    69,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    -1,    -1,    80,    -1,    -1,    -1,    84,
      85,    38,    39,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,     1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,     1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    66,
      67,    -1,    69,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    35,    -1,    84,    85,    39,
      40,    41,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,     1,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,     1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    71,    -1,    73,    -1,    -1,    76,    -1,    78,    -1,
      -1,    71,    -1,    73,    84,    24,    76,    35,    78,    -1,
      -1,    39,    40,    41,    84,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,     1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    71,    -1,    73,    -1,     1,    76,    -1,
      78,    70,    71,    -1,    73,    -1,    84,    76,    35,    78,
      -1,    -1,    39,    40,    41,    84,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    39,    40,    41,    -1,    -1,
      -1,    15,    -1,    -1,    71,    -1,    73,    15,    -1,    76,
      -1,    78,    56,    57,    -1,    59,    60,    84,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    49,    50,    51,    -1,    -1,
      84,    49,    50,    51,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    83,
      84,    85,    86,    87,    88,    83,    84,    85,    86,    -1,
      88,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    97,
      98
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,    57,   103,   104,   302,    84,   175,     0,   107,    58,
      81,   303,   304,   305,   306,    87,    88,   104,    84,   175,
     176,   177,    40,    41,    56,    59,    70,   241,   242,   249,
     250,   252,   253,   256,   263,   308,   309,   319,   320,   326,
     327,   104,   304,   306,   307,    15,    49,    50,    51,    83,
      85,    86,    88,    97,    98,   105,   106,   173,   175,   178,
     179,   180,   183,   184,   186,   187,   190,   193,   196,   197,
     199,   201,   202,   203,   204,   205,    93,    87,    90,    85,
     176,   243,    25,   176,   176,    88,    45,    65,    87,   264,
       1,    16,    39,    56,    60,    71,    73,    76,    78,    84,
     104,   108,   109,   110,   111,   115,   116,   120,   166,   169,
     170,   171,   172,   241,   242,   250,   252,   256,   260,   262,
     263,   265,   266,   269,   270,   271,   278,   311,   312,   319,
     329,   330,   331,   334,    87,   107,     1,    56,    76,    81,
     110,   242,   247,   253,   260,   321,    87,    87,   308,   307,
     260,   175,   202,   173,   204,   202,     1,    51,    54,   126,
     161,   162,   163,   173,   182,   188,   189,   190,   196,    89,
      90,     3,    88,    93,    13,    21,    53,    82,   191,   192,
       7,     9,    11,    44,    50,    94,    95,    96,    97,    98,
      99,   194,   195,   198,   199,    48,    64,   100,   101,   200,
       8,   175,   176,    88,   244,   245,   176,    45,   264,   244,
     176,    49,   328,   173,    87,    87,    87,   174,   175,    25,
      25,    76,    84,    84,    25,    76,   175,    84,    76,   173,
     261,    90,    91,    24,   233,   171,    45,    87,    87,   176,
     175,    40,    56,    59,    91,    87,   264,    87,    87,   107,
      63,    13,    92,     3,    62,   125,    90,    89,    90,    89,
      81,    89,     4,    87,   106,    18,    30,    31,    84,   185,
     203,   181,   182,   189,   190,    20,   175,   178,   179,   190,
      75,    33,   193,   193,    44,   196,   126,   173,   196,   199,
     201,   202,   246,   247,    67,    45,    56,    60,    73,   167,
     168,   169,   249,   328,    87,    89,   173,     3,     3,    78,
      93,   176,   175,   175,    45,   272,    45,   175,   175,    45,
     267,    88,   117,   154,   261,    87,    90,   111,    19,    27,
      37,   112,     1,     5,    14,    17,    26,    29,    38,    42,
      43,    51,    61,    66,    67,    69,    84,   104,   173,   204,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   220,
     221,   224,   225,   231,   234,   236,   239,   240,   251,   287,
     288,   290,   291,   292,   297,   298,   299,   301,   317,   318,
     335,    35,    70,    45,   264,    88,   154,   322,   243,   175,
     175,    18,    44,    55,   248,    87,    89,   190,   162,   163,
     190,    62,   126,   173,   182,   182,    51,   181,   196,    89,
      90,    87,    89,   173,   166,    25,    25,    25,    58,   254,
     169,    56,    60,    73,   242,   249,   250,   256,   269,   278,
     310,   185,    23,    63,   190,   175,    45,    45,   117,   274,
     121,   173,    45,   117,   107,   281,     1,     6,   110,   155,
     156,    45,   118,    87,   173,    27,    12,    87,   264,    22,
     113,   121,   136,   137,   138,    87,    84,   261,   175,   289,
     190,    77,   190,   173,   237,   173,   190,   215,   216,   217,
     218,    87,   237,   173,    87,   190,    74,    79,   173,   251,
     286,   287,   290,   293,   295,   296,    91,    12,    87,    87,
      37,   207,   235,   313,   207,   107,    28,    39,    80,   226,
     227,   232,    32,    87,   230,   243,    87,    87,     6,    45,
     244,    45,   244,    55,   174,    88,    63,    89,   182,   247,
     233,   257,   176,   175,   175,   167,    35,    25,    25,    45,
     190,    23,   332,    87,    70,    70,   107,   279,   272,    36,
      58,   104,   242,   273,   275,   282,   329,    87,    31,   122,
     123,   125,    70,   166,   267,   282,   285,    89,    91,    87,
      89,    16,    18,    30,    31,    48,    49,    72,    88,   119,
     124,   125,   127,   130,   131,   133,   134,   135,   136,   147,
     149,   164,   258,    87,   190,    87,    88,   143,    12,   114,
     264,    10,    87,    88,   244,    45,   190,    87,    79,   238,
      87,    33,    34,   219,   206,    75,    87,    81,    87,    87,
      87,   218,   206,   300,   300,   300,   294,    75,   190,    79,
     314,   314,   222,   166,    84,   218,    47,   229,    68,   228,
     233,   234,    87,    89,    16,    30,    31,    48,    49,    62,
      88,   136,   149,   164,   258,   324,   325,    67,    49,    45,
     323,   114,   190,    89,    35,    45,    45,    45,   176,   255,
     175,   175,    87,    48,   333,    87,    87,    35,    36,   242,
     250,   280,   283,    84,   276,    87,    35,   190,    87,   233,
     107,    58,   268,   329,    18,   157,   156,    49,    72,    20,
      27,    60,   121,   165,   190,   190,   190,   121,    83,    84,
     128,   129,    46,   259,    87,   126,   141,   142,   144,   145,
     173,    52,   190,    87,    87,    84,   190,    87,   218,    87,
     206,   216,    35,    14,    13,    33,    53,    53,   219,    14,
      87,    54,    84,   173,   315,   316,    35,    79,   223,    44,
     206,   230,   145,   173,    35,    35,    49,     6,     6,     6,
     121,     6,     6,   259,    87,   173,   173,     6,   173,    87,
      89,   255,    45,    45,   190,    35,   174,   230,    84,    87,
     107,    88,   244,     1,   110,   153,   275,   277,   230,   125,
     146,    35,   281,    35,   107,   174,   121,   121,   121,    40,
      59,    31,   131,   131,   132,    81,    89,    90,    51,    58,
      63,   148,    89,    90,    89,    90,    62,   146,    19,   139,
     140,    89,    43,    87,   290,   295,   206,   290,   293,    35,
     206,    91,    13,    92,    26,   161,    35,    87,   230,   230,
     121,    31,    81,    89,   323,    87,    88,    87,    87,    63,
      23,    87,    88,   244,   145,    87,    87,    91,   230,   285,
     230,   114,    81,   244,   244,   190,    58,   148,   129,    63,
     107,    52,   142,   173,   145,     6,   121,    87,   300,    35,
     300,    69,    35,   315,   206,   316,    87,    13,    47,    87,
      87,    81,     6,    58,    87,     6,    87,   190,   227,    79,
      89,   139,    87,    58,   148,    67,   132,    26,    51,   150,
     151,   153,   158,   139,    62,    69,    35,    87,    69,    13,
     206,    58,    89,    62,   145,   218,   244,   114,   174,   175,
      87,    35,   107,   152,   107,    87,    69,    87,   206,    87,
     126,    89,    45,    87,   284,    87,    87,    45,   107,    63,
     153,   158,    87,    87,   244,   166,   107,   107,    79,   233,
      79,   159,   160,   218,    35,   161,    35,   160,   284,   230,
      13,    26,    87,   107,    87,   150
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR               goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

#  include <stdio.h> 

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 100000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



// Yijun Yu: utility functions -----------------------------------------------
#include <stdio.h>
/// replace character terminals into symbolic terminals
static char *YYTNAME(int r)
{
  static char yytname_buf[8];
  if (strlen(yytname[r])==3 && yytname[r][0] == '\'' && yytname[r][2] == '\'') 
  { 
        sprintf(yytname_buf, "CHAR%d", (int)yytname[r][1]);
        return yytname_buf;
  } 
  else if (strlen(yytname[r])>=2 && yytname[r][0] == 64 )
  {
    strcpy(yytname_buf,"ACTION");
    strcat(yytname_buf,&(yytname[r][1]));
    return yytname_buf;
  }

  return (char *)yytname[r];
}
#include <stdio.h>
static char *yytext_buf = NULL;

/// replace a special character in the text into an entity
static
void replace_entity(char c, char *s)
{
    char *buf;
    char *i;
    int len, l;
    i = yytext_buf;
    do {
        i =  (char *)index(i, c);
        if (i) {
            l = i - yytext_buf;
            len = strlen(yytext_buf) + strlen(s) - 1;
            //buf = (char*)YYSTACK_ALLOC(1000000);
            buf = (char*)YYSTACK_ALLOC(len + 1); // Myo M Thein
            if (l>0) {
#if 1 // Myo M Thein
		strncpy(buf, yytext_buf, l);
#else
		int t = 0;
		while (t < l) {
			buf[t] = yytext_buf[t]; 
			t++;
		}
                buf[t] = 0;
#endif
            } else {
                buf[0] = 0;
            }
            strcat(buf, s); 
            strncat(buf, yytext_buf + l + 1, strlen(yytext_buf) - l); 
            buf[len] = 0;
            YYSTACK_FREE(yytext_buf); 
            //yytext_buf = buf;
	    memcpy(yytext_buf,buf,len+1);
        i++;
        if (*i=='\0')
            i=NULL;
        }
    } while (i);
}

/// replace the special characters in the text into entities 
static
char* xml_encode( char ch)
{
  static char text[2];
    switch(ch)
    {
    case '&':
        return ( "&amp;");
        break;
    case '>':
        return ( "&gt;");
        break;
    case '<' :
        return ( "&lt;" );
        break;
    case  '\"':
        return ( "&quot;");
        break;
    case '\'':
        return ( "&apos;");
        break;
    default:
        text[0]=ch;
        text[1]=0;
        return text;
        break;
    }
}

static
void replace_special_entities(char *text,char *text_out)
{
  int i,lg;
    if (!text) { strcpy(text_out,"??");return ; }
    lg = strlen(text);
    strcpy(text_out,"");
    for (i=0;i<lg;i++)
    {
       strcat(text_out,xml_encode(text[i]));
    }
}
static
void generate_xml_output(char **yyxsp,char **yyxs)
{
#ifndef YYYAXX_XML 
#define YYYAXX_XML  "yaxx.xml"
#endif
#ifndef YYYAXX_DTD
#define YYYAXX_DTD "yaxx.dtd"
#endif
       int r, i, j;
       char buf[2000];
       int old_rule = 0;
       FILE *stdout = fopen(YYYAXX_XML, "w");
       char *p = *yyxsp + 6;
#if 0
       char *v = strsep(&p, ">");
       strcpy(buf, v);
#else
	   i = 0;
	   while (p[i]!='>') {
		buf[i] = p[i];
		i++;
	   }
	   buf[i]  = 0;
#endif
       /// Generating the XML document 
       /// version 
       fprintf(stdout,"<?xml version=\"1.0\"?>\n");
       /// DTD reference
       fprintf(stdout,"<?xml-stylesheet type=\"text/xsl\" href=\"yaxx.xsl\"?>");
       fprintf(stdout,"<!DOCTYPE %s SYSTEM \"" YYYAXX_DTD "\">\n", buf);
       /// inserting name space before the XML data
       fprintf(stdout,"<yaxx:%s xmlns:yaxx=\"urn:YAcc-Xml-eXtension\"%s\n", buf,
            yyxs[1]+i+6); //ffprintf(stdout,f, "%s\n", yyxs[1]);
       /// Generating the document type definition (DTD) 
       stdout = fopen(YYYAXX_DTD , "w");
       /// DTD for non-terminals
       for (r = 2; r < sizeof(yyr1)/sizeof(unsigned short); r++) 
       {
        j = yyr1[r];
        if (j != old_rule) {
        	if (old_rule!=0)
        		fprintf(stdout,")>\n");
	        fprintf(stdout,"<!ELEMENT %s (", YYTNAME(yyr1[r]));
        } else
	    	fprintf(stdout," | ");
        if (yyr2[r]==0) 
           fprintf(stdout,"EMPTY");
        else {
        	int multiple = 0;
            for (i = yyprhs[r]; yyrhs[i] > 0 ; i++)
               if (i!=yyprhs[r]) {
               	multiple = 1; break;
               }
       		if (multiple) fprintf(stdout,"(");
            for (i = yyprhs[r]; yyrhs[i] > 0 ; i++) {
               if (i!=yyprhs[r])
                   fprintf(stdout,",");
               fprintf(stdout,"%s", YYTNAME(yyrhs[i]));
            }
       		if (multiple) fprintf(stdout,")");
         }
         old_rule = j;
       }
       fprintf(stdout,")>\n");
       /// DTD for terminals
       for (r = 3; r < YYNTOKENS; r++) 
       {
            fprintf(stdout,"<!ELEMENT %s (#PCDATA)>\n", YYTNAME(r));
       }
    
}

//------------------------------------------------------------------------
/*----------.
| yyparse.  |
`----------*/
// Yijun Yu
#include <stdio.h>
char *yytext=NULL;

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyxs': related to xml tags,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  // Yijun Yu: for XML
  /* The tags stack. */
  char *yyxsa[YYINITDEPTH];
  char **yyxs = yyxsa;
  register char **yyxsp;
  //-----------------------------------------------

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;


// Yijun Yu: don't forget yyxsp--
#define YYPOPSTACK   (yyvsp--, yyxsp--, yyssp--)
static char * yyxml_string=NULL; // for XML

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  // Yijun Yu: don't forget yyxsp
  yyxsp = yyxs;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	// Yijun Yu: don't forget yyxs
    char **yyxs1 = yyxs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    // Yijun Yu: don't forget yyxsl
		    &yyxs1, yysize * sizeof (*yyxsp),
		    &yyvs1, yysize * sizeof (*yyvsp),
 &yystacksize);
    yyxs = yyxs1;

	yyss = yyss1;
	// Yijun Yu: don't forget yyxsl
    yyxs = yyxs1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
    char **yyxs1 = yyxs;
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
		// Yijun Yu: yyxsp
      yyxsp = yyxs + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
    { // Yijun Yu: process the terminal
      yyxml_string = (char *) XML_ALLOC(200);
      strcpy(yyxml_string, "<yaxx:");
      strcat(yyxml_string, YYTNAME(yytoken));      
      strcat(yyxml_string, ">");
      if (yytoken < YYNTOKENS) {
	  if (yytext) {
		  char *tmp;
		  tmp=(char *)YYSTACK_ALLOC(6*strlen(yytext)+1); 
		  replace_special_entities(yytext,tmp);
		  strcat(yyxml_string, tmp);
		  YYSTACK_FREE(tmp);
	  }
      }
      strcat(yyxml_string, "</yaxx:");
      strcat(yyxml_string, YYTNAME(yytoken));
      strcat(yyxml_string, ">\n");
    }
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

	// Yijun Yu: update yyxsp
  *++yyxsp = yyxml_string;
  yyxml_string = 0;
  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
    {
      int len = 0;
      int alloc_len=0;
      int n = 0;
      int yyi;
      int i;
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0 ; yyi++, n++) {
          int l;
          char * yyxml_str = yyxsp[-n];
          if (yyxml_str==NULL) {
            l = 0;
          } else
              l = strlen(yyxml_str);
          len += l;
      }
      alloc_len =len+100+2*strlen(YYTNAME(yyr1[yyn]));
      yyxml_string = (char *) XML_ALLOC(alloc_len);
      strcpy(yyxml_string, "<yaxx:");
      strcat(yyxml_string, YYTNAME(yyr1[yyn]));
      strcat(yyxml_string, ">\n");
      i = n;
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++, i--) 
      {
          char * yyxml_str = yyxsp[1-i];
          if (yyxml_str) {
              strcat(yyxml_string, yyxml_str); 
              XML_FREE(yyxml_str);
              yyxsp[1-i] = NULL;
          } else {
            fprintf(stderr, "Warning! the %d-th argument is empty", n-i+1);
          }
      }
      strcat(yyxml_string, "</yaxx:");
      strcat(yyxml_string, YYTNAME(yyr1[yyn]));
      strcat(yyxml_string, ">\n");
      yyxsp -= n;
      *++yyxsp = yyxml_string;
      yyxml_string = NULL;
    }
  switch (yyn)
    {
      
    }

/* Line 1272 of yacc.c.  */
#line 2655 "grammar9x.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
          int yyxbase = yyn < 0 ? -yyn : 0;
  
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn;
          int yynsyms = sizeof (yytname) / sizeof (yytname[0]);
          int yyxlim = yychecklim < yynsyms ? yychecklim : yynsyms;
          int yycount = 0;
  
          for (yyx = yyxbase; yyx < yyxlim; yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
              {
                yysize += (! yycount
                           ? sizeof (", expecting ") - 1
                           : sizeof (" or ") - 1);
                yysize += yystrlen (yytname[yyx]);
                yycount++;
                if (yycount == 5)
                  {
                    yysize = 0;
                    break;
                  }             
              }
          yysize += (sizeof ("syntax error, unexpected ")
                     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
                  for (yyx = yyxbase; yyx < yyxlim; yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:


  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
		// Yijun Yu: don't forget yyxsp
	  yyxsp--;
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

	// Yijun Yu: yyxsp
  *++yyxsp = yyxml_string;
  yyxml_string = NULL;
  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  generate_xml_output(yyxsp,yyxs);
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1092 "grammar9x.y"


