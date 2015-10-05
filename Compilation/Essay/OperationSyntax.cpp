//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "OperationSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//COperationSyntax
//*******************************************************************************************************************//
COperationSyntax::COperationSyntax() :
  CEssaySyntax(ESyntaxType::Operation)
{
}
COperationSyntax::COperationSyntax(C_OPERATION_SYNTAX& that) :
  CEssaySyntax(that),
  _operationType(that._operationType),
  _leftOperandIndex(that._leftOperandIndex),
  _rightOperandIndex(that._rightOperandIndex)
{
}

COperationSyntax::COperationSyntax(C_OPERATION_SYNTAX&& that) :
  CEssaySyntax(that),
  _operationType(move(that._operationType)),
  _leftOperandIndex(move(that._leftOperandIndex)),
  _rightOperandIndex(move(that._rightOperandIndex))
{
}

COperationSyntax::COperationSyntax(int32_t livingLine,
                                   int32_t leftOperandIndex,
                                   EOperationType operationType,
                                   int32_t rightOperandIndex) :
  CEssaySyntax(ESyntaxType::Operation, livingLine),
  _operationType(operationType),
  _leftOperandIndex(leftOperandIndex),
  _rightOperandIndex(rightOperandIndex)
{
}

COperationSyntax::~COperationSyntax()
{
}

C_OPERATION_SYNTAX& COperationSyntax::operator=(C_OPERATION_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _operationType = that._operationType;
  _leftOperandIndex = that._leftOperandIndex;
  _rightOperandIndex = that._rightOperandIndex;

  return *this;
}
