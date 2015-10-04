//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "NullOperationValidator.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CNullUnaryOperationValidator
//*******************************************************************************************************************//
CNullUnaryOperationValidator::CNullUnaryOperationValidator()
{
}

CNullUnaryOperationValidator::CNullUnaryOperationValidator(C_NULL_UNARY_OPERATION_VALIDATOR& that) :
  CObject(that)
{
}

CNullUnaryOperationValidator::CNullUnaryOperationValidator(C_NULL_UNARY_OPERATION_VALIDATOR&& that) :
  CObject(that)
{
}

CNullUnaryOperationValidator::~CNullUnaryOperationValidator()
{
}

CError CNullUnaryOperationValidator::Validate(C_OPERATION_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;

  if (syntax.GetRightOperandIndex() == NONE_INDEX)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(CWStringTemplate(L"operand of operation:[%x] is invalid").
                          Format(CEOperationType(syntax.GetOperationType()).ToString()));
  }

  return move(result);
}

C_NULL_UNARY_OPERATION_VALIDATOR& CNullUnaryOperationValidator::operator= (C_NULL_UNARY_OPERATION_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}
//*******************************************************************************************************************//
//CNullBinaryOperationValidator
//*******************************************************************************************************************//
CNullBinaryOperationValidator::CNullBinaryOperationValidator()
{
}

CNullBinaryOperationValidator::CNullBinaryOperationValidator(C_NULL_BINARY_OPERATION_VALIDATOR& that) :
  CObject(that)
{
}

CNullBinaryOperationValidator::CNullBinaryOperationValidator(C_NULL_BINARY_OPERATION_VALIDATOR&& that) :
  CObject(that)
{
}

CNullBinaryOperationValidator::~CNullBinaryOperationValidator()
{
}

CError CNullBinaryOperationValidator::Validate(C_OPERATION_SYNTAX& syntax, C_CONTEXT& context) const
{
  CError result;
  auto operationType = CEOperationType(syntax.GetOperationType()).ToString();

  if (syntax.GetLeftOperandIndex() == NONE_INDEX)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(CWStringTemplate(L"Left operand of operation:[%x] is invalid").Format(operationType));
  }

  if (syntax.GetRightOperandIndex() == NONE_INDEX)
  {
    result.SetSource(EErrorSource::Producing);
    result.SetLivingLine(syntax.GetLivingLine());
    result.SetDescription(CWStringTemplate(L"Right operand of operation:[%x] is invalid").Format(operationType));
  }

  return move(result);
}

C_NULL_BINARY_OPERATION_VALIDATOR& CNullBinaryOperationValidator::operator=(C_NULL_BINARY_OPERATION_VALIDATOR& that)
{
  CObject::operator=(that);

  return *this;
}
