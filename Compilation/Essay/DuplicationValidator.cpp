//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "DuplicationValidator.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CUndefinedReferenceValidator
//*******************************************************************************************************************//
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

  if (context.HasDefinedVariable(syntax.GetNamespace(), syntax.GetName()))
  {
    auto description = CWStringTemplate(
                         L"Duplicated definition of local variable:[%x.%x]").Format(syntax.GetNamespace().ToString(), syntax.GetName());

    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(description);
  }

  return move(result);
}

C_DUPLICATION_VALIDATOR& CDuplicationValidator::operator=(C_DUPLICATION_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}