//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/Syntax/Dependence.h"

BEGIN_DOMINION_SYNTAX
//*****************************************************************************************************************//
//CParameter
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CProductor, C_PRODUCTOR);
class LIBRARY_EXPORT CProductor : public CObject
{
public:
  CLASS_INHERITOR(CObject, CProductor);

  CProductor();
  CProductor(C_PRODUCTOR& that);
  CProductor(C_PRODUCTOR&& that);
  explicit CProductor(bool successed, int32_t index);
  virtual ~CProductor();

  CLASS_PROPERTY(bool, _successed, Successed);
  CLASS_PROPERTY(int32_t, _index, Index);

  C_PRODUCTOR& operator=(C_PRODUCTOR& that);

protected:
  bool _successed;
  int32_t _index;
};

END_DOMINION_SYNTAX
