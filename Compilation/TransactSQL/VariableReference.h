//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Context.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CVariableReference
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableReference, C_VARIABLE_REFERENCE);
class LIBRARY_EXPORT CVariableReference : public CObject
{
public:
  CLASS_INHERITOR(CObject, CVariableReference);

  CVariableReference();
  CVariableReference(C_VARIABLE_REFERENCE& that);
  CVariableReference(C_VARIABLE_REFERENCE&& that);
  CVariableReference(int32_t ID);
  virtual ~CVariableReference();

  wstring GetName(C_CONTEXT& context) const throw();

  CLASS_PROPERTY(int32_t, _index, ID);

  C_VARIABLE_REFERENCE& operator=(C_VARIABLE_REFERENCE& that);

private:
  int32_t _index;
};

END_DOMINION_COMPILATION_TRANSACTSQL
