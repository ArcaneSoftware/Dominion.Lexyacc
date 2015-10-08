//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "VariableReference.h"
#include "MissSyntaxException.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CVariableReference
//*******************************************************************************************************************//
CVariableReference::CVariableReference() :
  _index(NONE_ID)
{
}

CVariableReference::CVariableReference(C_VARIABLE_REFERENCE& that) :
  CObject(that),
  _index(that._index)
{
}

CVariableReference::CVariableReference(C_VARIABLE_REFERENCE&& that) :
  CObject(that),
  _index(move(that._index))
{
}

CVariableReference::CVariableReference(int32_t referenceID) :
  _index(referenceID)
{
}

CVariableReference::~CVariableReference()
{
}

wstring CVariableReference::GetName(C_CONTEXT& context) const throw()
{
  CMissSyntaxException::CHECK(_index,
                              context,
                              CTroublespot(THIS_SCENE(L"GetName"),
                                           NSTR,
                                           CMissSyntaxException::MAKE_NOTE(_index),
                                           NSTR));

  return context.GetSyntax(_index)->Naming();
}

C_VARIABLE_REFERENCE& CVariableReference::operator=(C_VARIABLE_REFERENCE& that)
{
  CObject::operator=(that);

  _index = that._index;

  return *this;
}
