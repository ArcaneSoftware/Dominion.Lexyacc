//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ReturnSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CReturnSyntax
//*******************************************************************************************************************//
CReturnSyntax::CReturnSyntax() :
  CEssaySyntax(ESyntaxType::Return),
  _expressionID(NONE_ID)
{
}

CReturnSyntax::CReturnSyntax(C_RETURN_SYNTAX& that) :
  CEssaySyntax(that),
  _expressionID(that._expressionID)
{
}

CReturnSyntax::CReturnSyntax(C_RETURN_SYNTAX&& that) :
  CEssaySyntax(that),
  _expressionID(move(that._expressionID))
{
}

CReturnSyntax::CReturnSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t expressionID) :
  CEssaySyntax(ESyntaxType::DefineVariable, liveLine, liveNamespace),
  _expressionID(expressionID)
{
}

CReturnSyntax::~CReturnSyntax()
{
}

C_RETURN_SYNTAX& CReturnSyntax::operator=(C_RETURN_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _expressionID = that._expressionID;

  return *this;
}