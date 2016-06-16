//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/ASTs.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CUndefinedReferenceValidator
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CUndefinedReferenceValidator, C_UNDEFINED_REFERENCE_VALIDATOR);
class LIBRARY_EXPORT CUndefinedReferenceValidator :
  public CObject,
  public IValidateProduction<CVariableSyntax, CContext>,
  public IValidateProduction<CFunctionSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CUndefinedReferenceValidator);

  CUndefinedReferenceValidator();
  CUndefinedReferenceValidator(C_UNDEFINED_REFERENCE_VALIDATOR& that);
  CUndefinedReferenceValidator(C_UNDEFINED_REFERENCE_VALIDATOR&& that);
  virtual ~CUndefinedReferenceValidator();

  bool ValidateReference(C_NAMESPACE& referenceLiveNamespace, WSTRING& referenceName, EIdentifierType referenceIdentifierType, C_CONTEXT& context) const;

public:
  //{
  virtual CError Validate(C_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const override;
  virtual CError Validate(C_FUNCTION_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_UNDEFINED_REFERENCE_VALIDATOR& operator=(C_UNDEFINED_REFERENCE_VALIDATOR& that);
};

END_DOMINION_COMPILATION_ESSAY
