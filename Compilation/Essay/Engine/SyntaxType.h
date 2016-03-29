//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Engine/Dependence.h"

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
//CSyntaxTypeEnum
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CSyntaxTypeEnum, CE_SYNTAX_TYPE);
class LIBRARY_EXPORT CSyntaxTypeEnum : public CEnum<ESyntaxType>
{
public:
  CLASS_INHERITOR(CEnum<ESyntaxType>, CSyntaxTypeEnum);

  static map<wstring, ESyntaxType> STRING_TO_VALUE();
  static map<ESyntaxType, wstring> VALUE_TO_STRING();

  CSyntaxTypeEnum();
  CSyntaxTypeEnum(CE_SYNTAX_TYPE& that);
  CSyntaxTypeEnum(CE_SYNTAX_TYPE&& that);
  explicit CSyntaxTypeEnum(ESyntaxType value);
  explicit CSyntaxTypeEnum(WSTRING& valueString);
  virtual ~CSyntaxTypeEnum();

  CE_SYNTAX_TYPE& operator=(CE_SYNTAX_TYPE& that);
};



END_DOMINION_COMPILATION_ESSAY
