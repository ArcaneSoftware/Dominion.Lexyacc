//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/NamedReference.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//***********************************************************************************************************************************************************************************//
//CVariable
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CRowFunction, C_ROW_FUNCTION);
class LIBRARY_EXPORT CRowFunction : public CNamedReference
{
public:
  CLASS_INHERITOR(CNamedReference, CRowFunction);

  CRowFunction();
  CRowFunction(C_ROW_FUNCTION& that);
  CRowFunction(C_ROW_FUNCTION&& that);
  CRowFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID = NONE_ID, int32_t blockID = NONE_ID);
  virtual ~CRowFunction();

  CLASS_PROPERTY(int32_t, _parameterChainID, ParameterChainID);
  CLASS_PROPERTY(int32_t, _blockID, BlockID);

  C_ROW_FUNCTION& operator=(C_ROW_FUNCTION& that);

private:
  int32_t _parameterChainID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_SYNTAX
