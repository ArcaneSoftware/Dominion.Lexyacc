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
  _aliasID(NONE_ID),
  _conditionID(NONE_ID)
{
}

CJoinEntitySyntax::CJoinEntitySyntax(C_JOIN_ENTITY_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _joinType(that._joinType),
  _aliasID(that._aliasID),
  _conditionID(that._conditionID)
{
}

CJoinEntitySyntax::CJoinEntitySyntax(C_JOIN_ENTITY_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _joinType(move(that._joinType)),
  _aliasID(move(that._aliasID)),
  _conditionID(move(that._conditionID))
{
}

CJoinEntitySyntax::CJoinEntitySyntax(int32_t livingLine,
                                     EJoinType joinType,
                                     int32_t aliasID,
                                     int32_t conditionID) :
  CTransactSQLSyntax(ESyntaxType::JoinEntity, livingLine),
  _joinType(joinType),
  _aliasID(aliasID),
  _conditionID(conditionID)
{
}

CJoinEntitySyntax::~CJoinEntitySyntax()
{
}

C_JOIN_ENTITY_SYNTAX& CJoinEntitySyntax::operator=(C_JOIN_ENTITY_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _joinType = that._joinType;
  _aliasID = that._aliasID;
  _conditionID = that._conditionID;
  return *this;
}
