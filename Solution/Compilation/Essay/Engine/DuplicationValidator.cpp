//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "DuplicationValidator.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CUndefinedReferenceValidator
//***********************************************************************************************************************************************************************************//
CDuplicationValidator::CDuplicationValidator()
{
}

CDuplicationValidator::CDuplicationValidator(C_DUPLICATION_VALIDATOR& that) :
  CObject(that)
{
}

CDuplicationValidator::CDuplicationValidator(C_DUPLICATION_VALIDATOR&& that) :
  CObject(that)
{
}

CDuplicationValidator::~CDuplicationValidator()
{
}

CError CDuplicationValidator::Validate(C_DEFINE_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (context.HasDefinedIdentifier(syntax.GetLiveNamespace(), syntax.GetName(), EIdentifierType::Variable))
  {
    auto description = CWStringTemplate(L"Duplicated definition of variable:'%x.%x'").Format(syntax.GetLiveNamespace().ToString(), syntax.GetName());

    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(description);
  }

  return move(result);
}

CError CDuplicationValidator::Validate(C_DEFINE_FUNCTION_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (context.HasDefinedIdentifier(syntax.GetLiveNamespace(), syntax.GetName(), EIdentifierType::Function))
  {
    auto description = CWStringTemplate(L"Duplicated definition of function:'%x.%x'").Format(
                         syntax.GetLiveNamespace().ToString(),
                         syntax.GetName());

    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(description);
  }

  return move(result);
}

C_DUPLICATION_VALIDATOR& CDuplicationValidator::operator=(C_DUPLICATION_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}

C_DUPLICATION_VALIDATOR& CDuplicationValidator::operator=(C_DUPLICATION_VALIDATOR&& that)
{
  CObject::operator=(that);

  return *this;
}
