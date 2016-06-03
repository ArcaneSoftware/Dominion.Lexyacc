//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Error.h"

BEGIN_DOMINION_COMPILATION_SYNTAX

template<typename TSyntax, typename TContext>
struct LIBRARY_EXPORT IValidateProduction
{
  virtual CError Validate(const TSyntax& ast, const TContext& context) const = 0;
};

END_DOMINION_COMPILATION_SYNTAX
