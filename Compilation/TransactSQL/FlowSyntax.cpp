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
  _conditionID(NONE_ID),
  _thenBlockID(NONE_ID),
  _elseBlockID(NONE_ID)
{
}

CFlowSyntax::CFlowSyntax(C_FLOW_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _flowType(that._flowType),
  _conditionID(that._conditionID),
  _thenBlockID(that._thenBlockID),
  _elseBlockID(that._elseBlockID)
{
}

CFlowSyntax::CFlowSyntax(C_FLOW_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _flowType(move(that._flowType)),
  _conditionID(move(that._conditionID)),
  _thenBlockID(move(that._thenBlockID)),
  _elseBlockID(move(that._elseBlockID))
{
}

CFlowSyntax::CFlowSyntax(int32_t livingLine,
                         EFlowType flowType,
                         int32_t conditionID,
                         int32_t thenID,
                         int32_t elseID) :
  CTransactSQLSyntax(ESyntaxType::Flow, livingLine),
  _flowType(flowType),
  _conditionID(conditionID),
  _thenBlockID(thenID),
  _elseBlockID(elseID)
{
}

CFlowSyntax::~CFlowSyntax()
{
}

C_FLOW_SYNTAX& CFlowSyntax::operator=(C_FLOW_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _flowType = that._flowType;
  _conditionID = that._conditionID;
  _thenBlockID = that._thenBlockID;
  _elseBlockID = that._elseBlockID;
  return *this;
}
