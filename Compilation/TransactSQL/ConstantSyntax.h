//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CConstantSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CConstantSyntax, C_CONSTANT_SYNTAX);
class LIBRARY_EXPORT CConstantSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CConstantSyntax);

  CConstantSyntax();
  CConstantSyntax(C_CONSTANT_SYNTAX& that);
  CConstantSyntax(C_CONSTANT_SYNTAX&& that);
  CConstantSyntax(int32_t livingLine, C_SCALAR value);
  virtual ~CConstantSyntax();

  bool IsNil() const;
  EScalarType GetScalarType() const;

  CLASS_PROPERTY(CScalar, _value, Value);

  C_CONSTANT_SYNTAX& operator=(C_CONSTANT_SYNTAX& that);

private:
  CScalar _value;
};

END_DOMINION_COMPILATION_TRANSACTSQL
