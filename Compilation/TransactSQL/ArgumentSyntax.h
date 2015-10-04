//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CArgumentSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CArgumentSyntax, C_ARGUMENT_SYNTAX);
class LIBRARY_EXPORT CArgumentSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CArgumentSyntax);

  CArgumentSyntax();
  CArgumentSyntax(C_ARGUMENT_SYNTAX& that);
  CArgumentSyntax(C_ARGUMENT_SYNTAX&& that);
  CArgumentSyntax(int32_t livingLine, WSTRING& parameterName, int32_t valueIndex, bool output);
  virtual ~CArgumentSyntax();

  CLASS_PROPERTY(wstring, _parameterName, ParameterName);
  CLASS_PROPERTY(int32_t, _valueIndex, ValueIndex);
  CLASS_PROPERTY(bool, _output, Output);

  C_ARGUMENT_SYNTAX& operator=(C_ARGUMENT_SYNTAX& that);

private:
  wstring  _parameterName;
  int32_t _valueIndex;
  bool _output;
};

END_DOMINION_COMPILATION_TRANSACTSQL
