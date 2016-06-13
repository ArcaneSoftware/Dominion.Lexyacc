//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CScalarSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CScalarSyntax, C_SCALAR_SYNTAX);
class LIBRARY_EXPORT CScalarSyntax : public CBaseSyntax
{
public:
  CLASS_INHERITOR(CBaseSyntax, CScalarSyntax);

  CScalarSyntax();
  CScalarSyntax(C_SCALAR_SYNTAX& that);
  CScalarSyntax(C_SCALAR_SYNTAX&& that);
  CScalarSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, C_SCALAR& value);
  virtual ~CScalarSyntax();

  bool IsNil() const;
  EScalarType GetScalarType() const;

  //CScalar Reduce(CContext context);

  CLASS_PROPERTY(CScalar, _value, Value);

  C_SCALAR_SYNTAX& operator=(C_SCALAR_SYNTAX& that);

private:
  CScalar _value;
};

END_DOMINION_COMPILATION_ESSAY
