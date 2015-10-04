//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "FlowSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CFlowSyntax
//*******************************************************************************************************************//
CFlowSyntax::CFlowSyntax() :
  CTransactSQLSyntax(ESyntaxType::Flow),
  _flowType(EFlowType::If),
  _conditionIndex(NONE_INDEX),
  _thenBlockIndex(NONE_INDEX),
  _elseBlockIndex(NONE_INDEX)
{
}

CFlowSyntax::CFlowSyntax(C_FLOW_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _flowType(that._flowType),
  _conditionIndex(that._conditionIndex),
  _thenBlockIndex(that._thenBlockIndex),
  _elseBlockIndex(that._elseBlockIndex)
{
}

CFlowSyntax::CFlowSyntax(C_FLOW_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _flowType(move(that._flowType)),
  _conditionIndex(move(that._conditionIndex)),
  _thenBlockIndex(move(that._thenBlockIndex)),
  _elseBlockIndex(move(that._elseBlockIndex))
{
}

CFlowSyntax::CFlowSyntax(int32_t livingLine,
                         EFlowType flowType,
                         int32_t conditionIndex,
                         int32_t thenIndex,
                         int32_t elseIndex) :
  CTransactSQLSyntax(ESyntaxType::Flow, livingLine),
  _flowType(flowType),
  _conditionIndex(conditionIndex),
  _thenBlockIndex(thenIndex),
  _elseBlockIndex(elseIndex)
{
}

CFlowSyntax::~CFlowSyntax()
{
}

C_FLOW_SYNTAX& CFlowSyntax::operator=(C_FLOW_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _flowType = that._flowType;
  _conditionIndex = that._conditionIndex;
  _thenBlockIndex = that._thenBlockIndex;
  _elseBlockIndex = that._elseBlockIndex;
  return *this;
}
