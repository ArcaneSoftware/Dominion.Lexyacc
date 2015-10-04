//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Variable.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//********************************************************************************************************************//
//CVariable
//********************************************************************************************************************//
CVariable::CVariable() :
  _isArgument(false),
  _initialValueIndex(NONE_INDEX),
  _realValueIndex(NONE_INDEX)
{
}

CVariable::CVariable(C_VARIABLE& that) :
  CObject(that),
  _name(that._name),
  _initialValueIndex(that._initialValueIndex),
  _realValueIndex(that._realValueIndex),
  _isArgument(that._isArgument)
{
}

CVariable::CVariable(C_VARIABLE&& that) :
  CObject(that),
  _name(move(that._name)),
  _initialValueIndex(move(that._initialValueIndex)),
  _realValueIndex(move(that._realValueIndex)),
  _isArgument(move(that._isArgument))
{
}

CVariable::CVariable(WSTRING& name, int32_t initialValueIndex, int32_t realValueIndex, bool isArgument) :
  _name(name),
  _initialValueIndex(initialValueIndex),
  _realValueIndex(realValueIndex),
  _isArgument(isArgument)
{
}

CVariable::~CVariable()
{
}

bool CVariable::IsNilValue() const
{
  return GetSuitedValueIndex() == NONE_INDEX;
}

int32_t CVariable::GetSuitedValueIndex() const
{
  return _realValueIndex == NONE_INDEX ? _initialValueIndex : _realValueIndex;
}

C_VARIABLE& CVariable::operator=(C_VARIABLE& that)
{
  CObject::operator=(that);

  _name = that._name;
  _initialValueIndex = that._initialValueIndex;
  _realValueIndex = that._realValueIndex;
  _isArgument = that._isArgument;

  return *this;
}
