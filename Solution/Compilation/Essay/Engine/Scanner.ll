%{
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Compilation/Essay/Engine/Scanner.h"

using namespace std;
using namespace Dominion::Compilation::Essay;
%}

%x C_STRING

%option c++
%option prefix = "CScanner"
%option debug
%option noyywrap
%option yylineno
%option outfile = "Scanner.ll.out"

%%

%{
	yylloc->step();
%}

"+"|"-"|"*"|"/"|"%"|"="|"!"|";"|"("|")"|"{"|"}"|"["|"]"|"@"|"#"|"$"|","|"." {
  return static_cast<YToken>(yytext[0]);
}

"==" {
  return YToken::Equal;
}
"!=" {
  return YToken::NotEqual;
}
"~~" {
  return YToken::Match;
}
"!~" {
  return YToken::NotMatch;
}
">" {
  return YToken::Greater;
}
">=" {
  return YToken::GreaterEqual;
}
"<" {
  return YToken::Less;
}
"<=" {
  return YToken::LessEqual;
}
"&&" {
  return YToken::And;
}
"||" {
  return YToken::Or;
}

"true" {
  yylval->boolean = true;

  return YToken::Boolean;
}
"false" {
  yylval->boolean = false;

  return YToken::Boolean;
}
"nil" {
  return YToken::Nil;
}

"public" {
  return YToken::Public;
}
"private" {
  return YToken::Private;
}
"var" {
  return YToken::Var;
}
"naming" {
	return YToken::Naming;
}
"if" {
  return YToken::If;
}
"else" {
  return YToken::Else;
}
"return" {
  return YToken::Return;
}

"function" {
  return YToken::Function;
}
"object" {
	return YToken::Object;
}

"\"" {
  BEGIN C_STRING;
}
<C_STRING>[^"\""]* {
  _text = WSTR(yytext);
}
<C_STRING>"\"" {
  yylval->litera = new wstring(_text);
  _text = NSTR;

  BEGIN INITIAL;

  return YToken::String;
}
<C_STRING>. {
  //todo throw;
  //throw CUnacceptableStringException(THIS_SCENE(L"Run"), yylineno, _string, WSTR(yytext));
}


[a-zA-Z_][a-zA-Z0-9_\.]* {
  yylval->litera = new wstring(WSTR(yytext));

  return YToken::Identifier;
}

[0-9]+ {
  yylval->integer = atoi(yytext);

  return YToken::Integer;
}

[0-9]+"."[0-9]* {
  yylval->decimal = atof(yytext);

  return YToken::Decimal;
}

[ \t\r]+ {
  yylloc->step();
}

\n {
  yylloc->lines(yyleng);
  yylloc->step();
}

. {
}

<<EOF>> {
  return YToken::_EOF_;
}

%%

#ifdef yylex
#undef yylex
#endif

int CScannerFlexLexer::yylex()
{
	std::cerr << "in CScannerFlexLexer::yylex() !" << std::endl;
	return 0;
}
