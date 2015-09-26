//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Productor.h"

using namespace Dominion;
using namespace Dominion::Syntax;
//*******************************************************************************************************************//
//CProductor
//*******************************************************************************************************************//
CProductor::CProductor() :
  _successed(false),
  _index(NONE_INDEX)
{
}

CProductor::CProductor(C_PRODUCTOR& that) :
  CObject(that),
  _successed(that._successed),
  _index(that._index)
{
}

CProductor::CProductor(C_PRODUCTOR&& that) :
  CObject(that),
  _successed(move(that._successed)),
  _index(move(that._index))
{
}

CProductor::CProductor(bool successed, int32_t index) :
  _successed(successed),
  _index(index)
{
}

CProductor::~CProductor()
{
}

C_PRODUCTOR& CProductor::operator=(C_PRODUCTOR& that)
{
  CObject::operator=(that);

  _successed = that._successed;
  _index = that._index;

  return *this;
}