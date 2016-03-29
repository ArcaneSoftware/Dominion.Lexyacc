//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Engine/Dependence.h"
#include "Dominion/Compilation/Essay/Engine/SyntaxType.h"

BEGIN_DOMINION_COMPILATION_ESSAY
typedef function<wstring(WSTRING&)> FToEssayKey;
//*****************************************************************************************************************//
//CContext
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CContext, C_CONTEXT);
class LIBRARY_EXPORT CContext : public CObject, public IBaseContext<ESyntaxType>
{
public:
  static wstring DEFAULT_TO_KEY(WSTRING& input);

public:
  CLASS_INHERITOR(CObject, CContext);

  CContext();
  CContext(C_CONTEXT& that);
  CContext(C_CONTEXT&& that);
  CContext(FToEssayKey ToEssayKey);
  virtual ~CContext();

  FToEssayKey ToKey();

  virtual void DefineVariable(EAccessType access,
                              C_NAMESPACE& liveNamespace, WSTRING& name,
                              int32_t initialValueID) override;
  virtual void DefineFunction(EAccessType access,
                              C_NAMESPACE& liveNamespace,
                              WSTRING& name,
                              int32_t parameterChainID,
                              int32_t blockID) override;

  virtual bool HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const override;
  virtual bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace,
                                    WSTRING& name,
                                    EIdentifierType identifierType) const  override;

  virtual bool ExistSyntax(int32_t syntaxID) const override;
  virtual shared_ptr<CAbstractSyntaxTree<ESyntaxType>> GetSyntax(int32_t id) const override;
  virtual int32_t AppendSyntax(CAbstractSyntaxTree<ESyntaxType>* syntax) override;
  virtual CVariable GetVariable(WSTRING& identifier) const override;
  virtual CVariable GetVariable(C_IDENTIFIER& identifier) const override;

  CLASS_PROPERTY(map<wstring _COMMA CVariable>, _variableMap, VariableMap);
  CLASS_PROPERTY(map<wstring _COMMA CFunction>, _functionMap, FunctionMap);
  CLASS_PROPERTY(vector<shared_ptr<CAbstractSyntaxTree<ESyntaxType>>>, _syntaxes, Syntaxes);
  CLASS_PROPERTY(int32_t, _entryID, EntryID);

public:
  C_CONTEXT& operator=(C_CONTEXT& that);

private:
  map<wstring, CVariable> _variableMap;
  map<wstring, CFunction> _functionMap;
  vector<shared_ptr<CAbstractSyntaxTree<ESyntaxType>>> _syntaxes;
  int32_t _entryID;
  FToEssayKey _ToKey;
};

END_DOMINION_COMPILATION_ESSAY
