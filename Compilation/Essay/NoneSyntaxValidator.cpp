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
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(L"Indexless chain`s current syntax tree.");
  }

  return move(result);
}

CError CNoneSyntaxValidator::Validate(C_ASSIGN_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (syntax.GetVariableID() == NONE_ID)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(L"Indexless variable reference syntax tree when assiging varible.");
  }

  if (syntax.GetValueID() == NONE_ID)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(L"Indexless variable value syntax tree when assiging varible.");
  }

  return move(result);
}
