//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "FileStream.h"
#include "System/Failure.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CFileStream
//***********************************************************************************************************************************************************************************//
CFileStream::CFileStream()
{
}

CFileStream::CFileStream(WSTRING& path) :
  _path(path)
{
}

CFileStream::~CFileStream()
{
  if (_handler.is_open())
  {
    _handler.close();
  }
}

void CFileStream::Open(EStdIosMode mode)
{
  if (_handler.is_open())
  {
    _handler.close();
  }
  else
  {
    _mode = mode;
    _handler.open(_path, mode);
  }
}

void CFileStream::Close()
{
  _handler.close();
}

bool CFileStream::IsOpened()
{
  return _handler.is_open();
}

C_FILE_STREAM& CFileStream::operator=(C_FILE_STREAM& that)
{
  throw CInvokingException(CTroublespot(THIS_SCENE(L"operator="),
                                        L"that", CInvokingException::MAKE_NOTE(L"operator="),
                                        NSTR));

  return *this;
}
