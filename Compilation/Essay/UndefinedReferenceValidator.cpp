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

CError CUndefinedReferenceValidator::Validate(C_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;
  auto variableIdentifier = CIdentifier(syntax.GetName());
  CNamespace variableLiveNamespace;
  wstring variableName;

  if (variableIdentifier.HasNamespace())
  {
    variableLiveNamespace = variableIdentifier.GetLiveNamespace();
    variableName = variableIdentifier.GetName();
  }
  else
  {
    variableLiveNamespace = syntax.GetLiveNamespace();
    variableName = syntax.GetName();
  }

  if (!context.HasDefinedIdentifier(variableLiveNamespace, variableName, EIdentifierType::Variable))
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(CWStringTemplate(L"Variable:'%x' has not been defined").Format(syntax.GetName()));
  }

  return move(result);
}

C_UNDEFINED_REFERENCE_VALIDATOR& CUndefinedReferenceValidator::operator=(C_UNDEFINED_REFERENCE_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}
