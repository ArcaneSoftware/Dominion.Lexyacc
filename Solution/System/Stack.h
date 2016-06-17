//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Object.h"
#include "System/Comparable.h"
#include "System/StringBuilder.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CStack
//
//***********************************************************************************************************************************************************************************//
template<typename TElement>
class LIBRARY_EXPORT CStack : public CObject
{
public:
  TYPEDEF(CStack<TElement>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);
  typedef const TElement T_ELEMENT;

  CStack()
  {
  }

  CStack(CLASS& that) :
    CObject(that),
    _core(that._core)
  {
  }

  CStack(CLASS&& that) :
    CObject(that),
    _core(move(that._core))
  {
  }

  virtual ~CStack()
  {
  }

  virtual void Push(T_ELEMENT& element)
  {
    _core.push_back(element);
  }

  virtual void Pop()
  {
    _core.pop_back();
  }

  virtual size_t Depth() const
  {
    return _core.size();
  }

  virtual bool Empty() const
  {
    return _core.empty();
  }

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _core = that._core;

    return *this;
  }

  CLASS& operator=(CLASS&& that)
  {
    CObject::operator=(that);

    _core = move(that._core);

    return *this;
  }

protected:
  vector<TElement> _core;
};
END_DOMINION
