//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "JoinEntitySyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CJoinEntitySyntax
//*******************************************************************************************************************//
CJoinEntitySyntax::CJoinEntitySyntax() :
  CTransactSQLSyntax(ESyntaxType::JoinEntity),
  _joinType(EJoinType::JoinEntity),
  _aliasIndex(NONE_INDEX),
  _conditionIndex(NONE_INDEX)
{
}

CJoinEntitySyntax::CJoinEntitySyntax(C_JOIN_ENTITY_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _joinType(that._joinType),
  _aliasIndex(that._aliasIndex),
  _conditionIndex(that._conditionIndex)
{
}

CJoinEntitySyntax::CJoinEntitySyntax(C_JOIN_ENTITY_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _joinType(move(that._joinType)),
  _aliasIndex(move(that._aliasIndex)),
  _conditionIndex(move(that._conditionIndex))
{
}

CJoinEntitySyntax::CJoinEntitySyntax(int32_t livingLine,
                                     EJoinType joinType,
                                     int32_t aliasIndex,
                                     int32_t conditionIndex) :
  CTransactSQLSyntax(ESyntaxType::JoinEntity, livingLine),
  _joinType(joinType),
  _aliasIndex(aliasIndex),
  _conditionIndex(conditionIndex)
{
}

CJoinEntitySyntax::~CJoinEntitySyntax()
{
}

C_JOIN_ENTITY_SYNTAX& CJoinEntitySyntax::operator=(C_JOIN_ENTITY_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _joinType = that._joinType;
  _aliasIndex = that._aliasIndex;
  _conditionIndex = that._conditionIndex;
  return *this;
}
