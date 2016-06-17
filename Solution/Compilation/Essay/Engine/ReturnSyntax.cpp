//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "ReturnSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CReturnSyntax
//***********************************************************************************************************************************************************************************//
CReturnSyntax::CReturnSyntax() :
  CReducibleSyntax(ESyntaxType::Return),
  _expressionID(NONE_ID)
{
}

CReturnSyntax::CReturnSyntax(C_RETURN_SYNTAX& that) :
  CReducibleSyntax(that),
  _expressionID(that._expressionID)
{
}

CReturnSyntax::CReturnSyntax(C_RETURN_SYNTAX&& that) :
  CReducibleSyntax(that),
  _expressionID(move(that._expressionID))
{
}

CReturnSyntax::CReturnSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t expressionID) :
  CReducibleSyntax(ESyntaxType::Return, liveLine, liveNamespace),
  _expressionID(expressionID)
{
}

CReturnSyntax::~CReturnSyntax()
{
}

CScalar CReturnSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  return context.GetSyntax(GetExpressionID())->Reduce(context);
}

C_RETURN_SYNTAX& CReturnSyntax::operator=(C_RETURN_SYNTAX& that)
{
  CReducibleSyntax::operator=(that);

  _expressionID = that._expressionID;

  return *this;
}

C_RETURN_SYNTAX& CReturnSyntax::operator=(C_RETURN_SYNTAX&& that)
{
  CReducibleSyntax::operator=(that);

  _expressionID = move(that._expressionID);

  return *this;
}
