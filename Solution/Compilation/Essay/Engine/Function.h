//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Variable.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CFunction
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CFunction, C_FUNCTION);
class LIBRARY_EXPORT CFunction : public CRowFunction
{
public:
  CLASS_INHERITOR(CRowFunction, CFunction);

  CFunction();
  CFunction(C_FUNCTION& that);
  CFunction(C_FUNCTION&& that);
  CFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID = NONE_ID, int32_t blockID = NONE_ID);
  virtual ~CFunction();
  //{
  void AppendParameter(int defineVariableID);
  //}
  //{
  CLASS_PROPERTY(vector<int>, _parameters, Parameters);
  CLASS_PROPERTY(vector<CScalar>, _arguments, Arguments);
  //}
  C_FUNCTION& operator=(C_FUNCTION& that);
  C_FUNCTION& operator=(C_FUNCTION&& that);

private:
  vector<int> _parameters;
  vector<CScalar> _arguments;
};

END_DOMINION_COMPILATION_ESSAY
