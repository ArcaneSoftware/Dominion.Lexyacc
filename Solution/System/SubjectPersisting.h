//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//ISubjectPersisting
//
//***********************************************************************************************************************************************************************************//
template<typename TSubject>
struct LIBRARY_EXPORT ISubjectPersisting
{
  virtual int32_t Wirte(const TSubject& subject) const = 0;
  virtual TSubject Read() const = 0;
};

END_DOMINION
