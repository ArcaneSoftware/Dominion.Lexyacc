//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "RowVariable.h"

using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CRowVariable
//***********************************************************************************************************************************************************************************//
CRowVariable::CRowVariable() :
  _initialValueID(NONE_ID),
  _realValueID(NONE_ID),
  _isArgument(false)
{
}

CRowVariable::CRowVariable(C_ROW_VARIABLE& that) :
  CNamedReference(that),
  _initialValueID(that._initialValueID),
  _realValueID(that._realValueID),
  _isArgument(that._isArgument)
{
}

CRowVariable::CRowVariable(C_ROW_VARIABLE&& that) :
  CNamedReference(that),
  _initialValueID(move(that._initialValueID)),
  _realValueID(move(that._realValueID)),
  _isArgument(move(that._isArgument))
{
}

CRowVariable::CRowVariable(EAccessType access, C_IDENTIFIER& identifier, int32_t initialValueID, int32_t realValueID, bool isArgument) :
  CNamedReference(access, identifier),
  _initialValueID(initialValueID),
  _realValueID(realValueID),
  _isArgument(isArgument)
{
}

CRowVariable::~CRowVariable()
{
}

bool CRowVariable::IsNilValue() const
{
  return GetSuitedValueIndex() == NONE_ID;
}

int32_t CRowVariable::GetSuitedValueIndex() const
{
  return _realValueID == NONE_ID ? _initialValueID : _realValueID;
}

C_ROW_VARIABLE& CRowVariable::operator=(C_ROW_VARIABLE& that)
{
  CNamedReference::operator=(that);

  _initialValueID = that._initialValueID;
  _realValueID = that._realValueID;
  _isArgument = that._isArgument;

  return *this;
}

C_ROW_VARIABLE& CRowVariable::operator=(C_ROW_VARIABLE && that)
{
  CNamedReference::operator=(that);

  _initialValueID = move(that._initialValueID);
  _realValueID = move(that._realValueID);
  _isArgument = move(that._isArgument);

  return *this;
}
