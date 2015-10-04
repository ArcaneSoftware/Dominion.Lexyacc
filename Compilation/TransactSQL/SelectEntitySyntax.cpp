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
  _topIndex(NONE_INDEX),
  _selectedFieldChainIndex(NONE_INDEX),
  _fromAliasChainIndex(NONE_INDEX),
  _joinChainIndex(NONE_INDEX),
  _whereIndex(NONE_INDEX),
  _orderedFieldChainIndex(NONE_INDEX)
{
}

CSelectEntitySyntax::CSelectEntitySyntax(C_SELECT_ENTITY_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _topIndex(that._topIndex),
  _selectedFieldChainIndex(that._selectedFieldChainIndex),
  _fromAliasChainIndex(that._fromAliasChainIndex),
  _joinChainIndex(that._joinChainIndex),
  _whereIndex(that._whereIndex),
  _orderedFieldChainIndex(that._orderedFieldChainIndex)
{
}

CSelectEntitySyntax::CSelectEntitySyntax(C_SELECT_ENTITY_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _topIndex(move(that._topIndex)),
  _selectedFieldChainIndex(move(that._selectedFieldChainIndex)),
  _fromAliasChainIndex(move(that._fromAliasChainIndex)),
  _joinChainIndex(move(that._joinChainIndex)),
  _whereIndex(move(that._whereIndex)),
  _orderedFieldChainIndex(move(that._orderedFieldChainIndex))
{
}

CSelectEntitySyntax::CSelectEntitySyntax(int32_t livingLine,
                                         int32_t topIndex,
                                         int32_t selectedFieldChainIndex,
                                         int32_t fromAliasChainIndex,
                                         int32_t joinChainIndex,
                                         int32_t whereIndex,
                                         int32_t orderedFieldChainIndex) :
  CTransactSQLSyntax(ESyntaxType::SelectEntity, livingLine),
  _topIndex(topIndex),
  _selectedFieldChainIndex(selectedFieldChainIndex),
  _fromAliasChainIndex(fromAliasChainIndex),
  _joinChainIndex(joinChainIndex),
  _whereIndex(whereIndex),
  _orderedFieldChainIndex(orderedFieldChainIndex)
{
}

CSelectEntitySyntax::~CSelectEntitySyntax()
{
}

C_SELECT_ENTITY_SYNTAX& CSelectEntitySyntax::operator=(C_SELECT_ENTITY_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _topIndex = that._topIndex;
  _selectedFieldChainIndex = that._selectedFieldChainIndex;
  _fromAliasChainIndex = that._fromAliasChainIndex;
  _joinChainIndex = that._joinChainIndex;
  _whereIndex = that._whereIndex;
  _orderedFieldChainIndex = that._orderedFieldChainIndex;
  return *this;
}
