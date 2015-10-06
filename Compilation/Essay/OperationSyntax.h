//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//COperationSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(COperationSyntax, C_OPERATION_SYNTAX);
class LIBRARY_EXPORT COperationSyntax : public CEssaySyntax
{
public:
  CLASS_INHERITOR(CEssaySyntax, COperationSyntax);

  COperationSyntax();
  COperationSyntax(C_OPERATION_SYNTAX& that);
  COperationSyntax(C_OPERATION_SYNTAX&& that);
  COperationSyntax(int32_t livingLine,
                   int32_t leftOperandID,
                   EOperationType operationType,
                   int32_t rightOperandID);
  virtual ~COperationSyntax();

  CLASS_PROPERTY(EOperationType, _operationType, OperationType);
  CLASS_PROPERTY(int32_t, _leftOperandID, LeftOperandID);
  CLASS_PROPERTY(int32_t, _rightOperandID, RightOperandID);

public:
  C_OPERATION_SYNTAX& operator=(C_OPERATION_SYNTAX& that);

private:
  EOperationType _operationType;
  int32_t _leftOperandID;
  int32_t _rightOperandID;
};

END_DOMINION_COMPILATION_ESSAY
