//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Base.h"
#include "Dominion/Native/System/Failure.h"
#include "Dominion/Native/System/Types.h"

#undef  BEGIN_DOMINION_COMPILATION_SYNTAX

#define BEGIN_DOMINION_COMPILATION_SYNTAX namespace Dominion{namespace Compilation{namespace Syntax{
#define END_DOMINION_COMPILATION_SYNTAX }}}

BEGIN_DOMINION_COMPILATION_SYNTAX
enum
{
  NONE_ID = -1,
  NIL_LINE = 0
};
END_DOMINION_COMPILATION_SYNTAX

using namespace Dominion;