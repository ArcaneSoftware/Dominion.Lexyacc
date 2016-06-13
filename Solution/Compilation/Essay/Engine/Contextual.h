//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/SyntaxType.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//********************************************************************************************************************//
//IContextual
//
//********************************************************************************************************************//
template<typename TESyntaxType>
struct LIBRARY_EXPORT IContextual
{
  virtual void DefineVariable(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t initialValueID) = 0;
  virtual void DefineFunction(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t parameterChainID, int32_t blockID) = 0;
  virtual bool HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const = 0;
  virtual bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name, EIdentifierType identifierType) const = 0;
  virtual bool ExistSyntax(int32_t syntaxID) const = 0;
  virtual shared_ptr<CAbstractSyntaxTree<TESyntaxType>> GetSyntax(int32_t id) const = 0;
  virtual int32_t AppendSyntax(CAbstractSyntaxTree<TESyntaxType>* syntax) = 0;
  virtual CVariable GetVariable(WSTRING& identifier) const = 0;
  virtual CVariable GetVariable(C_IDENTIFIER& identifier) const = 0;
  virtual bool SetVariableValue(WSTRING& identifier, int valueID) = 0;
  virtual bool SetVariableValue(C_IDENTIFIER& identifier, int valueID) = 0;
};

END_DOMINION_COMPILATION_ESSAY
