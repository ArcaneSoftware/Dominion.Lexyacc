//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Atom.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//IComparable
//
//*****************************************************************************************************************//
template <typename TSubject>
struct LIBRARY_EXPORT IComparable
{
  virtual bool operator>(const TSubject& that) const = 0;
  virtual bool operator<(const TSubject& that) const = 0;
  virtual bool operator>=(const TSubject& that) const = 0;
  virtual bool operator<=(const TSubject& that) const = 0;
};

END_DOMINION
