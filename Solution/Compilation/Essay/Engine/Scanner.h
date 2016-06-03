//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Dependence.h"

#ifndef PARSER_HEADER_H
  #include "Compilation/Essay/Engine/Parser.yy.h"
#endif

BEGIN_DOMINION_COMPILATION_ESSAY
typedef Dominion::Compilation::Essay::CParser::token_type YToken;
typedef Dominion::Compilation::Essay::CParser::semantic_type YSemantic;
typedef Dominion::Compilation::Essay::CParser::location_type YLocation;
END_DOMINION_COMPILATION_ESSAY

#ifndef YY_DECL
  #define	YY_DECL YToken Dominion::Compilation::Essay::CScanner::Run(YSemantic* yylval, YLocation* yylloc)
#endif

#ifndef __FLEX_LEXER_H
  #define yyFlexLexer CScannerFlexLexer
  #include "FlexLexer.h"
  #undef yyFlexLexer
#endif

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CScanner
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CScanner, C_SCANNER);
class LIBRARY_EXPORT CScanner : public CScannerFlexLexer, public CObject
{
public:
  CLASS_INHERITOR(CObject, CScanner);

  CScanner(istream* yyIn = 0, ostream* yyOut = 0);
  virtual ~CScanner();

protected:
  void Rollback(char* text);
  void Rollback(const char* text);
  void RollbackLast();
  wstring TrimBlank(WSTRING& text);
  wstring TrimBlank(char* text);
  void KeywordAmbiguity(WSTRING& text, int keywordToken);

public:
  virtual CParser::token_type Run(YSemantic* yylval, YLocation* yylloc);
  //
  int32_t Line() const;

protected:
  wstring _text;
  int32_t _keywordToken;
};

END_DOMINION_COMPILATION_ESSAY
