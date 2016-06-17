//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Dependence.h"
#include "Compilation/Essay/Engine/Contextual.h"
#include "Compilation/Essay/Engine/ReducibleSyntax.h"

BEGIN_DOMINION_COMPILATION_ESSAY
typedef function<wstring(WSTRING&)> FToContextKey;
//***********************************************************************************************************************************************************************************//
//CContext
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CContext, C_CONTEXT);
class LIBRARY_EXPORT CContext : public CObject,
  public IContextual<ESyntaxType, CReducibleSyntax>
{
public:
  static wstring DEFAULT_TO_KEY(WSTRING& input);

public:
  CLASS_INHERITOR(CObject, CContext);

public:
  CContext();
  CContext(FToContextKey ToKey);
  CContext(C_CONTEXT& that);
  CContext(C_CONTEXT&& that);
  virtual ~CContext();

public:
  virtual void DefineVariable(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t initialValueID) override;
  virtual void DefineFunction(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t parameterChainID, int32_t blockID) override;
  virtual bool HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const;
  virtual bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name, EIdentifierType identifierType) const;
  virtual bool ExistSyntax(int32_t syntaxID) const override;
  virtual shared_ptr<CReducibleSyntax> GetSyntax(int32_t id) const override;
  virtual int32_t AppendSyntax(CReducibleSyntax* syntax) override;
  virtual CVariable GetVariable(WSTRING& identifier) const override;
  virtual CVariable GetVariable(C_IDENTIFIER& identifier) const override;
  virtual CFunction GetFunction(WSTRING& identifier) const override;
  virtual CFunction GetFunction(C_IDENTIFIER& identifier) const override;
  virtual bool SetVariableValue(WSTRING& identifier, int valueID) override;
  virtual bool SetVariableValue(C_IDENTIFIER& identifier, int valueID) override;

public:
  CLASS_PROPERTY(map<wstring _COMMA CVariable>, _variableMap, VariableMap);
  CLASS_PROPERTY(map<wstring _COMMA CFunction>, _functionMap, FunctionMap);
  CLASS_PROPERTY(vector<shared_ptr<CReducibleSyntax>>, _syntaxes, Syntaxes);
  CLASS_PROPERTY(int32_t, _entryID, EntryID);

  FToContextKey ToKey();

public:
  C_CONTEXT& operator=(C_CONTEXT& that);
  C_CONTEXT& operator=(C_CONTEXT&& that);

private:
  map<wstring, CVariable> _variableMap;
  map<wstring, CFunction> _functionMap;
  vector<shared_ptr<CReducibleSyntax>> _syntaxes;
  FToContextKey _ToKey;
  int32_t _entryID;
};

END_DOMINION_COMPILATION_ESSAY
