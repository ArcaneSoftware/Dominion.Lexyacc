//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Native/Syntax/Dependence.h"

BEGIN_DOMINION_SYNTAX
//****************************************************************************************************************//
//CVariable
//
//****************************************************************************************************************//
CLASS_DECLARATION(CVariable, C_VARIABLE);
class LIBRARY_EXPORT CVariable : public CObject
{
public:
  CLASS_INHERITOR(CObject, CVariable);
  CVariable();
  CVariable(C_VARIABLE& that);
  CVariable(C_VARIABLE&& that);
  CVariable(WSTRING& name,
            int32_t initialValueIndex = NONE_INDEX,
            int32_t realValueIndex = NONE_INDEX,
            bool isArgument = false);
  virtual ~CVariable();

  bool IsNilValue() const;
  int32_t GetSuitedValueIndex() const;

  CLASS_PROPERTY(wstring, _name, Name);
  CLASS_PROPERTY(int32_t, _initialValueIndex, InitialValueIndex);
  CLASS_PROPERTY(int32_t, _realValueIndex, RealValueIndex);
  CLASS_PROPERTY(bool, _isArgument, IsArgument);

  C_VARIABLE& operator=(C_VARIABLE& that);

private:
  wstring _name;
  int32_t _initialValueIndex;
  int32_t _realValueIndex;
  bool _isArgument;
};

END_DOMINION_SYNTAX
