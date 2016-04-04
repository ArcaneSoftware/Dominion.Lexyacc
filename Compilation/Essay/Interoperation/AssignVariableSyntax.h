//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/AbstractSyntaxTree.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//AssignVariableSyntax
//
//****************************************************************************************************//
public ref class AssignVariableSyntax : public AbstractSyntaxTree
{
public:
  AssignVariableSyntax();
  ~AssignVariableSyntax();
protected:
  !AssignVariableSyntax();

public:
  property int VariableID
  {
    int get();
    void set(int value);
  }

  property int32_t ValueID
  {
    int32_t get();
    void set(int32_t value);
  }

private:
  int32_t _variableID;
  int32_t _valueID;
};

END_DOMINION_COMPILATION_ESSAY
