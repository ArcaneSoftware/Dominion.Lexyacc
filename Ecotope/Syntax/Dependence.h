//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Ecotope/Native/Base.h"
#include "Dominion/Ecotope/Native/Failure.h"
#include "Dominion/Ecotope/Native/Types.h"

#undef  DOMINION_SYNTAX
#define DOMINION_SYNTAX Dominion{namespace Syntax

#define BEGIN_DOMINION_SYNTAX namespace Dominion{namespace Syntax{
#define END_DOMINION_SYNTAX }}

BEGIN_DOMINION_SYNTAX
enum {
  NONE_INDEX = -1,
  NIL_LINE = 0
};
END_DOMINION_SYNTAX

using namespace Dominion;