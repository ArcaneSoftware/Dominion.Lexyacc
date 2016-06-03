//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//CProductor
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
  explicit CProductor(bool successed, int32_t id);
  virtual ~CProductor();

  CLASS_PROPERTY(bool, _successed, Successed);
  CLASS_PROPERTY(int32_t, _id, ID);

  C_PRODUCTOR& operator=(C_PRODUCTOR& that);

protected:
  bool _successed;
  int32_t _id;
};

END_DOMINION_COMPILATION_SYNTAX
