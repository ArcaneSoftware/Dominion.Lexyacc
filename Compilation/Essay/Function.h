//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************************//
//CVariable
//
//****************************************************************************************************************//
CLASS_DECLARATION(CFunction, C_FUNCTION);
class LIBRARY_EXPORT CFunction : public CObject
{
public:
  CLASS_INHERITOR(CObject, CFunction);

  CFunction();
  CFunction(C_FUNCTION& that);
  CFunction(C_FUNCTION&& that);
  CFunction(C_IDENTIFIER& identifier, int32_t parameterChainID = NONE_ID, int32_t blockID = NONE_ID);
  virtual ~CFunction();

  CLASS_PROPERTY(CIdentifier, _identifier, Identifier);
  CLASS_PROPERTY(int32_t, _parameterChainID, ParameterChainID);
  CLASS_PROPERTY(int32_t, _blockID, BlockID);

  C_FUNCTION& operator=(C_FUNCTION& that);

private:
  CIdentifier _identifier;
  int32_t _parameterChainID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_ESSAY
