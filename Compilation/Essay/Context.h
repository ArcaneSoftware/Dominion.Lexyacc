//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Dependence.h"
#include "Dominion/Compilation/Essay/SyntaxEnum.h"
#include "Dominion/Compilation/Essay/Function.h"

BEGIN_DOMINION_COMPILATION_ESSAY
typedef function<wstring(WSTRING&)> FToEssayKey;
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
  CContext(FToEssayKey ToEssayKey);
  virtual ~CContext();

  FToEssayKey ToKey();

  void DefineVariable(C_NAMESPACE& liveNamespace, WSTRING& name, int32_t initialValueID);
  void DefineFunction(C_NAMESPACE& liveNamespace, WSTRING& name, int32_t parameterChainID, int32_t blockID);

  bool HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const;
  bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name, EIdentifierType identifierType) const;

  bool ExistSyntax(int32_t syntaxID) const;
  shared_ptr<CEssaySyntax> GetSyntax(int32_t id) const;
  int32_t AppendSyntax(CEssaySyntax* syntax);

  CLASS_PROPERTY(map<wstring _COMMA CVariable>, _variableMap, VariableMap);
  CLASS_PROPERTY(map<wstring _COMMA CFunction>, _functionMap, FunctionMap);
  CLASS_PROPERTY(vector<shared_ptr<CEssaySyntax>>, _syntaxVector, SyntaxVector);
  CLASS_PROPERTY(int32_t, _entryID, EntryID);

public:
  C_CONTEXT& operator=(C_CONTEXT& that);

private:
  map<wstring, CVariable> _variableMap;
  map<wstring, CFunction> _functionMap;
  vector<shared_ptr<CEssaySyntax>> _syntaxVector;
  int32_t _entryID;
  FToEssayKey _ToKey;
};

END_DOMINION_COMPILATION_ESSAY
