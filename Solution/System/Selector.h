//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "System/Base.h"
#include "System/Failure.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CSelector
//
//*****************************************************************************************************************//
template<typename TElement, typename TContainer>
class LIBRARY_EXPORT CSelector : public CObject
{
public:
  TYPEDEF(CSelector<TElement _COMMA TContainer>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);
  typedef const TElement T_ELEMENT;
  typedef const TContainer T_CONTAINER;
  typedef function<bool(TElement&)> FHave;

  CSelector()
  {
  }

  CSelector(CLASS& that) :
    CObject(that)
  {
  }

  CSelector(CLASS&& that) :
    CObject(that)
  {
  }

  virtual ~CSelector()
  {
  }

  vector<TElement> Execute(TContainer& container, FHave _Have_ = nullptr) const
  {
    vector<TElement> result;

    for (auto each : container)
    {
      if (_Have_ != nullptr)
      {
        if (_Have_(each))
        {
          result.push_back(each);
        }
      }
      else
      {
        result.push_back(each);
      }
    }

    return move(result);
  }

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    return *this;
  }
};

END_DOMINION
