//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "UndefinedReferenceValidator.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CUndefinedReferenceValidator
//*******************************************************************************************************************//
CUndefinedReferenceValidator::CUndefinedReferenceValidator()
{
}

CUndefinedReferenceValidator::CUndefinedReferenceValidator(C_UNDEFINED_REFERENCE_VALIDATOR& that) :
  CObject(that)
{
}

CUndefinedReferenceValidator::CUndefinedReferenceValidator(C_UNDEFINED_REFERENCE_VALIDATOR&& that) :
  CObject(that)
{
}

CUndefinedReferenceValidator::~CUndefinedReferenceValidator()
{
}

CError CUndefinedReferenceValidator::Validate(C_ASSIGN_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;
  auto variableIdentifier = CIdentifier(syntax.GetVariableName());
  CNamespace variableNamespace;
  wstring variableName;

  if (variableIdentifier.HasNamespace())
  {
    variableNamespace = variableIdentifier.GetNamespace();
    variableName = variableIdentifier.GetName();
  }
  else
  {
    variableNamespace = syntax.GetCurrentNamespace();
    variableName = syntax.GetVariableName();
  }

  if (!context.HasDefinedVariable(variableNamespace, variableName))
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(CWStringTemplate(L"Variable:[%x] has not been defined").Format(syntax.GetVariableName()));
  }

  return move(result);
}

C_UNDEFINED_REFERENCE_VALIDATOR& CUndefinedReferenceValidator::operator=(C_UNDEFINED_REFERENCE_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}
