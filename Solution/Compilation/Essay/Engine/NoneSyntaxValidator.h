//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/ASTs.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CNoneSyntaxValidator
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CNoneSyntaxValidator, C_NONE_SYNTAX_VALIDATOR);
class LIBRARY_EXPORT CNoneSyntaxValidator :
  public CObject,
  public IValidateProduction<CChainSyntax, CContext>,
  public IValidateProduction<CAssignVariableSyntax, CContext>,
  public IValidateProduction<CReturnSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CNoneSyntaxValidator);

  CNoneSyntaxValidator();
  CNoneSyntaxValidator(C_NONE_SYNTAX_VALIDATOR& that);
  CNoneSyntaxValidator(C_NONE_SYNTAX_VALIDATOR&& that);
  virtual ~CNoneSyntaxValidator();
  //{
  virtual CError Validate(C_CHAIN_SYNTAX& syntax, C_CONTEXT& context) const override;
  virtual CError Validate(C_ASSIGN_VARIABLE_SYNTAX& syntax, C_CONTEXT& context) const override;
  virtual CError Validate(C_RETURN_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_NONE_SYNTAX_VALIDATOR& operator=(C_NONE_SYNTAX_VALIDATOR& that);
  C_NONE_SYNTAX_VALIDATOR& operator=(C_NONE_SYNTAX_VALIDATOR&& that);
};

END_DOMINION_COMPILATION_ESSAY
