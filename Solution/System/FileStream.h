//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Types.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CFileStream
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CFileStream, C_FILE_STREAM);
class LIBRARY_EXPORT CFileStream : public CObject
{
public:
  CLASS_INHERITOR(CObject, CFileStream);

  CFileStream();
  explicit CFileStream(WSTRING& path);
  virtual ~CFileStream();
  //{
  virtual void Open(EStdIosMode mode);
  virtual void Close();
  virtual bool IsOpened();
  //}
  CLASS_PROPERTY(wstring, _path, Path);
  CLASS_PROPERTY(EStdIosMode, _mode, Mode);

  C_FILE_STREAM& operator=(C_FILE_STREAM& that);
  C_FILE_STREAM& operator=(C_FILE_STREAM&& that);

private:
  wstring _path;
  EStdIosMode _mode;
protected:
  wfstream _handler;
};

END_DOMINION
