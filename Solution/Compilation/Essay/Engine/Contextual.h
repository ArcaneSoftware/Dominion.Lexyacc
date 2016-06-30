//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/SyntaxType.h"
#include "Compilation/Essay/Engine/Function.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//IContextual
//
//***********************************************************************************************************************************************************************************//
template<typename TESyntaxType, typename TSyntax>
struct LIBRARY_EXPORT IContextual
{
  virtual void DefineVariable(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t initialValueID) = 0;
  virtual void DefineFunction(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t parameterChainID, int32_t blockID) = 0;
  virtual bool HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const = 0;
  virtual bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name, EIdentifierType identifierType) const = 0;
  virtual bool ExistSyntax(int32_t syntaxID) const = 0;
  virtual shared_ptr<TSyntax> GetSyntax(int32_t id) const = 0;
  virtual int32_t AppendSyntax(TSyntax* syntax) = 0;
  virtual CVariable GetVariable(WSTRING& identifier) const = 0;
  virtual CFunction GetFunction(WSTRING& identifier) const = 0;
  
  virtual void AssignFunctionArgumentID(WSTRING& function, WSTRING& parameter, int32_t argumentID) = 0;

  virtual bool SetVariableValue(WSTRING& identifier, int valueID) = 0;
  virtual bool SetVariableValue(C_IDENTIFIER& identifier, int valueID) = 0;
};

END_DOMINION_COMPILATION_ESSAY
