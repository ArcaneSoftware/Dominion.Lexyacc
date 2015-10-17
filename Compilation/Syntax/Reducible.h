//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Scalar.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//IReducible
//
//*****************************************************************************************************************//
template<typename TSyntax, typename TContext, typename TResult>
struct LIBRARY_EXPORT IReducible
{
  virtual TResult Reduce(const TSyntax* syntax, const TContext& contex) = 0;
};

END_DOMINION_COMPILATION_SYNTAX
