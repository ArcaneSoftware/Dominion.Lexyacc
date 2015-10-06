//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "OperationAST.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//COperationAST
//*******************************************************************************************************************//
COperationAST::COperationAST() :
  CTransactSQLSyntax(ESyntaxType::Operation)
{
}
COperationAST::COperationAST(C_OPERATION_AST& that) :
  CTransactSQLSyntax(that),
  _operationType(that._operationType),
  _leftOperandID(that._leftOperandID),
  _centerOperandIndex(that._centerOperandIndex),
  _rightOperandID(that._rightOperandID)
{
}

COperationAST::COperationAST(C_OPERATION_AST&& that) :
  CTransactSQLSyntax(that),
  _operationType(move(that._operationType)),
  _leftOperandID(move(that._leftOperandID)),
  _centerOperandIndex(move(that._centerOperandIndex)),
  _rightOperandID(move(that._rightOperandID))
{
}

COperationAST::COperationAST(int32_t livingLine,
                                   EOperationType operationType,
                                   int32_t leftOperandID,
                                   int32_t centerOperandIndex,
                                   int32_t rightOperandID) :
  CTransactSQLSyntax(ESyntaxType::Operation, livingLine),
  _operationType(operationType),
  _leftOperandID(leftOperandID),
  _centerOperandIndex(centerOperandIndex),
  _rightOperandID(rightOperandID)
{
}

COperationAST::~COperationAST()
{
}

C_OPERATION_AST& COperationAST::operator=(C_OPERATION_AST& that)
{
  CTransactSQLSyntax::operator=(that);

  _operationType = that._operationType;
  _leftOperandID = that._leftOperandID;
  _centerOperandIndex = that._centerOperandIndex;
  _rightOperandID = that._rightOperandID;

  return *this;
}
