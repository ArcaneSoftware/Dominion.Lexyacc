//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "NoneIndexSyntaxValidator.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CNoneIndexSyntaxValidator
//*******************************************************************************************************************//
CNoneIndexSyntaxValidator::CNoneIndexSyntaxValidator()
{
}

CNoneIndexSyntaxValidator::CNoneIndexSyntaxValidator(C_NONE_INDEX_SYNTAX_VALIDATOR& that) :
  CObject(that)
{
}

CNoneIndexSyntaxValidator::CNoneIndexSyntaxValidator(C_NONE_INDEX_SYNTAX_VALIDATOR&& that) :
  CObject(that)
{
}

CNoneIndexSyntaxValidator::~CNoneIndexSyntaxValidator()
{
}

CError CNoneIndexSyntaxValidator::Validate(C_CHAIN_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (syntax.GetCurrentIndex() == NONE_INDEX)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(L"Indexless syntax of chain`s current.");
  }

  return move(result);
}
