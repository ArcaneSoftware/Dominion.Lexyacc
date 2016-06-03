//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//CUnacceptableWordException
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CUnacceptableWordException, C_UNACCEPTABLE_WORD_EXCEPTION);
class LIBRARY_EXPORT CUnacceptableWordException : public CException
{
public:
  CLASS_INHERITOR(CException, CUnacceptableWordException);

  inline static wstring MAKE_NOTE(WSTRING& context, WSTRING& unacceptable);

protected:
  CUnacceptableWordException();
public:
  CUnacceptableWordException(C_UNACCEPTABLE_WORD_EXCEPTION& that);
  CUnacceptableWordException(C_UNACCEPTABLE_WORD_EXCEPTION&& that);
  explicit CUnacceptableWordException(C_TROUBLESPOT& troublespot);
  virtual ~CUnacceptableWordException();

  C_UNACCEPTABLE_WORD_EXCEPTION& operator=(C_UNACCEPTABLE_WORD_EXCEPTION& that);
};

END_DOMINION_COMPILATION_SYNTAX
