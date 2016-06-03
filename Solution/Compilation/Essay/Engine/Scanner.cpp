//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Scanner.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CScanner
//*******************************************************************************************************************//
CScanner::CScanner(istream* yyIn, ostream* yyOut) :
  CScannerFlexLexer(yyIn, yyOut),
  _keywordToken(-1)
{
}

CScanner::~CScanner()
{
}

void CScanner::Rollback(char* text)
{
  for (int i = yyleng - 1; i >= 0; i--)
  {
    yyunput(text[i], yytext);
  }
}

void CScanner::Rollback(const char* text)
{
  for (int i = yyleng - 1; i >= 0; i--)
  {
    yyunput(text[i], yytext);
  }
}

void CScanner::RollbackLast()
{
  yyunput(yytext[yyleng - 1], yytext);
}

wstring CScanner::TrimBlank(WSTRING& text)
{
  return SString::TRIM_IN(text, wstring(L" \t\r\n"));
}

wstring CScanner::TrimBlank(char* text)
{
  return SString::TRIM_IN(WSTR(text), L" \t\r\n");
}

void CScanner::KeywordAmbiguity(WSTRING& text, int keywordToken)
{
  _text = WSTR(yytext);
  _keywordToken = keywordToken;
}

int32_t CScanner::Line() const
{
  return yylineno;
}
