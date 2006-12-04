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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 2 "nfr.y"
typedef union YYSTYPE {char *xml;} YYSTYPE;
/* Line 1536 of yacc.c.  */
#line 80 "nfr.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



