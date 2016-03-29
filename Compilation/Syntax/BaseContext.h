//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/AbstractSyntaxTree.h"
#include "Dominion/Compilation/Syntax/Variable.h"


BEGIN_DOMINION_COMPILATION_SYNTAX

template<typename TESyntaxType>
struct LIBRARY_EXPORT IBaseContext
{
  virtual void DefineVariable(EAccessType access,
                              C_NAMESPACE& liveNamespace,
                              WSTRING& name,
                              int32_t initialValueID) = 0;
  virtual void DefineFunction(EAccessType access,
                              C_NAMESPACE& liveNamespace,
                              WSTRING& name,
                              int32_t parameterChainID,
                              int32_t blockID) = 0;

  virtual bool HasDefinedIdentifier(WSTRING& fullName,
                                    EIdentifierType identifierType) const = 0;
  virtual bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace,
                                    WSTRING& name,
                                    EIdentifierType identifierType) const = 0;
  virtual bool ExistSyntax(int32_t syntaxID) const = 0;
  virtual shared_ptr<CAbstractSyntaxTree<TESyntaxType>> GetSyntax(int32_t id) const = 0;
  virtual int32_t AppendSyntax(CAbstractSyntaxTree<TESyntaxType>* syntax) = 0;
  virtual CVariable GetVariable(WSTRING& identifier) const = 0;
  virtual CVariable GetVariable(C_IDENTIFIER& identifier) const = 0;
};

END_DOMINION_COMPILATION_SYNTAX
