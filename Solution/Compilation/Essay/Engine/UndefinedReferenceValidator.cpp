//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "UndefinedReferenceValidator.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CUndefinedReferenceValidator
//***********************************************************************************************************************************************************************************//
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

bool CUndefinedReferenceValidator::ValidateReference(C_NAMESPACE& referenceLiveNamespace, WSTRING& referenceName, EIdentifierType referenceIdentifierType, C_CONTEXT& context) const
{
  auto referenceIdentifier = CIdentifier(referenceName);
  CNamespace syntaxLiveNamespace;
  wstring syntaxName;

  if (referenceIdentifier.HasNamespace())
  {
    syntaxLiveNamespace = referenceIdentifier.GetLiveNamespace();
    syntaxName = referenceIdentifier.GetName();
  }
  else
  {
    syntaxLiveNamespace = referenceLiveNamespace;
    syntaxName = referenceName;
  }

  return context.HasDefinedIdentifier(syntaxLiveNamespace, syntaxName, referenceIdentifierType);

}

CError CUndefinedReferenceValidator::Validate(C_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (!ValidateReference(syntax.GetLiveNamespace(), syntax.GetName(), EIdentifierType::Variable, context))
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(CWStringTemplate(L"Varibel:'%x' has not been defined").Format(syntax.GetName()));
  }

  return move(result);
}

CError CUndefinedReferenceValidator::Validate(C_FUNCTION_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (!ValidateReference(syntax.GetLiveNamespace(), syntax.GetName(), EIdentifierType::Function, context))
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLiveLine(syntax.GetLiveLine());
    result.SetDescription(CWStringTemplate(L"Funtion:'%x' has not been defined").Format(syntax.GetName()));
  }

  return move(result);
}

C_UNDEFINED_REFERENCE_VALIDATOR& CUndefinedReferenceValidator::operator=(C_UNDEFINED_REFERENCE_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}

C_UNDEFINED_REFERENCE_VALIDATOR& CUndefinedReferenceValidator::operator=(C_UNDEFINED_REFERENCE_VALIDATOR&& that)
{
  CObject::operator=(that);

  return *this;
}