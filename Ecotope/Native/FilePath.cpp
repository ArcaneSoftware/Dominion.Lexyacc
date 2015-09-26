//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "FilePath.h"
#include "Dominion/Ecotope/Native/Failure.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CFilePath
//*******************************************************************************************************************//
CFilePath::CFilePath()
{
}

CFilePath::CFilePath(C_FILE_PATH& that) :
  CObject(that),
  _directory(that._directory),
  _filename(that._filename),
  _division(that._division),
  _relative(that._relative)
{
}

CFilePath::CFilePath(C_FILE_PATH&& that) :
  CObject(that),
  _directory(move(that._directory)),
  _filename(move(that._filename)),
  _division(move(that._division)),
  _relative(move(that._relative))
{
}

CFilePath::CFilePath(WSTRING& path, wchar_t division) :
  _division(division)
{
  CEmptyStringException::CHECK(path, CTroublespot(THIS_SCENE(L"CFilePath"), L"path", NSTR, L"File path is empty"));

  auto has_filename = SString::TAIL(path) != _division;
  auto items = SString::SPLIT(path, division);

  if (has_filename)
  {
    _filename = items[items.size() - 1];

    if (items.size() == 1)
    {
      _directory.push_back(L".");
      _relative = true;
    }
    else
    {
      _relative = SString::HEAD(path) == L'.';

      for (int i = 0; i < items.size() - 1; i++)
      {
        if (!items[i].empty())
        {
          _directory.push_back(items[i]);
        }
      }
    }
  }
  else
  {
    _relative = SString::HEAD(path) == L'.';

    for (auto item : items)
    {
      if (!item.empty())
      {
        _directory.push_back(item);
      }
    }
  }
}

CFilePath::CFilePath(WSTRING& directory, WSTRING& filename, wchar_t division) throw() :
  _division(division)
{
  auto scene = THIS_SCENE(L"CFilePath");

  if (directory.empty() && filename.empty())
  {
    auto troublespot = CTroublespot(scene, L"directory,filename", NSTR, L"Both directory and filename are empty");

    throw CEmptyStringException(troublespot);
  }

  _filename = filename;

  wstring directory_string(directory);

  if (directory_string.empty())
  {
    directory_string.append(L".");
  }

  _relative = SString::HEAD(directory_string) == L'.';

  auto items = SString::SPLIT(directory_string, division);

  for (auto item : items)
  {
    if (!item.empty())
    {
      _directory.push_back(item);
    }
  }
}

CFilePath::~CFilePath()
{
}

wstring CFilePath::ToDirectyString(size_t depth) const
{
  wstring directy;

  for (auto each : _directory)
  {
    if (depth == 0)
    {
      break;
    }

    directy.append(each);
    directy.push_back(_division);

    depth--;
  }

  return directy;
}

size_t CFilePath::Depth() const
{
  return _directory.size();
}

bool CFilePath::Relative() const
{
  return _relative;
}

wstring CFilePath::Path() const
{
  wstring path = ToDirectyString(Depth());

  if (!_filename.empty())
  {
    path.append(_filename);
  }

  return move(path);
}

wstring CFilePath::Filename() const
{
  return _filename;
}

wstring CFilePath::Directory() const
{
  return move(ToDirectyString(Depth()));
}

wstring CFilePath::ParentDirectory() const
{
  wstring directy = ToDirectyString(Depth() - 1);

  return move(directy);
}

C_FILE_PATH& CFilePath::operator=(C_FILE_PATH& that)
{
  CObject::operator=(that);

  _directory = that._directory;
  _filename = that._filename;
  _division = that._division;
  _relative = that._relative;

  return *this;
}