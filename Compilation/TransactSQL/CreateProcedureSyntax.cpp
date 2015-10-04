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
  _variableDefinitionChainIndex(NONE_INDEX),
  _blockIndex(NONE_INDEX)
{
}

CCreateProcedureSyntax::CCreateProcedureSyntax(C_CREATE_PROCEDURE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _procedureName(that._procedureName),
  _variableDefinitionChainIndex(that._variableDefinitionChainIndex),
  _blockIndex(that._blockIndex)
{
}

CCreateProcedureSyntax::CCreateProcedureSyntax(C_CREATE_PROCEDURE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _procedureName(move(that._procedureName)),
  _variableDefinitionChainIndex(move(that._variableDefinitionChainIndex)),
  _blockIndex(move(that._blockIndex))
{
}

CCreateProcedureSyntax::CCreateProcedureSyntax(int32_t livingLine,
                                               WSTRING& procedureName,
                                               int32_t variableDefinitionChainIndex,
                                               int32_t blockIndex) :
  CTransactSQLSyntax(ESyntaxType::CreateProcedure, livingLine),
  _procedureName(procedureName),
  _variableDefinitionChainIndex(variableDefinitionChainIndex),
  _blockIndex(blockIndex)
{
}

CCreateProcedureSyntax::~CCreateProcedureSyntax()
{
}

C_CREATE_PROCEDURE_SYNTAX& CCreateProcedureSyntax::operator=(C_CREATE_PROCEDURE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _procedureName = that._procedureName;
  _variableDefinitionChainIndex = that._variableDefinitionChainIndex;
  _blockIndex = that._blockIndex;
  return *this;
}