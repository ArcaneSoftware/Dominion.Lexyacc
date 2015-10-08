//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//****************************************************************************************************************//
//CJoinEntitySyntax
//
//****************************************************************************************************************//
CLASS_DECLARATION(CJoinEntitySyntax, C_JOIN_ENTITY_SYNTAX);
class LIBRARY_EXPORT CJoinEntitySyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CJoinEntitySyntax);

  CJoinEntitySyntax();
  CJoinEntitySyntax(C_JOIN_ENTITY_SYNTAX& that);
  CJoinEntitySyntax(C_JOIN_ENTITY_SYNTAX&& that);
  CJoinEntitySyntax(int32_t livingLine, EJoinType joinType, int32_t aliasID, int32_t conditionID);
  virtual ~CJoinEntitySyntax();

  CLASS_PROPERTY(EJoinType, _joinType, JoinType);
  CLASS_PROPERTY(int32_t, _aliasID, AliasID);
  CLASS_PROPERTY(int32_t, _conditionID, ConditionID);

  C_JOIN_ENTITY_SYNTAX& operator=(C_JOIN_ENTITY_SYNTAX& that);

private:
  EJoinType _joinType;
  int32_t _aliasID;
  int32_t _conditionID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
