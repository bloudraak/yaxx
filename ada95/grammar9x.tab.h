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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE adalval;



