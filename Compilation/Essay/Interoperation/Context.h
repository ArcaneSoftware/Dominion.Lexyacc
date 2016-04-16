//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/AbstractSyntaxTree.h"
#include "Dominion/Compilation/Essay/Interoperation/Variable.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//Context
//
//*****************************************************************************************************************//
public ref class Context
{
protected:
  Context();
public:
  Context(CContext* context);
  ~Context();
protected:
  !Context();

protected:
  AbstractSyntaxTree^ Build(CAbstractSyntaxTree<ESyntaxType>* syntax);

public:
  property int SyntaxAmount
  {
    int get();
  }

public:
  bool ExistSyntax(int32_t index);
  bool HasDefinedIdentifier(String^ fullName, IdentifierTypeEnum identifierType);
  bool HasDefinedIdentifier(Namespace^ liveNamespace, String^ name, IdentifierTypeEnum identifierType);
  AbstractSyntaxTree^ GetSyntax(int32_t index);
  Variable^ GetVariable(String^ identifier);
  Variable^ GetVariable(Identifier^ identifier);
  void SetVariableValue(String^ identifier, int32_t valueID);
  void SetVariableValue(Identifier^ identifier, int32_t valueID);

  property int32_t EntryIndex
  {
    int32_t get() override;
  }

private:
  CContext* _context;
};

END_DOMINION_COMPILATION_ESSAY
