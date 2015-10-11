//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "CreateProcedureSyntax.h"
#include "BlockSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CCreateProcedureSyntax
//*******************************************************************************************************************//
CCreateProcedureSyntax::CCreateProcedureSyntax() :
  CTransactSQLSyntax(ESyntaxType::CreateProcedure),
  _variableDefinitionChainID(NONE_ID),
  _blockID(NONE_ID)
{
}

CCreateProcedureSyntax::CCreateProcedureSyntax(C_CREATE_PROCEDURE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _procedureName(that._procedureName),
  _variableDefinitionChainID(that._variableDefinitionChainID),
  _blockID(that._blockID)
{
}

CCreateProcedureSyntax::CCreateProcedureSyntax(C_CREATE_PROCEDURE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _procedureName(move(that._procedureName)),
  _variableDefinitionChainID(move(that._variableDefinitionChainID)),
  _blockID(move(that._blockID))
{
}

CCreateProcedureSyntax::CCreateProcedureSyntax(int32_t liveLine,
                                               WSTRING& procedureName,
                                               int32_t variableDefinitionChainID,
                                               int32_t blockID) :
  CTransactSQLSyntax(ESyntaxType::CreateProcedure, liveLine),
  _procedureName(procedureName),
  _variableDefinitionChainID(variableDefinitionChainID),
  _blockID(blockID)
{
}

CCreateProcedureSyntax::~CCreateProcedureSyntax()
{
}

C_CREATE_PROCEDURE_SYNTAX& CCreateProcedureSyntax::operator=(C_CREATE_PROCEDURE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _procedureName = that._procedureName;
  _variableDefinitionChainID = that._variableDefinitionChainID;
  _blockID = that._blockID;
  return *this;
}