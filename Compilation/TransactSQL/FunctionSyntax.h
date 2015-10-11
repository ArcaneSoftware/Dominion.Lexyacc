//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//****************************************************************************************************************//
//CBlockSyntax
//
//****************************************************************************************************************//
CLASS_DECLARATION(CFunctionSyntax, C_FUNCTION_SYNTAX);
class LIBRARY_EXPORT CFunctionSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CFunctionSyntax);

  CFunctionSyntax();
  CFunctionSyntax(C_FUNCTION_SYNTAX& that);
  CFunctionSyntax(C_FUNCTION_SYNTAX&& that);
  CFunctionSyntax(int32_t liveLine, WSTRING& functionName, int32_t argumentChainID);
  virtual ~CFunctionSyntax();

  CLASS_PROPERTY(wstring, _functionName, FunctionName);
  CLASS_PROPERTY(int32_t, _argumentChainID, ArgumentChainID);

  C_FUNCTION_SYNTAX& operator=(C_FUNCTION_SYNTAX& that);

private:
  wstring _functionName;
  int32_t _argumentChainID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
