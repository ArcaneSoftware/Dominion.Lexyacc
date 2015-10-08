//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//COperationAST
//
//*****************************************************************************************************************//
CLASS_DECLARATION(COperationAST, C_OPERATION_AST);
class LIBRARY_EXPORT COperationAST : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, COperationAST);

  COperationAST();
  COperationAST(C_OPERATION_AST& that);
  COperationAST(C_OPERATION_AST&& that);
  COperationAST(int32_t livingLine,
                   EOperationType operationType,
                   int32_t leftOperandID,
                   int32_t centerOperandID,
                   int32_t rightOperandID);
  virtual ~COperationAST();

  CLASS_PROPERTY(EOperationType, _operationType, OperationType);
  CLASS_PROPERTY(int32_t, _leftOperandID, LeftOperandID);
  CLASS_PROPERTY(int32_t, _centerOperandID, CenterOperandID);
  CLASS_PROPERTY(int32_t, _rightOperandID, RightOperandID);

public:
  C_OPERATION_AST& operator=(C_OPERATION_AST& that);

private:
  EOperationType _operationType;
  int32_t _leftOperandID;
  int32_t _centerOperandID;
  int32_t _rightOperandID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
