//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Bool.h"
#include "Atom.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CBool
//***********************************************************************************************************************************************************************************//
CBool::CBool() :
  _value(false)
{
}

CBool::CBool(C_BOOL& that) :
  CObject(that),
  _value(that._value)
{
}

CBool::CBool(C_BOOL&& that) :
  CObject(that),
  _value(move(that._value))
{
}

CBool::CBool(bool value) :
  _value(value)
{
}

CBool::CBool(WSTRING& value) throw()
{
  wstring case_lower_value = SString::TO_LOWER(value);

  if (case_lower_value == L"true")
  {
    _value = true;
  }
  else if (case_lower_value == L"false")
  {
    _value = false;
  }
  else
  {
    //TODO: Throw exception
  }
}

CBool::~CBool()
{
}

wstring CBool::ToString() const
{
  return _value ? SString::TRUE_TEXT() : SString::FALSE_TEXT();
}

C_BOOL& CBool::operator=(C_BOOL& that)
{
  CObject::operator=(that);

  _value = that._value;

  return *this;
}

C_BOOL& CBool::operator=(C_BOOL&& that)
{
  CObject::operator=(that);

  _value = move(that._value);

  return *this;
}

C_BOOL& CBool::operator=(bool that)
{
  _value = that;

  return *this;
}

bool CBool::operator==(C_BOOL& that)
{
  return _value == that._value;
}

bool CBool::operator==(bool that)
{
  return _value == that;
}

bool CBool::operator!=(C_BOOL& that)
{
  return !operator==(that);
}

bool CBool::operator!=(bool that)
{
  return !operator==(that);
}
