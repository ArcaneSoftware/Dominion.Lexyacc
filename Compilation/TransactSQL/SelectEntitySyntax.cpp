//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "SelectEntitySyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CSelectEntitySyntax
//*******************************************************************************************************************//
CSelectEntitySyntax::CSelectEntitySyntax() :
  CTransactSQLSyntax(ESyntaxType::SelectEntity),
  _topID(NONE_ID),
  _selectedFieldChainID(NONE_ID),
  _fromAliasChainID(NONE_ID),
  _joinChainID(NONE_ID),
  _whereID(NONE_ID),
  _orderedFieldChainID(NONE_ID)
{
}

CSelectEntitySyntax::CSelectEntitySyntax(C_SELECT_ENTITY_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _topID(that._topID),
  _selectedFieldChainID(that._selectedFieldChainID),
  _fromAliasChainID(that._fromAliasChainID),
  _joinChainID(that._joinChainID),
  _whereID(that._whereID),
  _orderedFieldChainID(that._orderedFieldChainID)
{
}

CSelectEntitySyntax::CSelectEntitySyntax(C_SELECT_ENTITY_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _topID(move(that._topID)),
  _selectedFieldChainID(move(that._selectedFieldChainID)),
  _fromAliasChainID(move(that._fromAliasChainID)),
  _joinChainID(move(that._joinChainID)),
  _whereID(move(that._whereID)),
  _orderedFieldChainID(move(that._orderedFieldChainID))
{
}

CSelectEntitySyntax::CSelectEntitySyntax(int32_t livingLine,
                                         int32_t topID,
                                         int32_t selectedFieldChainID,
                                         int32_t fromAliasChainID,
                                         int32_t joinChainID,
                                         int32_t whereID,
                                         int32_t orderedFieldChainID) :
  CTransactSQLSyntax(ESyntaxType::SelectEntity, livingLine),
  _topID(topID),
  _selectedFieldChainID(selectedFieldChainID),
  _fromAliasChainID(fromAliasChainID),
  _joinChainID(joinChainID),
  _whereID(whereID),
  _orderedFieldChainID(orderedFieldChainID)
{
}

CSelectEntitySyntax::~CSelectEntitySyntax()
{
}

C_SELECT_ENTITY_SYNTAX& CSelectEntitySyntax::operator=(C_SELECT_ENTITY_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _topID = that._topID;
  _selectedFieldChainID = that._selectedFieldChainID;
  _fromAliasChainID = that._fromAliasChainID;
  _joinChainID = that._joinChainID;
  _whereID = that._whereID;
  _orderedFieldChainID = that._orderedFieldChainID;
  return *this;
}
