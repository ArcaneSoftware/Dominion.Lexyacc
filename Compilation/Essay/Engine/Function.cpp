//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Function.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//CFunction
//********************************************************************************************************************//
CFunction::CFunction() :
  _parameterChainID(NONE_ID),
  _blockID(NONE_ID)
{
}

CFunction::CFunction(C_FUNCTION& that) :
  CNamedReference(that),
  _parameterChainID(that._parameterChainID),
  _blockID(that._blockID)
{
}

CFunction::CFunction(C_FUNCTION&& that) :
  CNamedReference(that),
  _parameterChainID(move(that._parameterChainID)),
  _blockID(move(that._blockID))
{
}

CFunction::CFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID, int32_t blockID) :
  CNamedReference(access, identifier),
  _parameterChainID(parameterChainID),
  _blockID(blockID)
{
}

CFunction::~CFunction()
{
}

C_FUNCTION& CFunction::operator=(C_FUNCTION& that)
{
  CObject::operator=(that);

  _parameterChainID = that._parameterChainID;
  _blockID = that._blockID;

  return *this;
}
