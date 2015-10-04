//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "DeclareVariablesSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CDeclareVariablesSyntax
//*******************************************************************************************************************//
CDeclareVariablesSyntax::CDeclareVariablesSyntax() :
  CTransactSQLSyntax(ESyntaxType::DeclareVariables),
  _variableDefinitionChainIndex(NONE_INDEX)
{
}

CDeclareVariablesSyntax::CDeclareVariablesSyntax(C_DECLARE_VARIABLES_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _variableDefinitionChainIndex(that._variableDefinitionChainIndex)
{
}

CDeclareVariablesSyntax::CDeclareVariablesSyntax(C_DECLARE_VARIABLES_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _variableDefinitionChainIndex(move(that._variableDefinitionChainIndex))
{
}

CDeclareVariablesSyntax::CDeclareVariablesSyntax(int32_t livingLine, int32_t variableDefinitionChainIndex) :
  CTransactSQLSyntax(ESyntaxType::DeclareVariables, livingLine),
  _variableDefinitionChainIndex(variableDefinitionChainIndex)
{
}

CDeclareVariablesSyntax::~CDeclareVariablesSyntax()
{
}

C_DECLARE_VARIABLES_SYNTAX& CDeclareVariablesSyntax::operator=(C_DECLARE_VARIABLES_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _variableDefinitionChainIndex = that._variableDefinitionChainIndex;
  return *this;
}
