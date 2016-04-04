//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/BaseContext.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//Context
//
//*****************************************************************************************************************//
public ref class Context : IBaseContext
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
  bool ExistSyntax(int32_t index) override;
  bool HasDefinedIdentifier(String^ fullName, IdentifierTypeEnum identifierType) override;
  bool HasDefinedIdentifier(Namespace^ liveNamespace, String^ name, IdentifierTypeEnum identifierType) override;
  AbstractSyntaxTree^ GetSyntax(int32_t index) override;
  Variable^ GetVariable(String^ identifier) override;
  Variable^ GetVariable(Identifier^ identifier) override;

  property int32_t EntryIndex
  {
    int32_t get() override;
  }

private:
  CContext* _context;
};

END_DOMINION_COMPILATION_ESSAY
