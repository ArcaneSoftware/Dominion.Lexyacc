//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Ecotope/Native/Types.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CFileStreamException
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CFileStreamException, C_FILE_STREAM_EXCEPTION);
class LIBRARY_EXPORT CFileStreamException : public CException
{
public:
  CLASS_INHERITOR(CException, CFileStreamException);

protected:
  CFileStreamException();
public:
  CFileStreamException(C_FILE_STREAM_EXCEPTION& that);
  CFileStreamException(C_FILE_STREAM_EXCEPTION&& that);
  CFileStreamException(C_SCENE& scene, WSTRING& file, WSTRING& arguments = NSTR, WSTRING& notes = NSTR);
};

END_DOMINION
