//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//CIdentifier
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CNamespace, C_NAMESPACE);
class LIBRARY_EXPORT CNamespace : public CObject
{
public:
  CLASS_INHERITOR(CObject, CNamespace);

  CNamespace();
  CNamespace(C_NAMESPACE& that);
  CNamespace(C_NAMESPACE&& that);
  CNamespace(const vector<wstring>& structure);
  CNamespace(const vector<wstring>&& structure);
  explicit CNamespace(WSTRING& naming);
  virtual ~CNamespace();

protected:
  void Construct(WSTRING& naming);

public:
  //{CObject
  virtual wstring ToString() const override;
  //}
  bool Empty() const;
  size_t Depth() const;
  void Add(WSTRING& space);
  CNamespace GetParent() const;

  C_NAMESPACE& operator=(C_NAMESPACE& that);

private:
  vector<wstring> _structure;
};

END_DOMINION_COMPILATION_SYNTAX
