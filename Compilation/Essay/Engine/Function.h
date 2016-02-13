//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Engine/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//********************************************************************************************************************//
//CVariable
//
//********************************************************************************************************************//
CLASS_DECLARATION(CFunction, C_FUNCTION);
class LIBRARY_EXPORT CFunction : public CNamedReference
{
public:
  CLASS_INHERITOR(CNamedReference, CFunction);

  CFunction();
  CFunction(C_FUNCTION& that);
  CFunction(C_FUNCTION&& that);
  CFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID = NONE_ID, int32_t blockID = NONE_ID);
  virtual ~CFunction();

  CLASS_PROPERTY(int32_t, _parameterChainID, ParameterChainID);
  CLASS_PROPERTY(int32_t, _blockID, BlockID);

  C_FUNCTION& operator=(C_FUNCTION& that);

private:
  int32_t _parameterChainID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_ESSAY
