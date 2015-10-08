//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CDeclareVariablesSyntax
//Declare @x INT, @y Varchar(0)
//*****************************************************************************************************************//
CLASS_DECLARATION(CDeclareVariablesSyntax, C_DECLARE_VARIABLES_SYNTAX);
class LIBRARY_EXPORT CDeclareVariablesSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CDeclareVariablesSyntax);

  CDeclareVariablesSyntax();
  CDeclareVariablesSyntax(C_DECLARE_VARIABLES_SYNTAX& that);
  CDeclareVariablesSyntax(C_DECLARE_VARIABLES_SYNTAX&& that);
  CDeclareVariablesSyntax(int32_t livingLine, int32_t variableDefinitionChainID);
  virtual ~CDeclareVariablesSyntax();

  CLASS_PROPERTY(int32_t, _variableDefinitionChainID, VariableDefinitionChainID);

  C_DECLARE_VARIABLES_SYNTAX& operator=(C_DECLARE_VARIABLES_SYNTAX& that);

private:
  int32_t _variableDefinitionChainID;
};
END_DOMINION_COMPILATION_TRANSACTSQL


