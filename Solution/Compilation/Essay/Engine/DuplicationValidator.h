//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/ASTs.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CDuplicationValidator
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CDuplicationValidator, C_DUPLICATION_VALIDATOR);
class LIBRARY_EXPORT CDuplicationValidator :
  public CObject,
  public IValidateProduction<CDefineVariableSyntax, CContext>,
  public IValidateProduction<CDefineFunctionSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CDuplicationValidator);

  CDuplicationValidator();
  CDuplicationValidator(C_DUPLICATION_VALIDATOR& that);
  CDuplicationValidator(C_DUPLICATION_VALIDATOR&& that);
  virtual ~CDuplicationValidator();
  //{
  virtual CError Validate(C_DEFINE_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const override;
  virtual CError Validate(C_DEFINE_FUNCTION_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_DUPLICATION_VALIDATOR& operator=(C_DUPLICATION_VALIDATOR& that);
};

END_DOMINION_COMPILATION_ESSAY
