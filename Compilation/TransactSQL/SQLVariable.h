//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Dependence.h"

using namespace Dominion::Syntax;

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CSQLVariable
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CSQLVariable, C_SQL_VARIABLE);
class LIBRARY_EXPORT CSQLVariable : public CVariable
{
public:
  CLASS_INHERITOR(CVariable, CSQLVariable);

  static bool IS_GLOBAL(WSTRING& name);

  CSQLVariable();
  CSQLVariable(C_SQL_VARIABLE& that);
  CSQLVariable(C_SQL_VARIABLE&& that);
  CSQLVariable(WSTRING& name,
               int32_t initialValue = NONE_INDEX,
               int32_t realValue = NONE_INDEX,
               bool isArgument = false);
  virtual ~CSQLVariable();

  bool IsGlobal() const;

  C_SQL_VARIABLE& operator=(C_SQL_VARIABLE& that);
};

END_DOMINION_COMPILATION_TRANSACTSQL
