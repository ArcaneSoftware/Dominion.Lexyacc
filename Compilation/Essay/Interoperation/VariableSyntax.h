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
//VariableSyntax
//
//****************************************************************************************************//
public ref class VariableSyntax : public AbstractSyntaxTree
{
public:
  VariableSyntax();
  ~VariableSyntax();
protected:
  !VariableSyntax();

public:
  property String^ Name
  {
    String^ get();
    void set(String^ value);
  }

private:
  String^ _name;
};

END_DOMINION_COMPILATION_ESSAY
