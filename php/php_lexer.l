%{

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2006 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: php_lexer.l,v 1.1 2006/10/02 01:56:09 yijunsf Exp $ */

#include "php_parser.tab.h"

int getLineno(){
	return yylineno;
}
%}

%x ST_IN_SCRIPTING
%x ST_DOUBLE_QUOTES
%x ST_SINGLE_QUOTE
%x ST_BACKQUOTE
%x ST_HEREDOC
%x ST_LOOKING_FOR_PROPERTY
%x ST_LOOKING_FOR_VARNAME
%x ST_COMMENT
%x ST_DOC_COMMENT
%x ST_ONE_LINE_COMMENT
%option stack

%{
int asp_tags = 0;
int short_tags = 0;
int lineno = 0;
int comment_start_line = 0;
int heredoc_len = 4;
int * heredoc;

%}

LNUM	[0-9]+
DNUM	([0-9]*[\.][0-9]+)|([0-9]+[\.][0-9]*)
EXPONENT_DNUM	(({LNUM}|{DNUM})[eE][+-]?{LNUM})
HNUM	"0x"[0-9a-fA-F]+
LABEL	[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*
WHITESPACE [ \n\r\t]+
TABS_AND_SPACES [ \t]*
TOKENS [;:,.\[\]()|^&+-/*=%!~$<>?@]
ENCAPSED_TOKENS [\[\]{}$]
ESCAPED_AND_WHITESPACE [\n\t\r #'.:;,()|^&+-/*=%!~<>?@]+
ANY_CHAR (.|[\n])
NEWLINE ("\r"|"\n"|"\r\n")

%option yylineno
%option noyywrap
%%

<ST_IN_SCRIPTING>"exit" {
	return T_EXIT;
}

<ST_IN_SCRIPTING>"die" {
	return T_EXIT;
}

<ST_IN_SCRIPTING>"function" {
	return T_FUNCTION;
}

<ST_IN_SCRIPTING>"const" {
	return T_CONST;
}

<ST_IN_SCRIPTING>"return" {
	return T_RETURN;
}

<ST_IN_SCRIPTING>"try" {
	return T_TRY;
}

<ST_IN_SCRIPTING>"catch" {
	return T_CATCH;
}

<ST_IN_SCRIPTING>"throw" {
	return T_THROW;
}

<ST_IN_SCRIPTING>"if" {
	return T_IF;
}

<ST_IN_SCRIPTING>"elseif" {
	return T_ELSEIF;
}

<ST_IN_SCRIPTING>"endif" {
	return T_ENDIF;
}

<ST_IN_SCRIPTING>"else" {
	return T_ELSE;
}

<ST_IN_SCRIPTING>"while" {
	return T_WHILE;
}

<ST_IN_SCRIPTING>"endwhile" {
	return T_ENDWHILE;
}

<ST_IN_SCRIPTING>"do" {
	return T_DO;
}

<ST_IN_SCRIPTING>"for" {
	return T_FOR;
}

<ST_IN_SCRIPTING>"endfor" {
	return T_ENDFOR;
}

<ST_IN_SCRIPTING>"foreach" {
	return T_FOREACH;
}

<ST_IN_SCRIPTING>"endforeach" {
	return T_ENDFOREACH;
}

<ST_IN_SCRIPTING>"declare" {
	return T_DECLARE;
}

<ST_IN_SCRIPTING>"enddeclare" {
	return T_ENDDECLARE;
}

<ST_IN_SCRIPTING>"instanceof" {
	return T_INSTANCEOF;
}

<ST_IN_SCRIPTING>"as" {
	return T_AS;
}

<ST_IN_SCRIPTING>"switch" {
	return T_SWITCH;
}

<ST_IN_SCRIPTING>"endswitch" {
	return T_ENDSWITCH;
}

<ST_IN_SCRIPTING>"case" {
	return T_CASE;
}

<ST_IN_SCRIPTING>"default" {
	return T_DEFAULT;
}

<ST_IN_SCRIPTING>"break" {
	return T_BREAK;
}

<ST_IN_SCRIPTING>"continue" {
	return T_CONTINUE;
}

<ST_IN_SCRIPTING>"echo" {
	return T_ECHO;
}

<ST_IN_SCRIPTING>"print" {
	return T_PRINT;
}

<ST_IN_SCRIPTING>"class" {
	return T_CLASS;
}

<ST_IN_SCRIPTING>"aspect" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_ASPECT;
}

<ST_IN_SCRIPTING>"before" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_BEFORE;
}

<ST_IN_SCRIPTING>"around" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_AROUND;
}

<ST_IN_SCRIPTING>"after" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_AFTER;
}

<ST_IN_SCRIPTING>"pointcut" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_POINTCUT;
}

<ST_IN_SCRIPTING>"exec" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_EXEC;
}

<ST_IN_SCRIPTING>"call" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_CALL;
}

<ST_IN_SCRIPTING>"set" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_SET;
}

<ST_IN_SCRIPTING>"get" {
        /* added by William Candillon <wcandillon@php.net> */
	return T_GET;
}

<ST_IN_SCRIPTING>"interface" {
	return T_INTERFACE;
}

<ST_IN_SCRIPTING>"extends" {
	return T_EXTENDS;
}

<ST_IN_SCRIPTING>"implements" {
	return T_IMPLEMENTS;
}

<ST_IN_SCRIPTING,ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"->" {
	yy_push_state(ST_LOOKING_FOR_PROPERTY);
	return T_OBJECT_OPERATOR;
}

<ST_LOOKING_FOR_PROPERTY>{LABEL} {
	yy_pop_state();
	return T_STRING;
}

<ST_LOOKING_FOR_PROPERTY>{ANY_CHAR} {
	yyless(0);
	yy_pop_state();
}

<ST_IN_SCRIPTING>"::" {
	return T_PAAMAYIM_NEKUDOTAYIM;
}

<ST_IN_SCRIPTING>"new" {
	return T_NEW;
}

<ST_IN_SCRIPTING>"clone" {
	return T_CLONE;
}

<ST_IN_SCRIPTING>"var" {
	return T_VAR;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}("int"|"integer"){TABS_AND_SPACES}")" {
	return T_INT_CAST;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}("real"|"double"|"float"){TABS_AND_SPACES}")" {
	return T_DOUBLE_CAST;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}"string"{TABS_AND_SPACES}")" {
	return T_STRING_CAST;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}"array"{TABS_AND_SPACES}")" {
	return T_ARRAY_CAST;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}"object"{TABS_AND_SPACES}")" {
	return T_OBJECT_CAST;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}("bool"|"boolean"){TABS_AND_SPACES}")" {
	return T_BOOL_CAST;
}

<ST_IN_SCRIPTING>"("{TABS_AND_SPACES}("unset"){TABS_AND_SPACES}")" {
	return T_UNSET_CAST;
}

<ST_IN_SCRIPTING>"eval" {
	return T_EVAL;
}

<ST_IN_SCRIPTING>"include" {
	return T_INCLUDE;
}

<ST_IN_SCRIPTING>"include_once" {
	return T_INCLUDE_ONCE;
}

<ST_IN_SCRIPTING>"require" {
	return T_REQUIRE;
}

<ST_IN_SCRIPTING>"require_once" {
	return T_REQUIRE_ONCE;
}

<ST_IN_SCRIPTING>"use" {
	return T_USE;
}

<ST_IN_SCRIPTING>"global" {
	return T_GLOBAL;
}

<ST_IN_SCRIPTING>"isset" {
	return T_ISSET;
}

<ST_IN_SCRIPTING>"empty" {
	return T_EMPTY;
}

<ST_IN_SCRIPTING>"__halt_compiler" {
	return T_HALT_COMPILER;
}

<ST_IN_SCRIPTING>"static" {
	return T_STATIC;
}

<ST_IN_SCRIPTING>"abstract" {
	return T_ABSTRACT;
}

<ST_IN_SCRIPTING>"final" {
	return T_FINAL;
}

<ST_IN_SCRIPTING>"private" {
	return T_PRIVATE;
}

<ST_IN_SCRIPTING>"protected" {
	return T_PROTECTED;
}

<ST_IN_SCRIPTING>"public" {
	return T_PUBLIC;
}

<ST_IN_SCRIPTING>"unset" {
	return T_UNSET;
}

<ST_IN_SCRIPTING>"=>" {
	return T_DOUBLE_ARROW;
}

<ST_IN_SCRIPTING>"list" {
	return T_LIST;
}

<ST_IN_SCRIPTING>"array" {
	return T_ARRAY;
}

<ST_IN_SCRIPTING>"++" {
	return T_INC;
}

<ST_IN_SCRIPTING>"--" {
	return T_DEC;
}

<ST_IN_SCRIPTING>"===" {
	return T_IS_IDENTICAL;
}

<ST_IN_SCRIPTING>"!==" {
	return T_IS_NOT_IDENTICAL;
}

<ST_IN_SCRIPTING>"==" {
	return T_IS_EQUAL;
}

<ST_IN_SCRIPTING>"!="|"<>" {
	return T_IS_NOT_EQUAL;
}

<ST_IN_SCRIPTING>"<=" {
	return T_IS_SMALLER_OR_EQUAL;
}

<ST_IN_SCRIPTING>">=" {
	return T_IS_GREATER_OR_EQUAL;
}

<ST_IN_SCRIPTING>"+=" {
	return T_PLUS_EQUAL;
}

<ST_IN_SCRIPTING>"-=" {
	return T_MINUS_EQUAL;
}

<ST_IN_SCRIPTING>"*=" {
	return T_MUL_EQUAL;
}

<ST_IN_SCRIPTING>"/=" {
	return T_DIV_EQUAL;
}

<ST_IN_SCRIPTING>".=" {
	return T_CONCAT_EQUAL;
}

<ST_IN_SCRIPTING>"%=" {
	return T_MOD_EQUAL;
}

<ST_IN_SCRIPTING>"<<=" {
	return T_SL_EQUAL;
}

<ST_IN_SCRIPTING>">>=" {
	return T_SR_EQUAL;
}

<ST_IN_SCRIPTING>"&=" {
	return T_AND_EQUAL;
}

<ST_IN_SCRIPTING>"|=" {
	return T_OR_EQUAL;
}

<ST_IN_SCRIPTING>"^=" {
	return T_XOR_EQUAL;
}

<ST_IN_SCRIPTING>"||" {
	return T_BOOLEAN_OR;
}

<ST_IN_SCRIPTING>"&&" {
	return T_BOOLEAN_AND;
}

<ST_IN_SCRIPTING>"0R" {
	return T_LOGICAL_OR;
}

<ST_IN_SCRIPTING>"AND" {
	return T_LOGICAL_AND;
}

<ST_IN_SCRIPTING>"XOR" {
	return T_LOGICAL_XOR;
}

<ST_IN_SCRIPTING>"<<" {
	return T_SL;
}

<ST_IN_SCRIPTING>">>" {
	return T_SR;
}

<ST_IN_SCRIPTING>{TOKENS} {
	return yytext[0];
}


<ST_IN_SCRIPTING>"{" {
	yy_push_state(ST_IN_SCRIPTING);
	return '{';
}


<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"${" {
	yy_push_state(ST_LOOKING_FOR_VARNAME);
	return T_DOLLAR_OPEN_CURLY_BRACES;
}


<ST_IN_SCRIPTING>"}" {
	/* This is a temporary fix which is dependant on flex and it's implementation */
	if (yy_start_stack_ptr) {
		yy_pop_state();
	}
	return '}';
}


<ST_LOOKING_FOR_VARNAME>{LABEL} {
	yy_pop_state();
	yy_push_state(ST_IN_SCRIPTING);
	return T_STRING_VARNAME;
}


<ST_LOOKING_FOR_VARNAME>{ANY_CHAR} {
	yyless(0);
	yy_pop_state();
	yy_push_state(ST_IN_SCRIPTING);
}


<ST_IN_SCRIPTING>{LNUM} {
	return T_LNUMBER;
}

<ST_IN_SCRIPTING>{HNUM} {
	return T_LNUMBER;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>{LNUM}|{HNUM} { /* treat numbers (almost) as strings inside encapsulated strings */
	return T_NUM_STRING;
}

<ST_IN_SCRIPTING>{DNUM}|{EXPONENT_DNUM} {
	return T_DNUMBER;
}

<ST_IN_SCRIPTING>"__CLASS__" {
	return T_CLASS_C;
}

<ST_IN_SCRIPTING>"__FUNCTION__" {
	return T_FUNC_C;
}

<ST_IN_SCRIPTING>"__METHOD__" {
	return T_METHOD_C;
}

<ST_IN_SCRIPTING>"__LINE__" {
	return T_LINE;
}

<ST_IN_SCRIPTING>"__FILE__" {
	return T_FILE;
}

<INITIAL>(([^<]|"<"[^?%s<]){1,400})|"<s"|"<" {
	return T_INLINE_HTML;
}

<INITIAL>"<?"|"<script"{WHITESPACE}+"language"{WHITESPACE}*"="{WHITESPACE}*("php"|"\"php\""|"\'php\'"){WHITESPACE}*">" {
	if (short_tags || yyleng>2) { /* yyleng>2 means it's not <? but <script> */
		/* no copying - intentional */
		BEGIN(ST_IN_SCRIPTING);
		//return T_OPEN_TAG;
	} else {
		return T_INLINE_HTML;
	}
}

<INITIAL>"<%="|"<?=" {
	if ((yytext[1]=='%' && asp_tags) || (yytext[1]=='?' && short_tags)) {
		BEGIN(ST_IN_SCRIPTING);
		//return T_OPEN_TAG_WITH_ECHO;
		//return T_ECHO;
	} else {
		return T_INLINE_HTML;
	}
}


<INITIAL>"<%" {
	if(asp_tags){
		BEGIN(ST_IN_SCRIPTING);
		//return T_OPEN_TAG;
	} else {
		return T_INLINE_HTML;
	}
}

<INITIAL>"<?php"([ \t]|{NEWLINE}) {
	BEGIN(ST_IN_SCRIPTING);
	//return T_OPEN_TAG;
}

<ST_IN_SCRIPTING,ST_DOUBLE_QUOTES,ST_HEREDOC,ST_BACKQUOTE>"$"{LABEL} {
	return T_VARIABLE;
}

<ST_IN_SCRIPTING>{LABEL} {
	return T_STRING;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>{LABEL} {
	return T_STRING;
}


<ST_IN_SCRIPTING>{WHITESPACE} {
	//return T_WHITESPACE;
}


<ST_IN_SCRIPTING>"#"|"//" {
	BEGIN(ST_ONE_LINE_COMMENT);
	yymore();
}

<ST_ONE_LINE_COMMENT>"?"|"%"|">" {
	yymore();
}

<ST_ONE_LINE_COMMENT>[^\n\r?%>]+{ANY_CHAR} {
	switch (yytext[yyleng-1]) {
		case '?': case '%': case '>':
			yyless(yyleng-1);
			yymore();
			break;
		case '\n':
			lineno++;
			/* intentional fall through */
		default:
			BEGIN(ST_IN_SCRIPTING);
			//return T_COMMENT;
	}
}

<ST_ONE_LINE_COMMENT>{NEWLINE} {
	BEGIN(ST_IN_SCRIPTING);
	lineno++;
	//return T_COMMENT;
}

<ST_ONE_LINE_COMMENT>"?>"|"%>" {
    if (asp_tags || yytext[yyleng-2] != '%') { /* asp comment? */
		yyless(yyleng-2);
		BEGIN(ST_IN_SCRIPTING);
		//return T_COMMENT;
	} else {
		yymore();
	}
}

<ST_IN_SCRIPTING>"/**"{WHITESPACE} {
	comment_start_line = lineno;
	BEGIN(ST_DOC_COMMENT);
	yymore();
}

<ST_IN_SCRIPTING>"/*" {
	comment_start_line = lineno;
	BEGIN(ST_COMMENT);
	yymore();
}


<ST_COMMENT,ST_DOC_COMMENT>[^*]+ {
	yymore();
}

<ST_DOC_COMMENT>"*/" {
	BEGIN(ST_IN_SCRIPTING);
	//return T_DOC_COMMENT;
}

<ST_COMMENT>"*/" {
	BEGIN(ST_IN_SCRIPTING);
	//return T_COMMENT;
}

<ST_COMMENT,ST_DOC_COMMENT>"*" {
	yymore();
}

<ST_IN_SCRIPTING>("?>"|"</script"{WHITESPACE}*">"){NEWLINE}? {
	BEGIN(INITIAL);
	//return T_CLOSE_TAG;  /* implicit ';' at php-end tag */
}


<ST_IN_SCRIPTING>"%>"{NEWLINE}? {
	if (asp_tags) {
		BEGIN(INITIAL);
		//return T_CLOSE_TAG;  /* implicit ';' at php-end tag */
	} else {
		yyless(1);
		return yytext[0];
	}
}


<ST_IN_SCRIPTING>(["]([^$"\\]|("\\".))*["]) {
	/*register char *s, *t;
	char *end;
	 convert escape sequences 
	s = t = estrndup(yytext+1, yyleng-2);;
	end = s+yyleng-2;*/
	return T_CONSTANT_ENCAPSED_STRING;
}


<ST_IN_SCRIPTING>([']([^'\\]|("\\".))*[']) {

	register char *s, *t;
	char *end;


	/* convert escape sequences 
	s = t = estrndup(yytext+1, yyleng-2);
	end = s+yyleng-2;
	while (s<end) {
		if (*s=='\\') {
			s++;
			if (s>=end) {
				continue;
			}
			switch(*s) {
				case '\\':
				case '\'':
					*t++ = *s;
					end--;
					break;
				default:
					*t++ = '\\';
					*t++ = *s;
					break;
			}
			s++;
		} else {
			*t++ = *s++;
		}
	}
	*t = 0;
*/
	return T_CONSTANT_ENCAPSED_STRING;
}


<ST_IN_SCRIPTING>["] {
	BEGIN(ST_DOUBLE_QUOTES);
	return '\"';
}


<ST_IN_SCRIPTING>"<<<"{TABS_AND_SPACES}{LABEL}{NEWLINE} {
	BEGIN(ST_HEREDOC);
	return T_START_HEREDOC;
}


<ST_IN_SCRIPTING>[`] {
	BEGIN(ST_BACKQUOTE);
	return '`';
}


<ST_IN_SCRIPTING>['] {
	BEGIN(ST_SINGLE_QUOTE);
	return '\'';
}


<ST_HEREDOC>^{LABEL}(";")?{NEWLINE} {
	int label_len;

	lineno++;
	if (yytext[yyleng-2]=='\r') {
		label_len = yyleng-2;
	} else {
		label_len = yyleng-1;
	}

	if (yytext[label_len-1]==';') {
		label_len--;
	}

	if (label_len==heredoc_len && !memcmp(yytext, heredoc, label_len)) {
		yyless(yyleng - (yyleng - label_len));
		BEGIN(ST_IN_SCRIPTING);
		return T_END_HEREDOC;
	} else {
		return T_STRING;
	}
}


<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>{ESCAPED_AND_WHITESPACE} {
	return T_ENCAPSED_AND_WHITESPACE;
}

<ST_SINGLE_QUOTE>([^'\\]|\\[^'\\])+ {
	return T_ENCAPSED_AND_WHITESPACE;
}

<ST_DOUBLE_QUOTES>[`]+ {
	return T_ENCAPSED_AND_WHITESPACE;
}


<ST_BACKQUOTE>["]+ {
	return T_ENCAPSED_AND_WHITESPACE;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"$"[^a-zA-Z_\x7f-\xff{] {
	if (yyleng == 2) {
		yyless(1);
	}
	return T_CHARACTER;
}


<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>{ENCAPSED_TOKENS} {
	return yytext[0];
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"\\{" {
	return T_STRING;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"{$" {
	yy_push_state(ST_IN_SCRIPTING);
	yyless(1);
	return T_CURLY_OPEN;
}


<ST_SINGLE_QUOTE>"\\'" {
	return T_CHARACTER;
}

<ST_SINGLE_QUOTE>"\\\\" {
	return T_CHARACTER;
}

<ST_DOUBLE_QUOTES>"\\\"" {
	return T_CHARACTER;
}

<ST_BACKQUOTE>"\\`" {
	return T_CHARACTER;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"\\"[0-7]{1,3} {
	return T_CHARACTER;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"\\x"[0-9A-Fa-f]{1,2} {
	return T_CHARACTER;
}

<ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_HEREDOC>"\\"{ANY_CHAR} {
	switch (yytext[1]) {
		case 'n': break;
		case 't': break;
		case 'r': break;
		case '\\': break;
		case '$': break;
		default:
			return T_BAD_CHARACTER;
			break;
	}
	return T_CHARACTER;
}


<ST_HEREDOC>["'`]+ {
	return T_ENCAPSED_AND_WHITESPACE;
}


<ST_DOUBLE_QUOTES>["] {
	BEGIN(ST_IN_SCRIPTING);
	return '\"';
}


<ST_BACKQUOTE>[`] {
	BEGIN(ST_IN_SCRIPTING);
	return '`';
}


<ST_SINGLE_QUOTE>['] {
	BEGIN(ST_IN_SCRIPTING);
	return '\'';
}


<ST_DOUBLE_QUOTES,ST_BACKQUOTE,INITIAL,ST_IN_SCRIPTING,ST_LOOKING_FOR_PROPERTY><<EOF>> {
	return 0;
}

<ST_COMMENT,ST_DOC_COMMENT><<EOF>> {
	printf("Unterminated comment starting line %d", comment_start_line);
	return 0;
}

<ST_IN_SCRIPTING,INITIAL,ST_DOUBLE_QUOTES,ST_BACKQUOTE,ST_SINGLE_QUOTE,ST_HEREDOC>{ANY_CHAR} {
	printf("Unexpected character in input:  '%c' (ASCII=%d) state=%d", yytext[0], yytext[0], YYSTATE);
}
