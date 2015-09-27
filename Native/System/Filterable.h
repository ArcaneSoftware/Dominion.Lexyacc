//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Atom.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//IFilterable
//
//*****************************************************************************************************************//
template<typename TSubject, typename TResult, typename TFHave = function<bool(const TSubject&)>>
struct LIBRARY_EXPORT IFilterable
{
  virtual TResult Select(TFHave have) const = 0;
};

END_DOMINION
