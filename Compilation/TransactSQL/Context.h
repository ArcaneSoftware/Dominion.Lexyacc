//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Dependence.h"
#include "Dominion/Compilation/TransactSQL/SyntaxEnum.h"
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
  shared_ptr<CTransactSQLSyntax> GetSyntax(int32_t syntaxIndex) const;
  int32_t AppendSyntax(CTransactSQLSyntax* syntax);

  CLASS_PROPERTY(map<wstring _COMMA CSQLVariable>, _definedVariableMap, DefinedVariableMap);
  CLASS_PROPERTY(vector<shared_ptr<CTransactSQLSyntax>>, _syntaxVector, SyntaxVector);
  CLASS_PROPERTY(int32_t, _entryIndex, EntryIndex);

public:
  C_CONTEXT& operator=(C_CONTEXT& that);

private:
  map<wstring, CSQLVariable> _definedVariableMap;
  vector<shared_ptr<CTransactSQLSyntax>> _syntaxVector;
  int32_t _entryIndex;
  FToVariableKey _ToVariableKey;
};

END_DOMINION_COMPILATION_TRANSACTSQL
