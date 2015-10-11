//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//ESyntaxType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT ESyntaxType
{
  Empty = 0,
  //Reference
  Scalar,
  Variable,
  Function,
  //Composition
  Chain,
  Operation,
  Parameter,
  Argurment,
  //Statement
  Block,
  Flow,
  DefineVariable,
  AssignVariable,
  DefineFunction,
  Return,
};
//*****************************************************************************************************************//
//CESyntaxType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CESyntaxType, CE_SYNTAX_TYPE);
class LIBRARY_EXPORT CESyntaxType : public CEnum<ESyntaxType>
{
public:
  CLASS_INHERITOR(CEnum<ESyntaxType>, CESyntaxType);

  static map<wstring, ESyntaxType> STRING_TO_VALUE();
  static map<ESyntaxType, wstring> VALUE_TO_STRING();

  CESyntaxType();
  CESyntaxType(CE_SYNTAX_TYPE& that);
  CESyntaxType(CE_SYNTAX_TYPE&& that);
  explicit CESyntaxType(ESyntaxType value);
  explicit CESyntaxType(WSTRING& valueString);
  virtual ~CESyntaxType();

  CE_SYNTAX_TYPE& operator=(CE_SYNTAX_TYPE& that);
};


enum class LIBRARY_EXPORT EIdentifierType
{
  Variable,
  Function,
};

END_DOMINION_COMPILATION_ESSAY
