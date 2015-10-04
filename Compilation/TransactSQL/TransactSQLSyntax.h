//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/SyntaxEnum.h"

using namespace Dominion::Syntax;

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CTransactSQLSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CTransactSQLSyntax, C_CONCRETE_SYNTAX);
class LIBRARY_EXPORT CTransactSQLSyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntaxTree<ESyntaxType>, CTransactSQLSyntax);

  CTransactSQLSyntax();
  CTransactSQLSyntax(C_CONCRETE_SYNTAX& that);
  CTransactSQLSyntax(C_CONCRETE_SYNTAX&& that);
  explicit CTransactSQLSyntax(ESyntaxType syntaxType, int32_t livingLine = NIL_LINE);
  virtual ~CTransactSQLSyntax();

  CLASS_PROPERTY(bool, _inParenthesis, InParenthesis);

  C_CONCRETE_SYNTAX& operator=(C_CONCRETE_SYNTAX& that);

private:
  bool  _inParenthesis;
};

END_DOMINION_COMPILATION_TRANSACTSQL
