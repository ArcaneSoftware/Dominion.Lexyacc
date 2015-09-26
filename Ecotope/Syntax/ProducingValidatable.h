//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Ecotope/Syntax/Error.h"

BEGIN_DOMINION_SYNTAX

template<typename TSyntax, typename TContext>
struct LIBRARY_EXPORT IProducingValidatable
{
  virtual CError Validate(const TSyntax& syntax, const TContext& context) const = 0;
};

END_DOMINION_SYNTAX
