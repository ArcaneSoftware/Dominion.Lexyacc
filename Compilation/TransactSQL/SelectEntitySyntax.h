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
                      int32_t topIndex,
                      int32_t selectedFieldChainIndex,
                      int32_t fromAliasChainIndex,
                      int32_t joinChainIndex,
                      int32_t whereIndex,
                      int32_t orderedFieldChainIndex);
  virtual ~CSelectEntitySyntax();

  CLASS_PROPERTY(int32_t, _topIndex, TopIndex);
  CLASS_PROPERTY(int32_t, _selectedFieldChainIndex, SelectedFieldChainIndex);
  CLASS_PROPERTY(int32_t, _fromAliasChainIndex, FromAliasChainIndex);
  CLASS_PROPERTY(int32_t, _joinChainIndex, JoinChainIndex);
  CLASS_PROPERTY(int32_t, _whereIndex, WhereIndex);
  CLASS_PROPERTY(int32_t, _orderedFieldChainIndex, OrderedFieldChainIndex);

  C_SELECT_ENTITY_SYNTAX& operator=(C_SELECT_ENTITY_SYNTAX& that);

private:
  int32_t _topIndex;
  int32_t _selectedFieldChainIndex;
  int32_t _fromAliasChainIndex;
  int32_t _joinChainIndex;
  int32_t _whereIndex;
  int32_t _orderedFieldChainIndex;
};

END_DOMINION_COMPILATION_TRANSACTSQL


