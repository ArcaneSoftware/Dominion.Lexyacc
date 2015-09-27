//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/StringBuilder.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CStringTemplate
//
//*****************************************************************************************************************//
template<typename TChar>
class LIBRARY_EXPORT CStringTemplate : public CObject
{
public:
  TYPEDEF(CStringTemplate<TChar>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);

  CStringTemplate()
  {
  }

  CStringTemplate(CLASS& that) :
    CObject(that),
    _template(that._template),
    _index(that._index)
  {
  }

  CStringTemplate(CLASS&& that) :
    CObject(that),
    _template(move(that._template)),
    _index(move(that._index))
  {
  }

  CStringTemplate(const basic_string<TChar>& aTemplate) :
    _template(aTemplate),
    _index(0)
  {
  }

  virtual ~CStringTemplate()
  {
  }

  void Initialize(WSTRING& initial_template = NSTR)
  {
    if (!initial_template.empty())
    {
      _template = initial_template;
    }

    _index = 0;
  }

  wstring Format() const
  {
    return _template.substr(_index);
  }

  template<typename TValue, typename...TArguments>
  wstring Format(TValue value, TArguments... arguments)
  {
    CStringBuilder<TChar> builder;

    while (_template[_index])
    {
      if (_template[_index] == (TChar)L'%' && _template[_index + 1] == (TChar)L'x')
      {
        builder << value;
        _index += 2;
        builder << Format(arguments...);

        return move(builder.Output());
      }

      builder << _template[_index++];
    }

    return builder.Output();
  }

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    return *this;
  }

private:
  basic_string<TChar> _template;
  size_t _index;
};
typedef CStringTemplate<wchar_t> CWStringTemplate;

END_DOMINION
