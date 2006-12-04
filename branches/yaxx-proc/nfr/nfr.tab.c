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
#define YYSKELETON_NAME "yaxx-1.875.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */

#define yyparse yyparse
#define yylex   yylex
#define yyerror yyerror
#define yylval  yylval
#define yytext  yytext
#define YYYAXX_XML  "yyyaxx.xml"
#define YYYAXX_DTD  "yyyaxx.dtd"
#define yychar  yychar
#define yydebug yydebug
#define yynerrs yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMA = 258,
     IDENTIFIER = 259,
     FOR = 260,
     AT = 261,
     LEFT_BRACE = 262,
     RIGHT_BRACE = 263,
     IMPLIES = 264,
     SEMICOLON = 265,
     COMMENT = 266,
     TRUE = 267,
     FALSE = 268,
     AND = 269,
     OR = 270,
     MAKE = 271,
     HELP = 272,
     HURT = 273,
     BREAK = 274,
     LEFT_PAR = 275,
     RIGHT_PAR = 276
   };
#endif
#define COMMA 258
#define IDENTIFIER 259
#define FOR 260
#define AT 261
#define LEFT_BRACE 262
#define RIGHT_BRACE 263
#define IMPLIES 264
#define SEMICOLON 265
#define COMMENT 266
#define TRUE 267
#define FALSE 268
#define AND 269
#define OR 270
#define MAKE 271
#define HELP 272
#define HURT 273
#define BREAK 274
#define LEFT_PAR 275
#define RIGHT_PAR 276




/* Copy the first part of user declarations.  */


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
#line 2 "nfr.y"
typedef union YYSTYPE {char *xml;} YYSTYPE;
/* Line 193 of yacc.c.  */
#line 133 "nfr.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 8 "nfr.y"

#include <stdio.h>
#include <stdarg.h>
static char *xml = NULL;
#define MAXARGS 31
char *xml_concat(char *xml, ...)
{
	char *xml1 = (char *) malloc(10000);
	int len = 0;
	va_list ap;
	strcpy(xml1, "");
	va_start(ap, xml);
	while (xml!=NULL) {
		if (strlen(xml)>0) {
			len += strlen(xml);
			strcat(xml1, xml);
		}
		// free(xml);
		xml = va_arg(ap, char*);
	} 
	va_end(ap);
	return xml1;
}
char *va_xml_concat(char *xml, va_list ap)
{
	char *xml1 = (char *) malloc(10000);
	int len = 0;
	while (xml!=NULL) {
		if (strlen(xml)>0) {
			len += strlen(xml);
			strcat(xml1, xml);
		}
		// free(xml);
		xml = va_arg(ap, char*);
	} 
	return xml1;
}
char *xml_tag(char *tag, char *arg, ... )
{
#ifdef AST
	va_list ap;
	char *xml1, *xml2;
	int len = 0;
	va_start(ap, arg);
	xml1 = va_xml_concat(arg, ap);
	va_end(ap);
	len += strlen(xml1);
	len += 2*strlen(tag)+8;
	xml2 = (char *) malloc(len);
	strcpy(xml2, "<");
	strcat(xml2, tag);
	strcat(xml2, ">");
	strcat(xml2, xml1);
	strcat(xml2, "</");
	strcat(xml2, tag);
	strcat(xml2, ">\n");
	// free(xml1);
	return xml2;
#else
	return NULL;
#endif
}
char *xml_init(char *str)
{
	return (char *) strdup(str);
}




/* Line 216 of yacc.c.  */
#line 214 "nfr.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   44

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  22
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  15
/* YYNRULES -- Number of rules. */
#define YYNRULES  32
/* YYNRULES -- Number of states. */
#define YYNSTATES  52

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

//#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,    11,    15,    16,    19,    23,    24,
      27,    29,    31,    35,    39,    41,    43,    45,    49,    51,
      53,    57,    59,    63,    65,    69,    71,    75,    78,    83,
      85,    87,    89
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      23,     0,    -1,    34,    -1,    27,     9,    29,    25,    26,
      -1,    29,    25,    26,    -1,    -1,     7,     8,    -1,     7,
      34,     8,    -1,    -1,     9,    35,    -1,    12,    -1,    13,
      -1,     4,    20,    21,    -1,    27,    28,    27,    -1,    14,
      -1,    15,    -1,    30,    -1,    30,     5,    32,    -1,     4,
      -1,     4,    -1,     4,     6,    33,    -1,    31,    -1,    31,
      10,    32,    -1,    31,    -1,    31,     3,    33,    -1,    24,
      -1,    24,    28,    34,    -1,    36,    29,    -1,    36,    29,
       3,    35,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    78,    78,    83,    87,    92,    93,    95,    98,    99,
     102,   104,   106,   108,   113,   115,   117,   119,   122,   124,
     126,   130,   132,   134,   136,   138,   140,   143,   145,   147,
     148,   149,   150
};
//#endif

//#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMA", "IDENTIFIER", "FOR", "AT", 
  "LEFT_BRACE", "RIGHT_BRACE", "IMPLIES", "SEMICOLON", "COMMENT", "TRUE", 
  "FALSE", "AND", "OR", "MAKE", "HELP", "HURT", "BREAK", "LEFT_PAR", 
  "RIGHT_PAR", "$accept", "start", "advice", "by", "side_effects_clause", 
  "when", "boolop", "soft_goal", "nfr_type", "topic", "topics", 
  "pointcuts", "advices", "side_effects", "op", 0
};
//#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    22,    23,    24,    24,    25,    25,    25,    26,    26,
      27,    27,    27,    27,    28,    28,    29,    29,    30,    31,
      31,    32,    32,    33,    33,    34,    34,    35,    35,    36,
      36,    36,    36
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     5,     3,     0,     2,     3,     0,     2,
       1,     1,     3,     3,     1,     1,     1,     3,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     2,     4,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,    18,    10,    11,     0,    25,     0,     5,    16,     2,
       0,     1,    14,    15,     0,     0,     0,     0,     8,     0,
      12,    26,    18,     5,     0,    13,     6,     0,     0,     4,
      19,    21,    17,     8,     7,    29,    30,    31,    32,     9,
       0,     0,     0,     3,    27,    23,    20,    22,     0,     0,
      28,    24
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     4,     5,    18,    29,     6,    16,     7,     8,    31,
      32,    46,     9,    39,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -34
static const yysigned_char yypact[] =
{
      -1,   -18,   -34,   -34,    17,    12,     4,    13,    23,   -34,
       8,   -34,   -34,   -34,    -1,    26,     2,    -3,    22,    28,
     -34,   -34,   -34,    13,   -18,    12,   -34,    25,     5,   -34,
      29,    24,   -34,    22,   -34,   -34,   -34,   -34,   -34,   -34,
      26,    28,    28,   -34,    33,    34,   -34,   -34,     5,    28,
     -34,   -34
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -34,   -34,   -34,    15,     6,    27,    35,   -15,   -34,   -33,
       0,    -8,   -10,    -4,   -34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
      23,     1,    10,     1,    21,    26,    24,    27,    45,     2,
       3,     2,     3,    15,     2,     3,    45,    11,    12,    13,
      17,    35,    36,    37,    38,    44,    12,    13,    19,    20,
      22,    28,    30,    34,    42,    41,    48,    49,    33,    43,
      14,    51,    47,    25,    50
};

static const unsigned char yycheck[] =
{
      15,     4,    20,     4,    14,     8,     4,    17,    41,    12,
      13,    12,    13,     9,    12,    13,    49,     0,    14,    15,
       7,    16,    17,    18,    19,    40,    14,    15,     5,    21,
       4,     9,     4,     8,    10,     6,     3,     3,    23,    33,
       5,    49,    42,    16,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     4,    12,    13,    23,    24,    27,    29,    30,    34,
      20,     0,    14,    15,    28,     9,    28,     7,    25,     5,
      21,    34,     4,    29,     4,    27,     8,    34,     9,    26,
       4,    31,    32,    25,     8,    16,    17,    18,    19,    35,
      36,     6,    10,    26,    29,    31,    33,    32,     3,     3,
      35,    33
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
        case 2:
#line 78 "nfr.y"
    { 
#ifdef AST
	printf("%s\n", yyvsp[0].xml); 
#endif
	free(yyvsp[0].xml); ;}
    break;

  case 3:
#line 84 "nfr.y"
    { yyval.xml = xml_tag("Advice", yyvsp[-4].xml, yyvsp[-2].xml, yyvsp[-1].xml, yyvsp[0].xml, NULL); 
	  free(yyvsp[-4].xml); free(yyvsp[-2].xml); free(yyvsp[-1].xml); free(yyvsp[0].xml);
	;}
    break;

  case 4:
#line 88 "nfr.y"
    { yyval.xml = xml_tag("Advice", yyvsp[-2].xml, yyvsp[-1].xml, yyvsp[0].xml, NULL); 
	  free(yyvsp[-2].xml); free(yyvsp[-1].xml); free(yyvsp[0].xml);
	;}
    break;

  case 5:
#line 92 "nfr.y"
    {yyval.xml = xml_init(""); ;}
    break;

  case 6:
#line 94 "nfr.y"
    { yyval.xml = xml_tag("By", NULL); ;}
    break;

  case 7:
#line 96 "nfr.y"
    { yyval.xml = xml_tag("By", yyvsp[-1].xml, NULL); ;}
    break;

  case 8:
#line 98 "nfr.y"
    {yyval.xml = xml_init(""); ;}
    break;

  case 9:
#line 100 "nfr.y"
    { yyval.xml = xml_tag("SideEffect", yyvsp[0].xml, NULL); 
   	  ;}
    break;

  case 10:
#line 103 "nfr.y"
    {yyval.xml = xml_tag("When", (char*)strdup("True"), NULL); ;}
    break;

  case 11:
#line 105 "nfr.y"
    {yyval.xml = xml_tag("When", (char*)strdup("False"), NULL); ;}
    break;

  case 12:
#line 107 "nfr.y"
    {yyval.xml = xml_tag("When", yyvsp[-2].xml, NULL); ;}
    break;

  case 13:
#line 109 "nfr.y"
    {yyval.xml = xml_tag("When", yyvsp[-2].xml, yyvsp[-1].xml, yyvsp[0].xml, NULL); 
		free(yyvsp[-2].xml); free(yyvsp[-1].xml); free(yyvsp[0].xml); 
          ;}
    break;

  case 14:
#line 114 "nfr.y"
    {yyval.xml = xml_tag("op", (char*)strdup("and"), NULL); ;}
    break;

  case 15:
#line 116 "nfr.y"
    {yyval.xml = xml_tag("op", (char*)strdup("or"), NULL); ;}
    break;

  case 16:
#line 118 "nfr.y"
    {yyval.xml = xml_tag("SoftGoal", yyvsp[0].xml, NULL); ;}
    break;

  case 17:
#line 120 "nfr.y"
    {yyval.xml = xml_tag("SoftGoal", yyvsp[-2].xml, yyvsp[0].xml, NULL); 
	  ;}
    break;

  case 18:
#line 123 "nfr.y"
    { yyval.xml = xml_tag("Type", yyvsp[0].xml, NULL); ;}
    break;

  case 19:
#line 125 "nfr.y"
    {yyval.xml = xml_tag("Topic", yyvsp[0].xml, NULL); ;}
    break;

  case 20:
#line 127 "nfr.y"
    {yyval.xml = xml_tag("Topic", yyvsp[-2].xml, xml_tag("At", yyvsp[0].xml, NULL), NULL); 
	  ;}
    break;

  case 21:
#line 131 "nfr.y"
    {yyval.xml = yyvsp[0].xml; ;}
    break;

  case 22:
#line 133 "nfr.y"
    {yyval.xml = xml_concat(yyvsp[-2].xml, yyvsp[0].xml, NULL); ;}
    break;

  case 23:
#line 135 "nfr.y"
    {yyval.xml = yyvsp[0].xml; ;}
    break;

  case 24:
#line 137 "nfr.y"
    {yyval.xml = xml_concat(yyvsp[-2].xml, yyvsp[0].xml, NULL); ;}
    break;

  case 25:
#line 139 "nfr.y"
    {yyval.xml = yyvsp[0].xml; ;}
    break;

  case 26:
#line 141 "nfr.y"
    {yyval.xml = xml_concat(yyvsp[-2].xml, yyvsp[-1].xml, yyvsp[0].xml, NULL); ;}
    break;

  case 27:
#line 144 "nfr.y"
    {yyval.xml = xml_concat(yyvsp[-1].xml, yyvsp[0].xml, NULL); ;}
    break;

  case 28:
#line 146 "nfr.y"
    {yyval.xml = xml_concat(yyvsp[-3].xml, yyvsp[-2].xml, yyvsp[0].xml, NULL); ;}
    break;

  case 29:
#line 147 "nfr.y"
    { yyval.xml =  xml_tag("op", (char*)strdup("++"), NULL); ;}
    break;

  case 30:
#line 148 "nfr.y"
    { yyval.xml =  xml_tag("op", (char*)strdup("+"), NULL); ;}
    break;

  case 31:
#line 149 "nfr.y"
    { yyval.xml =  xml_tag("op", (char*)strdup("-"), NULL); ;}
    break;

  case 32:
#line 150 "nfr.y"
    { yyval.xml =  xml_tag("op", (char*)strdup("--"), NULL); ;}
    break;


    }

/* Line 1272 of yacc.c.  */
#line 1567 "nfr.tab.c"

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


#line 151 "nfr.y"

int yyerror (char *s) { 
  printf("\n%s\n", s);
}

int debug = 0;

int main(int argc, char **argv) {
	int yyreturn;
	if (argc>1) {
		if (argv[1][0]=='-' && argv[1][1]=='d') {
			debug = 1;
		}
		if (argc>debug + 1)
			stdin = fopen(argv[debug + 1], "r");
	} 
#ifdef AST
	printf("<?xml version=\"1.0\"?>\n");
	printf("<?xml-stylesheet type=\"text/xsl\" href=\"nfr.xsl\"?>\n");
	printf("<!DOCTYPE Advice SYSTEM \"nfr.dtd\">\n");
	printf("<NFR xmlns:yaxx=\"urn:YAcc-Xml-eXtension\">\n");
#endif
	yyreturn = yyparse();
#ifdef AST
	printf("</NFR>\n");
#endif
	return yyreturn;
}

