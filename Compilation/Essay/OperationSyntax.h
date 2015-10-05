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
                   int32_t leftOperandIndex,
                   EOperationType operationType,
                   int32_t rightOperandIndex);
  virtual ~COperationSyntax();

  CLASS_PROPERTY(EOperationType, _operationType, OperationType);
  CLASS_PROPERTY(int32_t, _leftOperandIndex, LeftOperandIndex);
  CLASS_PROPERTY(int32_t, _rightOperandIndex, RightOperandIndex);

public:
  C_OPERATION_SYNTAX& operator=(C_OPERATION_SYNTAX& that);

private:
  EOperationType _operationType;
  int32_t _leftOperandIndex;
  int32_t _rightOperandIndex;
};

END_DOMINION_COMPILATION_ESSAY
