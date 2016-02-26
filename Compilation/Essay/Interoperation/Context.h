//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"
#include "Dominion/Compilation/Essay/Interoperation/RawSyntax.h"

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
  RawSyntax^ Build(CEssaySyntax* syntax);

public:
  property int SyntaxAmount
  {
    int get();
  }

public:
  bool ExistSyntax(int32_t index);
  bool HasDefinedIdentifier(String^ fullName, IdentifierTypeEnum identifierType);
  bool HasDefinedIdentifier(Namespace^ liveNamespace, String^ name, IdentifierTypeEnum identifierType);
  RawSyntax^ GetSyntax(int32_t index);

  property int32_t EntryIndex
  {
    int32_t get() override;
  }

private:
  CContext* _context;
};

END_DOMINION_COMPILATION_ESSAY
