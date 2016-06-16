//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CVariable
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CVariable, C_VARIABLE);
class LIBRARY_EXPORT CVariable : public CRowVariable
{
public:
  CLASS_INHERITOR(CRowVariable, CVariable);

  CVariable();
  CVariable(C_VARIABLE& that);
  CVariable(C_VARIABLE&& that);
  CVariable(EAccessType access, C_IDENTIFIER& identifier, int32_t initialValueID = NONE_ID, int32_t realValueID = NONE_ID, bool isArgument = false);
  virtual ~CVariable();

  C_VARIABLE& operator=(C_VARIABLE& that);
};

END_DOMINION_COMPILATION_ESSAY
