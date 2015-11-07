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
  bool ExistSyntax(int32_t index) override;
  bool DefinedVariable(String^ name) override;
  RawSyntax^ GetSyntax(int32_t index) override;
  property int32_t EntryIndex
  {
    int32_t get() override;
  }

private:
  CContext* _context;
};

END_DOMINION_COMPILATION_ESSAY
