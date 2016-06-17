//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "OperationSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//COperationSyntax
//***********************************************************************************************************************************************************************************//
COperationSyntax::COperationSyntax() :
  CReducibleSyntax(ESyntaxType::Operation)
{
}
COperationSyntax::COperationSyntax(C_OPERATION_SYNTAX& that) :
  CReducibleSyntax(that),
  _operationType(that._operationType),
  _leftOperandID(that._leftOperandID),
  _rightOperandID(that._rightOperandID)
{
}

COperationSyntax::COperationSyntax(C_OPERATION_SYNTAX&& that) :
  CReducibleSyntax(that),
  _operationType(move(that._operationType)),
  _leftOperandID(move(that._leftOperandID)),
  _rightOperandID(move(that._rightOperandID))
{
}

COperationSyntax::COperationSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t leftOperandID, EOperationType operationType, int32_t rightOperandID) :
  CReducibleSyntax(ESyntaxType::Operation, liveLine, liveNamespace),
  _operationType(operationType),
  _leftOperandID(leftOperandID),
  _rightOperandID(rightOperandID)
{
}

COperationSyntax::~COperationSyntax()
{
}

CScalar COperationSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  CScalar result;
  CScalar left = context.GetSyntax(GetLeftOperandID())->Reduce(context);
  CScalar right = context.GetSyntax(GetRightOperandID())->Reduce(context);

  switch (GetOperationType())
  {
    case EOperationType::Add:
    {
      return left + right;
    }
    case EOperationType::Subtract:
    {
      return left - right;
    }
    case EOperationType::Multiply:
    {
      return left * right;
    }
    case EOperationType::Divide:
    {
      return left / right;
    }
    default:
    {
      return CScalar();
    }
  }
}

C_OPERATION_SYNTAX& COperationSyntax::operator=(C_OPERATION_SYNTAX& that)
{
  CReducibleSyntax::operator=(that);

  _operationType = that._operationType;
  _leftOperandID = that._leftOperandID;
  _rightOperandID = that._rightOperandID;

  return *this;
}

C_OPERATION_SYNTAX& COperationSyntax::operator=(C_OPERATION_SYNTAX&& that)
{
  CReducibleSyntax::operator=(that);

  _operationType = move(that._operationType);
  _leftOperandID = move(that._leftOperandID);
  _rightOperandID = move(that._rightOperandID);

  return *this;
}
