//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Engine/ASTs.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CNullUnaryOperationValidator
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CNullUnaryOperationValidator, C_NULL_UNARY_OPERATION_VALIDATOR);
class LIBRARY_EXPORT CNullUnaryOperationValidator :
  public CObject,
  public IValidateProduction<COperationSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CNullUnaryOperationValidator);

  CNullUnaryOperationValidator();
  CNullUnaryOperationValidator(C_NULL_UNARY_OPERATION_VALIDATOR& that);
  CNullUnaryOperationValidator(C_NULL_UNARY_OPERATION_VALIDATOR&& that);
  virtual ~CNullUnaryOperationValidator();
  //{
  virtual CError Validate(C_OPERATION_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_NULL_UNARY_OPERATION_VALIDATOR& operator=(C_NULL_UNARY_OPERATION_VALIDATOR& that);
};
//*****************************************************************************************************************//
//CNullBinaryOperationValidator
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CNullBinaryOperationValidator, C_NULL_BINARY_OPERATION_VALIDATOR);
class LIBRARY_EXPORT CNullBinaryOperationValidator :
  public CObject,
  public IValidateProduction<COperationSyntax, CContext>
{
public:
  CLASS_INHERITOR(CObject, CNullBinaryOperationValidator);

  CNullBinaryOperationValidator();
  CNullBinaryOperationValidator(C_NULL_BINARY_OPERATION_VALIDATOR& that);
  CNullBinaryOperationValidator(C_NULL_BINARY_OPERATION_VALIDATOR&& that);
  virtual ~CNullBinaryOperationValidator();
  //{
  virtual CError Validate(C_OPERATION_SYNTAX& syntax, C_CONTEXT& context) const override;
  //}
  C_NULL_BINARY_OPERATION_VALIDATOR& operator=(C_NULL_BINARY_OPERATION_VALIDATOR& that);
};
END_DOMINION_COMPILATION_ESSAY
