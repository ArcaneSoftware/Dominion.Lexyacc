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
  _argumentChainIndex(NONE_ID)
{
}

CExecProcedureSyntax::CExecProcedureSyntax(C_EXEC_PROCEDURE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _returnVariableName(that._returnVariableName),
  _procedureName(that._procedureName),
  _argumentChainIndex(that._argumentChainIndex)
{
}

CExecProcedureSyntax::CExecProcedureSyntax(C_EXEC_PROCEDURE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _returnVariableName(move(that._returnVariableName)),
  _procedureName(move(that._procedureName)),
  _argumentChainIndex(move(that._argumentChainIndex))
{
}

CExecProcedureSyntax::CExecProcedureSyntax(int32_t livingLine,
                                           WSTRING& returnVariableName,
                                           WSTRING& procedureName,
                                           int32_t argumentChainIndex) :
  CTransactSQLSyntax(ESyntaxType::ExecProcedure, livingLine),
  _returnVariableName(returnVariableName),
  _procedureName(procedureName),
  _argumentChainIndex(argumentChainIndex)
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
  _argumentChainIndex = that._argumentChainIndex;
  return *this;
}
