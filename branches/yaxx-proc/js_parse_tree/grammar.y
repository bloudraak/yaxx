%{

/*
 *  This file is part of the KDE libraries
 *  Copyright (C) 1999-2000 Harri Porten (porten@kde.org)
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */


%}


%start Program

/* expect a shift/reduce conflict from the "dangling else" problem
   when using bison the warning can be supressed */
// %expect 1

/* literals */
%token NULLTOKEN TRUETOKEN FALSETOKEN
%token STRING NUMBER

/* keywords */
%token BREAK CASE DEFAULT FOR NEW VAR CONTINUE
%token FUNCTION RETURN VOID DELETE
%token IF THIS DO WHILE ELSE IN INSTANCEOF TYPEOF
%token SWITCH WITH RESERVED
%token THROW TRY CATCH FINALLY

/* punctuators */
%token EQEQ NE                     /* == and != */
%token STREQ STRNEQ                /* === and !== */
%token LE GE                       /* < and > */
%token OR AND                      /* || and && */
%token PLUSPLUS MINUSMINUS         /* ++ and --  */
%token LSHIFT                      /* << */
%token RSHIFT URSHIFT              /* >> and >>> */
%token PLUSEQUAL MINUSEQUAL        /* += and -= */
%token MULTEQUAL DIVEQUAL          /* *= and /= */
%token LSHIFTEQUAL                 /* <<= */
%token RSHIFTEQUAL URSHIFTEQUAL    /* >>= and >>>= */
%token ANDEQUAL MODEQUAL           /* &= and %= */
%token XOREQUAL OREQUAL            /* ^= and |= */

/* terminal types */
%token NUMBER
%token STRING
%token IDENT

/* automatically inserted semicolon */
%token AUTOPLUSPLUS AUTOMINUSMINUS

/* non-terminal types */


%%

Literal:
    NULLTOKEN
  | TRUETOKEN
  | FALSETOKEN
  | NUMBER
  | STRING
  | '/'       /* a RegExp ? */
  | DIVEQUAL /* a RegExp starting with /= ! */
;

PrimaryExpr:
    THIS
  | IDENT
  | Literal
  | ArrayLiteral
  | '(' Expr ')'
  | '{' '}'
  | '{' PropertyNameAndValueList '}'
;

ArrayLiteral:
    '[' ElisionOpt ']'
  | '[' ElementList ']'
  | '[' ElementList ',' ElisionOpt ']'
;

ElementList:
    ElisionOpt AssignmentExpr
  | ElementList ',' ElisionOpt AssignmentExpr
;

ElisionOpt:
    /* nothing */
  | Elision
;

Elision:
    ','
  | Elision ','
;

PropertyNameAndValueList:
    PropertyName ':' AssignmentExpr
  | PropertyNameAndValueList ',' PropertyName ':' AssignmentExpr
;

PropertyName:
    IDENT
  | STRING
  | NUMBER
;

MemberExpr:
    PrimaryExpr
  | FunctionExpr
  | MemberExpr '[' Expr ']'
  | MemberExpr '.' IDENT
  | NEW MemberExpr Arguments
;

NewExpr:
    MemberExpr
  | NEW NewExpr
;

CallExpr:
    MemberExpr Arguments
  | CallExpr Arguments
  | CallExpr '[' Expr ']'
  | CallExpr '.' IDENT
;

Arguments:
    '(' ')'
  | '(' ArgumentList ')'
;

ArgumentList:
    AssignmentExpr
  | ArgumentList ',' AssignmentExpr
;

LeftHandSideExpr:
    NewExpr
  | CallExpr
;

PostfixExpr:    /* TODO: no line terminator here */
    LeftHandSideExpr
  | LeftHandSideExpr PLUSPLUS
  | LeftHandSideExpr MINUSMINUS
;

UnaryExpr:
    PostfixExpr
  | DELETE UnaryExpr
  | VOID UnaryExpr
  | TYPEOF UnaryExpr
  | PLUSPLUS UnaryExpr
  | AUTOPLUSPLUS UnaryExpr
  | MINUSMINUS UnaryExpr
  | AUTOMINUSMINUS UnaryExpr
  | '+' UnaryExpr
  | '-' UnaryExpr
  | '~' UnaryExpr
  | '!' UnaryExpr
;

MultiplicativeExpr:
    UnaryExpr
  | MultiplicativeExpr '*' UnaryExpr
  | MultiplicativeExpr '/' UnaryExpr
  | MultiplicativeExpr '%' UnaryExpr
;

AdditiveExpr:
    MultiplicativeExpr
  | AdditiveExpr '+' MultiplicativeExpr
  | AdditiveExpr '-' MultiplicativeExpr
;

ShiftExpr:
    AdditiveExpr
  | ShiftExpr LSHIFT AdditiveExpr
  | ShiftExpr RSHIFT AdditiveExpr
  | ShiftExpr URSHIFT AdditiveExpr
;

RelationalExpr:
    ShiftExpr
  | RelationalExpr '<' ShiftExpr
  | RelationalExpr '>' ShiftExpr
  | RelationalExpr LE ShiftExpr
  | RelationalExpr GE ShiftExpr
  | RelationalExpr INSTANCEOF ShiftExpr
  | RelationalExpr IN ShiftExpr
;

EqualityExpr:
    RelationalExpr
  | EqualityExpr EQEQ RelationalExpr
  | EqualityExpr NE RelationalExpr
  | EqualityExpr STREQ RelationalExpr
  | EqualityExpr STRNEQ RelationalExpr
;

BitwiseANDExpr:
    EqualityExpr
  | BitwiseANDExpr '&' EqualityExpr
;

BitwiseXORExpr:
    BitwiseANDExpr
  | BitwiseXORExpr '^' BitwiseANDExpr
;

BitwiseORExpr:
    BitwiseXORExpr
  | BitwiseORExpr '|' BitwiseXORExpr
;

LogicalANDExpr:
    BitwiseORExpr
  | LogicalANDExpr AND BitwiseORExpr
;

LogicalORExpr:
    LogicalANDExpr
  | LogicalORExpr OR LogicalANDExpr
;

ConditionalExpr:
    LogicalORExpr
  | LogicalORExpr '?' AssignmentExpr ':' AssignmentExpr
;

AssignmentExpr:
    ConditionalExpr
  | LeftHandSideExpr AssignmentOperator AssignmentExpr
;

AssignmentOperator:
    '='
  | PLUSEQUAL
  | MINUSEQUAL
  | MULTEQUAL
  | DIVEQUAL
  | LSHIFTEQUAL
  | RSHIFTEQUAL
  | URSHIFTEQUAL
  | ANDEQUAL
  | XOREQUAL
  | OREQUAL
  | MODEQUAL
;

Expr:
    AssignmentExpr
  | Expr ',' AssignmentExpr
;

Statement:
    Block
  | VariableStatement
  | EmptyStatement
  | ExprStatement
  | IfStatement
  | IterationStatement
  | ContinueStatement
  | BreakStatement
  | ReturnStatement
  | WithStatement
  | SwitchStatement
  | LabelledStatement
  | ThrowStatement
  | TryStatement
;

Block:
    '{' '}'
  | '{' SourceElements '}'
;

StatementList:
    Statement
  | StatementList Statement
;

VariableStatement:
    VAR VariableDeclarationList ';'
  | VAR VariableDeclarationList error
;

VariableDeclarationList:
    VariableDeclaration
  | VariableDeclarationList ',' VariableDeclaration
;

VariableDeclaration:
    IDENT
  | IDENT Initializer
;

Initializer:
    '=' AssignmentExpr
;

EmptyStatement:
    ';'
;

ExprStatement:
    Expr ';'
  | Expr error
;

IfStatement: /* shift/reduce conflict due to dangling else */
    IF '(' Expr ')' Statement
  | IF '(' Expr ')' Statement ELSE Statement
;

IterationStatement:
    DO Statement WHILE '(' Expr ')'
  | WHILE '(' Expr ')' Statement
  | FOR '(' ExprOpt ';' ExprOpt ';' ExprOpt ')'
            Statement
  | FOR '(' VAR VariableDeclarationList ';' ExprOpt ';' ExprOpt ')'
            Statement
  | FOR '(' LeftHandSideExpr IN Expr ')'
            Statement
  | FOR '(' VAR IDENT IN Expr ')'
            Statement
  | FOR '(' VAR IDENT Initializer IN Expr ')'
            Statement
;

ExprOpt:
    /* nothing */
  | Expr
;

ContinueStatement:
    CONTINUE ';'
  | CONTINUE error
  | CONTINUE IDENT ';'
  | CONTINUE IDENT error
;

BreakStatement:
    BREAK ';'
  | BREAK error
  | BREAK IDENT ';'
  | BREAK IDENT error
;

ReturnStatement:
    RETURN ';'
  | RETURN error
  | RETURN Expr ';'
  | RETURN Expr error
;

WithStatement:
    WITH '(' Expr ')' Statement
;

SwitchStatement:
    SWITCH '(' Expr ')' CaseBlock
;

CaseBlock:
    '{' CaseClausesOpt '}'
  | '{' CaseClausesOpt DefaultClause CaseClausesOpt '}'
;

CaseClausesOpt:
    /* nothing */
  | CaseClauses
;

CaseClauses:
    CaseClause
  | CaseClauses CaseClause
;

CaseClause:
    CASE Expr ':'
  | CASE Expr ':' StatementList
;

DefaultClause:
    DEFAULT ':'
  | DEFAULT ':' StatementList
;

LabelledStatement:
    IDENT ':' Statement
;

ThrowStatement:
    THROW Expr ';'
;

TryStatement:
    TRY Block Catch
  | TRY Block Finally
  | TRY Block Catch Finally
;

Catch:
    CATCH '(' IDENT ')' Block
;

Finally:
    FINALLY Block
;

FunctionDeclaration:
    FUNCTION IDENT '(' ')' FunctionBody
  | FUNCTION IDENT '(' FormalParameterList ')' FunctionBody

FunctionExpr:
    FUNCTION '(' ')' FunctionBody
  | FUNCTION '(' FormalParameterList ')' FunctionBody

;

FormalParameterList:
    IDENT
  | FormalParameterList ',' IDENT
;

FunctionBody:
    '{' '}'  /* TODO: spec ??? */
  | '{' SourceElements '}'
;

Program:
    /* nothing, empty script */
    | SourceElements
;

SourceElements:
    SourceElement
  | SourceElements SourceElement
;

SourceElement:
    Statement
  | FunctionDeclaration
;

%%
#include <stdio.h>

//extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
