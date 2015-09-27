//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/FileStream.h"
#include "Dominion/Native/System/SubjectPersisting.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CSubjectFileStream
//
//*****************************************************************************************************************//
template<typename TSubject>
class LIBRARY_EXPORT CSubjectFileStream :
  public CFileStream,
  public ISubjectPersisting<TSubject>
{
public:
  TYPEDEF(CSubjectFileStream<TSubject>, Class, CLASS);
  CLASS_INHERITOR(CFileStream, Class);

public:
  CSubjectFileStream()
  {
  }

  CSubjectFileStream(WSTRING& path) :
    CFileStream(path)
  {
  }

  virtual ~CSubjectFileStream()
  {
  }

  virtual int32_t Wirte(const TSubject& subject) const override
  {
    throw CAbstractMethodException(THIS_SCENE(L"Wirte"));
  }

  virtual TSubject Read() const override
  {
    throw CAbstractMethodException(THIS_SCENE(L"Read"));
  }
};

END_DOMINION
