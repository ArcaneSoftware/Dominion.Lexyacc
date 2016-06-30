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
  void AppendParameterID(int32_t parameterID);
  void AppendParameter(WSTRING& parameter);
  int32_t AppendArgumentID(int32_t argumentID);
  int32_t GetParameterCount() const;
  //}
  //{
  CLASS_PROPERTY(vector<int32_t>, _parameterIDs, ParameterIDs);
  CLASS_PROPERTY(vector<int32_t>, _argumentIDs, ArgumentIDs);
  //}
  C_FUNCTION& operator=(C_FUNCTION& that);
  C_FUNCTION& operator=(C_FUNCTION&& that);

private:
  vector<int32_t> _parameterIDs;
  vector<int32_t> _argumentIDs;
  vector<wstring> _parameters;
};

END_DOMINION_COMPILATION_ESSAY
