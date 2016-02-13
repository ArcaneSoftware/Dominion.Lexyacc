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
//DefineVariableSyntax
//
//****************************************************************************************************//
public ref class DefineVariableSyntax : public RawSyntax
{
public:
  DefineVariableSyntax();
  ~DefineVariableSyntax();
protected:
  !DefineVariableSyntax();

public:
  property AccessTypeEnum AccessType
  {
    AccessTypeEnum get();
    void set(AccessTypeEnum value);
  }

  property VariableTypeEnum VariableType
  {
    VariableTypeEnum get();
    void set(VariableTypeEnum value);
  }

  property String^ Name
  {
    String^ get();
    void set(String^ value);
  }

  property int InitialValueID
  {
    int get();
    void set(int value);
  }

private:
  AccessTypeEnum _accessType;
  VariableTypeEnum _variableType;
  String^ _name;
  int32_t _initialValueID;
};

END_DOMINION_COMPILATION_ESSAY
