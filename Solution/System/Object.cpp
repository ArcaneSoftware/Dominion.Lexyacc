//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Object.h"

using namespace Dominion;

CObject::CObject()
{
}

CObject::CObject(C_OBJECT& that)
{
}

CObject::CObject(C_OBJECT&& that)
{
}

CObject::~CObject()
{
}

void CObject::Finalize()
{
}

wstring CObject::ThisName() const
{
  return move(CLASS_THIS_NAME);
}

wstring CObject::ToString() const
{
  return NSTR;
}

size_t CObject::Hash() const
{
  return typeid(*this).hash_code();
}

bool CObject::AnalogousTo(C_OBJECT& object) const
{
  return Hash() == object.Hash();
}

bool CObject::EqualTo(C_OBJECT& object) const
{
  return false;
}

void CObject::Clone(C_OBJECT& object)
{
}

C_OBJECT& CObject::operator=(C_OBJECT& that)
{
  return *this;
}

C_OBJECT& CObject::operator=(C_OBJECT && that)
{
  return *this;
}
