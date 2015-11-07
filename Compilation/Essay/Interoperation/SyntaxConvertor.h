//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"
#include "Dominion/Compilation/Essay/Interoperation/ASTs.h"

using namespace System;
using namespace System::IO;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//SyntaxBuilder
//
//****************************************************************************************************//
public ref class SyntaxConvertor
{
public:
  SyntaxConvertor();
  ~SyntaxConvertor();
protected:
  !SyntaxConvertor();

protected:
  template<typename TTarit>
  TTarit* Cast(CEssaySyntax* syntax)
  {
    TTarit* result = dynamic_cast<TTarit*>(syntax);

    return result;
  }

public:
  //Reference
  //Component
  ChainSyntax^ Chain(CEssaySyntax* source);
  //Statement
};

END_DOMINION_COMPILATION_ESSAY