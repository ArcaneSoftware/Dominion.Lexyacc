//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Function.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CFunction
//***********************************************************************************************************************************************************************************//
CFunction::CFunction()
{
}

CFunction::CFunction(C_FUNCTION& that) :
  CRowFunction(that),
  _parameters(that._parameters)
{
}

CFunction::CFunction(C_FUNCTION&& that) :
  CRowFunction(that),
  _parameters(move(that._parameters))
{
}

CFunction::CFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID, int32_t blockID) :
  CRowFunction(access, identifier, parameterChainID, blockID)
{
}

CFunction::~CFunction()
{
}

C_FUNCTION& CFunction::operator=(C_FUNCTION& that)
{
  CRowFunction::operator=(that);

  _parameters = that._parameters;

  return *this;
}
