//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/ASTs.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CNoneIndexSyntaxValidator
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CNoneIndexSyntaxValidator, C_NONE_INDEX_SYNTAX_VALIDATOR);
class LIBRARY_EXPORT CNoneIndexSyntaxValidator :
  public CObject,
  public IValidateProduction<CChainSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CNoneIndexSyntaxValidator);

  CNoneIndexSyntaxValidator();
  CNoneIndexSyntaxValidator(C_NONE_INDEX_SYNTAX_VALIDATOR& that);
  CNoneIndexSyntaxValidator(C_NONE_INDEX_SYNTAX_VALIDATOR&& that);
  virtual ~CNoneIndexSyntaxValidator();
  //{
  virtual CError Validate(C_CHAIN_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_NONE_INDEX_SYNTAX_VALIDATOR& operator=(C_NONE_INDEX_SYNTAX_VALIDATOR& that);
};

END_DOMINION_COMPILATION_ESSAY
