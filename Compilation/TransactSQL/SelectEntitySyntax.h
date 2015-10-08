//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CSelectEntitySyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CSelectEntitySyntax, C_SELECT_ENTITY_SYNTAX);
class LIBRARY_EXPORT CSelectEntitySyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CSelectEntitySyntax);

  CSelectEntitySyntax();
  CSelectEntitySyntax(C_SELECT_ENTITY_SYNTAX& that);
  CSelectEntitySyntax(C_SELECT_ENTITY_SYNTAX&& that);
  CSelectEntitySyntax(int32_t livingLine,
                      int32_t topID,
                      int32_t selectedFieldChainID,
                      int32_t fromAliasChainID,
                      int32_t joinChainID,
                      int32_t whereID,
                      int32_t orderedFieldChainID);
  virtual ~CSelectEntitySyntax();

  CLASS_PROPERTY(int32_t, _topID, TopID);
  CLASS_PROPERTY(int32_t, _selectedFieldChainID, SelectedFieldChainID);
  CLASS_PROPERTY(int32_t, _fromAliasChainID, FromAliasChainID);
  CLASS_PROPERTY(int32_t, _joinChainID, JoinChainID);
  CLASS_PROPERTY(int32_t, _whereID, WhereID);
  CLASS_PROPERTY(int32_t, _orderedFieldChainID, OrderedFieldChainID);

  C_SELECT_ENTITY_SYNTAX& operator=(C_SELECT_ENTITY_SYNTAX& that);

private:
  int32_t _topID;
  int32_t _selectedFieldChainID;
  int32_t _fromAliasChainID;
  int32_t _joinChainID;
  int32_t _whereID;
  int32_t _orderedFieldChainID;
};

END_DOMINION_COMPILATION_TRANSACTSQL


