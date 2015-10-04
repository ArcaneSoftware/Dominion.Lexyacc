//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CFlowSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CFlowSyntax, C_FLOW_SYNTAX);
class LIBRARY_EXPORT CFlowSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CFlowSyntax);

  CFlowSyntax();
  CFlowSyntax(C_FLOW_SYNTAX& that);
  CFlowSyntax(C_FLOW_SYNTAX&& that);
  CFlowSyntax(int32_t livingLine,
              EFlowType flowType,
              int32_t conditionIndex,
              int32_t thenBlockIndex,
              int32_t elseBlockIndex);
  virtual ~CFlowSyntax();

  CLASS_PROPERTY(EFlowType, _flowType, FlowType);
  CLASS_PROPERTY(int32_t, _conditionIndex, ConditionIndex);
  CLASS_PROPERTY(int32_t, _thenBlockIndex, ThenBlockIndex);
  CLASS_PROPERTY(int32_t, _elseBlockIndex, ElseBlockIndex);

  C_FLOW_SYNTAX& operator=(C_FLOW_SYNTAX& that);

private:
  EFlowType _flowType;
  int32_t _conditionIndex;
  int32_t _thenBlockIndex;
  int32_t _elseBlockIndex;
};

END_DOMINION_COMPILATION_TRANSACTSQL
