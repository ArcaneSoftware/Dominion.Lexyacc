//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/ASTs.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CUndefinedReferenceValidator
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CUndefinedReferenceValidator, C_UNDEFINED_REFERENCE_VALIDATOR);
class LIBRARY_EXPORT CUndefinedReferenceValidator :
  public CObject,
  public IValidateProduction<CAssignVariableSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CUndefinedReferenceValidator);

  CUndefinedReferenceValidator();
  CUndefinedReferenceValidator(C_UNDEFINED_REFERENCE_VALIDATOR& that);
  CUndefinedReferenceValidator(C_UNDEFINED_REFERENCE_VALIDATOR&& that);
  virtual ~CUndefinedReferenceValidator();

public:
  //{
  virtual CError Validate(C_ASSIGN_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_UNDEFINED_REFERENCE_VALIDATOR& operator=(C_UNDEFINED_REFERENCE_VALIDATOR& that);
};

END_DOMINION_COMPILATION_ESSAY
