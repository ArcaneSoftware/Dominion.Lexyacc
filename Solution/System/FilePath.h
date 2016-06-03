//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "System/Types.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CFilePath
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CFilePath, C_FILE_PATH);
class LIBRARY_EXPORT CFilePath : public CObject
{
public:
  CLASS_INHERITOR(CObject, CFilePath);

protected:
  CFilePath();
public:
  CFilePath(C_FILE_PATH& that);
  CFilePath(C_FILE_PATH&& that);
  CFilePath(WSTRING& path, wchar_t division);
  CFilePath(WSTRING& directory, WSTRING& filename, wchar_t division);
  virtual ~CFilePath();

protected:
  wstring ToDirectyString(size_t depth) const;
public:
  size_t Depth() const;
  bool Relative() const;
  wstring Path() const;
  wstring Filename() const;
  wstring Directory() const;
  wstring ParentDirectory() const;

  C_FILE_PATH& operator=(C_FILE_PATH& that);

private:
  vector<wstring> _directory;
  wchar_t _division;
  wstring _filename;
  bool _relative;
};

END_DOMINION
