#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Scalar.h"
#include "Dominion/Compilation/Essay/Interoperation/BaseContext.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//IReducible
//
//****************************************************************************************************//
public interface class IReducible
{
  Scalar^ Reduce(IBaseContext^ context);
};

END_DOMINION_COMPILATION_ESSAY
