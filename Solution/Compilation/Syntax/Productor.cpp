//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Productor.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//*******************************************************************************************************************//
//CProductor
//*******************************************************************************************************************//
CProductor::CProductor() :
  _successed(false),
  _id(NONE_ID)
{
}

CProductor::CProductor(C_PRODUCTOR& that) :
  CObject(that),
  _successed(that._successed),
  _id(that._id)
{
}

CProductor::CProductor(C_PRODUCTOR&& that) :
  CObject(that),
  _successed(move(that._successed)),
  _id(move(that._id))
{
}

CProductor::CProductor(bool successed, int32_t id) :
  _successed(successed),
  _id(id)
{
}

CProductor::~CProductor()
{
}

C_PRODUCTOR& CProductor::operator=(C_PRODUCTOR& that)
{
  CObject::operator=(that);

  _successed = that._successed;
  _id = that._id;

  return *this;
}
