//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ExecProcedureSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CExecProcedureSyntax
//*******************************************************************************************************************//
CExecProcedureSyntax::CExecProcedureSyntax() :
  CTransactSQLSyntax(ESyntaxType::ExecProcedure),
  _argumentChainID(NONE_ID)
{
}

CExecProcedureSyntax::CExecProcedureSyntax(C_EXEC_PROCEDURE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _returnVariableName(that._returnVariableName),
  _procedureName(that._procedureName),
  _argumentChainID(that._argumentChainID)
{
}

CExecProcedureSyntax::CExecProcedureSyntax(C_EXEC_PROCEDURE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _returnVariableName(move(that._returnVariableName)),
  _procedureName(move(that._procedureName)),
  _argumentChainID(move(that._argumentChainID))
{
}

CExecProcedureSyntax::CExecProcedureSyntax(int32_t liveLine,
                                           WSTRING& returnVariableName,
                                           WSTRING& procedureName,
                                           int32_t argumentChainID) :
  CTransactSQLSyntax(ESyntaxType::ExecProcedure, liveLine),
  _returnVariableName(returnVariableName),
  _procedureName(procedureName),
  _argumentChainID(argumentChainID)
{
}

CExecProcedureSyntax::~CExecProcedureSyntax()
{
}

C_EXEC_PROCEDURE_SYNTAX& CExecProcedureSyntax::operator=(C_EXEC_PROCEDURE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _returnVariableName = that._returnVariableName;
  _procedureName = that._procedureName;
  _argumentChainID = that._argumentChainID;
  return *this;
}
