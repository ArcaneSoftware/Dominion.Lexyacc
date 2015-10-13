//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Variable.h"

using namespace Dominion::Compilation::Syntax;
//********************************************************************************************************************//
//CVariable
//********************************************************************************************************************//
CVariable::CVariable() :
  _initialValueID(NONE_ID),
  _realValueID(NONE_ID),
  _isArgument(false)
{
}

CVariable::CVariable(C_VARIABLE& that) :
  CNamedReference(that),
  _initialValueID(that._initialValueID),
  _realValueID(that._realValueID),
  _isArgument(that._isArgument)
{
}

CVariable::CVariable(C_VARIABLE&& that) :
  CNamedReference(that),
  _initialValueID(move(that._initialValueID)),
  _realValueID(move(that._realValueID)),
  _isArgument(move(that._isArgument))
{
}

CVariable::CVariable(EAccessType access,
                     C_IDENTIFIER& identifier,
                     int32_t initialValueID,
                     int32_t realValueID,
                     bool isArgument) :
  CNamedReference(access, identifier),
  _initialValueID(initialValueID),
  _realValueID(realValueID),
  _isArgument(isArgument)
{
}

CVariable::~CVariable()
{
}

bool CVariable::IsNilValue() const
{
  return GetSuitedValueIndex() == NONE_ID;
}

int32_t CVariable::GetSuitedValueIndex() const
{
  return _realValueID == NONE_ID ? _initialValueID : _realValueID;
}

C_VARIABLE& CVariable::operator=(C_VARIABLE& that)
{
  CNamedReference::operator=(that);

  _initialValueID = that._initialValueID;
  _realValueID = that._realValueID;
  _isArgument = that._isArgument;

  return *this;
}
