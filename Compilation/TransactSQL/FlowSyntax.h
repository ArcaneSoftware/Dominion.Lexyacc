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
              int32_t conditionID,
              int32_t thenBlockID,
              int32_t elseBlockID);
  virtual ~CFlowSyntax();

  CLASS_PROPERTY(EFlowType, _flowType, FlowType);
  CLASS_PROPERTY(int32_t, _conditionID, ConditionID);
  CLASS_PROPERTY(int32_t, _thenBlockID, ThenBlockID);
  CLASS_PROPERTY(int32_t, _elseBlockID, ElseBlockID);

  C_FLOW_SYNTAX& operator=(C_FLOW_SYNTAX& that);

private:
  EFlowType _flowType;
  int32_t _conditionID;
  int32_t _thenBlockID;
  int32_t _elseBlockID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
