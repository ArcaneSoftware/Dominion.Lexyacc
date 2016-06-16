//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Exception.h"

BEGIN_DOMINION
//************************************************************************************************************//
//CCaughtException
//
//************************************************************************************************************//
CLASS_DECLARATION(CCaughtException, C_CAUGHT_EXCEPTION);
class LIBRARY_EXPORT CCaughtException : public CException
{
public:
  CLASS_INHERITOR(CException, CCaughtException);

  inline static void THROW(C_SCENE& scene, C_EXCEPTION& cause, WSTRING& notes = NSTR) throw();

  CCaughtException();
  CCaughtException(C_SCENE& scene, C_EXCEPTION& cause, WSTRING& notes);

public:
  C_CAUGHT_EXCEPTION& operator=(C_CAUGHT_EXCEPTION& that);
};

END_DOMINION
