%{
//#include "public.h"
//#include "scanner.h"
//#include "parser.hpp"
//#include "utils.h"
//#include <cstdio>
#include <y.tab.h>
#include <iostream>
#include <string>
using namespace std;

int linenum;
FILE *source;
FILE *listing;
string currentToken;

int traceScan = TRUE;
string curLine;
string space(" ");

%}

digit [0-9]
integer {digit}+
real {integer}[\.]{integer}
letter [a-zA-Z]
char \'[.]\'
string \"[^"]*\"
id ({letter}|_)+({letter}|_|{digit})*
newline \n
whitespace [" "]+
tab [\t]+
//name ({letter}|_)+({letter}|_|{digit})+

%%
"+" { return PLUS;}
"-" { return MINUS;}
"*" { return MUL;}
"%" { return MOD;}
"/" { return DIV;}
"." { return DOT;}
"," { return COMMA;}
";" { return SEMI;}

"=" { return ASSIGN;}
"==" { return EQ;}
"!=" { return UNEQ;}
">" { return GT;}
">=" { return GE;}
">" { return LT;}
"<=" { return LE;}
"(" { return LP;}
")" { return RP;}
"[" { return RB;}
"]" { return RB;}
"&&" { return AND;}
"||" { return OR;}

"const" { return CONST;}
"static" { return STATIC;}
"do" { return DO;}
"while" { return WHILE;}
"for" { return FOR;}
"switch"{ return SWITCH;}
"case" { return CASE;}
"default" { return DEFAULT;}
"if" { return IF;}
"else" { return ELSE;}
"break" { return BREAK;}
"continue"{ return CONTINUE;}
"goto" { return GOTO;}
"return" { return RETURN;}
"void" { return VOID;}
"int"	 {return SYS_TYPE;} 
"double" {return SYS_TYPE;}
"float" {return SYS_TYPE;}
"char"  {return SYS_TYPE;}

{real} { return REAL;}
{integer}{return INTEGER;} 
{char} { return CHAR;}
{integer} {
	TreeNode *t = new TreeNode(yytext);
	yylval = t;
	return INTEGER;
}
{string} { return STRING;}
{newline} {linenum++;
curLine = space;}
{whitespace} {}
{tab} {}
{id} {
	TreeNode *t = new TreeNode(yytext);
	yylval = t;
	return ID;
}

%%

int getToken(void) {
	static int firstIn = TRUE;
	int curToken;
	
	if (firstIn) {
		firstIn = FALSE;
		yyin = source;
		yyout = listing;
		linenum++;
	}
	curToken = yylex();
	currentToken = yytext;
	curLine = curLine + yytext;
	if (traceScan) {
		fprintf(listing, "\t%d %s\n", linenum, yytext);
		fflush(listing);
	}	
	return curToken;
}

int yywrap()
{
	return 1;
}













