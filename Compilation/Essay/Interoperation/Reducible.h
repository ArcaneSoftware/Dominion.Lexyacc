#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//IReducible
//
//****************************************************************************************************//
generic<typename TOutput, typename TContext>
public interface class IReducible
{
  TOutput Reduce(TContext context);
};

END_DOMINION_COMPILATION_ESSAY
