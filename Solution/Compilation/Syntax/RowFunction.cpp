//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "RowFunction.h"

using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CRowFunction
//***********************************************************************************************************************************************************************************//
CRowFunction::CRowFunction() :
  _parameterChainID(NONE_ID),
  _blockID(NONE_ID)
{
}

CRowFunction::CRowFunction(C_ROW_FUNCTION& that) :
  CNamedReference(that),
  _parameterChainID(that._parameterChainID),
  _blockID(that._blockID)
{
}

CRowFunction::CRowFunction(C_ROW_FUNCTION&& that) :
  CNamedReference(that),
  _parameterChainID(move(that._parameterChainID)),
  _blockID(move(that._blockID))
{
}

CRowFunction::CRowFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID, int32_t blockID) :
  CNamedReference(access, identifier),
  _parameterChainID(parameterChainID),
  _blockID(blockID)
{
}

CRowFunction::~CRowFunction()
{
}

C_ROW_FUNCTION& CRowFunction::operator=(C_ROW_FUNCTION& that)
{
  CObject::operator=(that);

  _parameterChainID = that._parameterChainID;
  _blockID = that._blockID;

  return *this;
}

C_ROW_FUNCTION& CRowFunction::operator=(C_ROW_FUNCTION && that)
{
  CNamedReference::operator=(that);

  _parameterChainID = move(that._parameterChainID);
  _blockID = move(that._blockID);

  return *this;
}
