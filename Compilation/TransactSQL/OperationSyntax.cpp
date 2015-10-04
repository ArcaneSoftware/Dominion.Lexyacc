//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "OperationSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//COperationSyntax
//*******************************************************************************************************************//
COperationSyntax::COperationSyntax() :
  CTransactSQLSyntax(ESyntaxType::Operation)
{
}
COperationSyntax::COperationSyntax(C_OPERATION_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _operationType(that._operationType),
  _leftOperandIndex(that._leftOperandIndex),
  _centerOperandIndex(that._centerOperandIndex),
  _rightOperandIndex(that._rightOperandIndex)
{
}

COperationSyntax::COperationSyntax(C_OPERATION_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _operationType(move(that._operationType)),
  _leftOperandIndex(move(that._leftOperandIndex)),
  _centerOperandIndex(move(that._centerOperandIndex)),
  _rightOperandIndex(move(that._rightOperandIndex))
{
}

COperationSyntax::COperationSyntax(int32_t livingLine,
                                   EOperationType operationType,
                                   int32_t leftOperandIndex,
                                   int32_t centerOperandIndex,
                                   int32_t rightOperandIndex) :
  CTransactSQLSyntax(ESyntaxType::Operation, livingLine),
  _operationType(operationType),
  _leftOperandIndex(leftOperandIndex),
  _centerOperandIndex(centerOperandIndex),
  _rightOperandIndex(rightOperandIndex)
{
}

COperationSyntax::~COperationSyntax()
{
}

C_OPERATION_SYNTAX& COperationSyntax::operator=(C_OPERATION_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);

  _operationType = that._operationType;
  _leftOperandIndex = that._leftOperandIndex;
  _centerOperandIndex = that._centerOperandIndex;
  _rightOperandIndex = that._rightOperandIndex;

  return *this;
}
