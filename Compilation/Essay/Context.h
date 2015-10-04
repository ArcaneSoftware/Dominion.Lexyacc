//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Dependence.h"
#include "Dominion/Compilation/Essay/SyntaxEnum.h"

BEGIN_DOMINION_COMPILATION_ESSAY
typedef function<wstring(WSTRING&)> FToVariableKey;
//*****************************************************************************************************************//
//CContext
//
//*****************************************************************************************************************//
class CEssaySyntax;
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
  void DefineVariable(WSTRING& name, int32_t initialValue);
  bool ExistSyntax(int32_t index) const;
  bool DefinedVariable(WSTRING& name) const;
  shared_ptr<CEssaySyntax> GetSyntax(int32_t syntaxIndex) const;
  int32_t AppendSyntax(CEssaySyntax* syntax);

  CLASS_PROPERTY(map<wstring _COMMA CVariable>, _definedVariableMap, DefinedVariableMap);
  CLASS_PROPERTY(vector<shared_ptr<CEssaySyntax>>, _syntaxVector, SyntaxVector);
  CLASS_PROPERTY(int32_t, _entryIndex, EntryIndex);

public:
  C_CONTEXT& operator=(C_CONTEXT& that);

private:
  map<wstring, CVariable> _definedVariableMap;
  vector<shared_ptr<CEssaySyntax>> _syntaxVector;
  int32_t _entryIndex;
  FToVariableKey _ToVariableKey;
};

END_DOMINION_COMPILATION_ESSAY
