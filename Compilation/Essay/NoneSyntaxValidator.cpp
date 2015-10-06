//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "NoneSyntaxValidator.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CNoneSyntaxValidator
//*******************************************************************************************************************//
CNoneSyntaxValidator::CNoneSyntaxValidator()
{
}

CNoneSyntaxValidator::CNoneSyntaxValidator(C_NONE_SYNTAX_VALIDATOR& that) :
  CObject(that)
{
}

CNoneSyntaxValidator::CNoneSyntaxValidator(C_NONE_SYNTAX_VALIDATOR&& that) :
  CObject(that)
{
}

CNoneSyntaxValidator::~CNoneSyntaxValidator()
{
}

CError CNoneSyntaxValidator::Validate(C_CHAIN_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (syntax.GetCurrentID() == NONE_ID)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(L"Indexless ast of chain`s current.");
  }

  return move(result);
}
