//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/GrammarEnum.h"
#include "Dominion/Compilation/TransactSQL/SQLVariable.h"
#include "Dominion/Compilation/TransactSQL/SyntaxEnum.h"
#include "Dominion/Compilation/TransactSQL/Context.h"
#include "Dominion/Compilation/TransactSQL/TransactSQLSyntax.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//ERangeKeyword
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT ERangeKeyword
{
  All,
  Some,
  Any
};

END_DOMINION_COMPILATION_TRANSACTSQL
