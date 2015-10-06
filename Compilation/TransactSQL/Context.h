//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Dependence.h"
#include "Dominion/Compilation/TransactSQL/ASTEnum.h"
#include "Dominion/Compilation/TransactSQL/SQLVariable.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
typedef function<wstring(WSTRING&)> FToVariableKey;
//*****************************************************************************************************************//
//CContext
//
//*****************************************************************************************************************//
class CTransactSQLSyntax;
CLASS_DECLARATION(CContext, C_CONTEXT);
class LIBRARY_EXPORT CContext : public CObject
{
public:
  CLASS_INHERITOR(CObject, CContext);

  CContext();
  CContext(C_CONTEXT& that);
  CContext(C_CONTEXT&& that);
  CContext(FToVariableKey ToVariableKey);
  virtual ~CContext();

  FToVariableKey ToVariableKey();
  void DefineLocalVariable(WSTRING& name, int32_t initialValue);
  bool ExistSyntax(int32_t index) const;
  bool DefinedLocalVariable(WSTRING& name) const;
  shared_ptr<CTransactSQLSyntax> GetSyntax(int32_t syntaxID) const;
  int32_t AppendAST(CTransactSQLSyntax* ast);

  CLASS_PROPERTY(map<wstring _COMMA CSQLVariable>, _definedVariableMap, DefinedVariableMap);
  CLASS_PROPERTY(vector<shared_ptr<CTransactSQLSyntax>>, _syntaxVector, SyntaxVector);
  CLASS_PROPERTY(int32_t, _entryID, EntryID);

public:
  C_CONTEXT& operator=(C_CONTEXT& that);

private:
  map<wstring, CSQLVariable> _definedVariableMap;
  vector<shared_ptr<CTransactSQLSyntax>> _syntaxVector;
  int32_t _entryID;
  FToVariableKey _ToVariableKey;
};

END_DOMINION_COMPILATION_TRANSACTSQL
