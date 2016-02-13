//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/RawSyntax.h"
#include "Dominion/Compilation/Essay/Interoperation/GrammarEnum.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//DefineFunctionSyntax
//
//****************************************************************************************************//
public ref class DefineFunctionSyntax : public RawSyntax
{
public:
  DefineFunctionSyntax();
  ~DefineFunctionSyntax();
protected:
  !DefineFunctionSyntax();

public:
  property AccessTypeEnum AccessType
  {
    AccessTypeEnum get();
    void set(AccessTypeEnum value);
  }

  property String^ Name
  {
    String^ get();
    void set(String^ value);
  }

  property int ParameterChainID
  {
    int get();
    void set(int value);
  }

  property int32_t BlockID
  {
    int32_t get();
    void set(int32_t value);
  }

private:
  AccessTypeEnum _accessType;
  String^ _name;
  int32_t _parameterChainID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_ESSAY
