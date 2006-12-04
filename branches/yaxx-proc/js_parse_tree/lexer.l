 
D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "grammar.tab.h"

void count();
%}

%%
"/*"			{ comment(); }

"true"		{ count(); return(TRUETOKEN); }
"false"		{ count(); return(FALSETOKEN); }

"break"		{ count(); return(BREAK); }
"for"			{ count(); return(FOR); }
"new"			{ count(); return(NEW); }
"var"			{ count(); return(VAR); }
"continue"		{ count(); return(CONTINUE); }
"function"		{ count(); return(FUNCTION); }
"return"		{ count(); return(RETURN); }
"void"		{ count(); return(VOID); }

"delete"		{ count(); return(DELETE); }
"if"			{ count(); return(IF); }
"this"		{ count(); return(THIS); }
"while"		{ count(); return(WHILE); }
"else"		{ count(); return(ELSE); }
"in"			{ count(); return(IN); }
"typeof"		{ count(); return(TYPEOF); }
"with"		{ count(); return(WITH); }

"case"		{ count(); return(CASE); }
"catch"		{ count(); return(CATCH); }
"default"		{ count(); return(DEFAULT); }
"switch"		{ count(); return(SWITCH); }

"do"			{ count(); return(DO); }
"finally"		{ count(); return(FINALLY); }
"throw"		{ count(); return(THROW); }
"try"			{ count(); return(TRY); }



{L}({L}|{D})*	{ count(); return(IDENT); }

0[xX]{H}+{IS}?	{ count(); return(NUMBER); }
0{D}+{IS}?		{ count(); return(NUMBER); }
{D}+{IS}?		{ count(); return(NUMBER); }
'(\\.|[^\\'])+'		{ count(); return(NUMBER); }

{D}+{E}{FS}?		{ count(); return(NUMBER); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(NUMBER); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(NUMBER); }

\"(\\.|[^\\"])*\"	{ count(); return(STRING); }

">>="			{ count(); return(RSHIFTEQUAL); }
"<<="			{ count(); return(LSHIFTEQUAL); }
"+="			{ count(); return(PLUSEQUAL); }
"-="			{ count(); return(MINUSEQUAL); }
"*="			{ count(); return(MULTEQUAL); }
"/="			{ count(); return(DIVEQUAL); }
"%="			{ count(); return(MODEQUAL); }
"&="			{ count(); return(ANDEQUAL); }
"^="			{ count(); return(XOREQUAL); }
"|="			{ count(); return(OREQUAL); }

">>"			{ count(); return(RSHIFT); }
"<<"			{ count(); return(LSHIFT); }
"++"			{ count(); return(PLUSPLUS); }
"--"			{ count(); return(MINUSMINUS); }


"&&"			{ count(); return(AND); }
"||"			{ count(); return(OR); }

"=="			{ count(); return(EQEQ); }
"!="			{ count(); return(NE); }

";"			{ count(); return(';'); }
"{"			{ count(); return('{'); }
"}"			{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
"["			{ count(); return('['); }
"]"			{ count(); return(']'); }
"."			{ count(); return('.'); }

"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }
">>>"		{ count(); return(URSHIFT); }
">>>="	{ count(); return(URSHIFTEQUAL); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}

comment()
{
/*	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);*/
}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}

