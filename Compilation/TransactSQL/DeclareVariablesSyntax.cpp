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
  _variableDefinitionChainID(NONE_ID)
{
}

CDeclareVariablesSyntax::CDeclareVariablesSyntax(C_DECLARE_VARIABLES_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _variableDefinitionChainID(that._variableDefinitionChainID)
{
}

CDeclareVariablesSyntax::CDeclareVariablesSyntax(C_DECLARE_VARIABLES_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _variableDefinitionChainID(move(that._variableDefinitionChainID))
{
}

CDeclareVariablesSyntax::CDeclareVariablesSyntax(int32_t liveLine, int32_t variableDefinitionChainID) :
  CTransactSQLSyntax(ESyntaxType::DeclareVariables, liveLine),
  _variableDefinitionChainID(variableDefinitionChainID)
{
}

CDeclareVariablesSyntax::~CDeclareVariablesSyntax()
{
}

C_DECLARE_VARIABLES_SYNTAX& CDeclareVariablesSyntax::operator=(C_DECLARE_VARIABLES_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _variableDefinitionChainID = that._variableDefinitionChainID;
  return *this;
}
