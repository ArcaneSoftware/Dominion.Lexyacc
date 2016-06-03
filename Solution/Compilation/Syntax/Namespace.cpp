//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Namespace.h"

using namespace Dominion::Compilation::Syntax;
//*******************************************************************************************************************//
//CNamespace
//*******************************************************************************************************************//
CNamespace::CNamespace()
{
}

CNamespace::CNamespace(C_NAMESPACE& that) :
  CObject(that),
  _structure(that._structure)
{
}

CNamespace::CNamespace(C_NAMESPACE&& that) :
  CObject(that),
  _structure(move(that._structure))
{
}

CNamespace::CNamespace(const vector<wstring>& structure) :
  _structure(structure)
{
}

CNamespace::CNamespace(const vector<wstring>&& structure) :
  _structure(move(structure))
{
}

CNamespace::CNamespace(WSTRING& naming)
{
  Construct(naming);
}

CNamespace::~CNamespace()
{
}

void CNamespace::Construct(WSTRING& naming)
{
  if (!naming.empty())
  {
    auto list = SString::SPLIT(naming, L'.');

    for (auto space : list)
    {
      Add(space);
    }
  }
}

wstring CNamespace::ToString() const
{
  CWStringBuilder builder;

  for (int i = 0; i < _structure.size(); i++)
  {
    builder << _structure[i];

    if (i != _structure.size() - 1)
    {
      builder << L".";
    }
  }

  return builder.Output();
}

bool CNamespace::Empty() const
{
  return _structure.size() == 0;
}

size_t CNamespace::Depth() const
{
  return _structure.size();
}

void CNamespace::Add(WSTRING& naming)
{
  _structure.push_back(naming);
}

CNamespace CNamespace::GetParent() const
{
  if (!_structure.empty())
  {
    vector<wstring> structure;

    structure.insert(structure.begin(), _structure.begin(), _structure.end() - 1);

    return move(CNamespace(structure));
  }
  else
  {
    return move(CNamespace());
  }
}

C_NAMESPACE& CNamespace::operator=(C_NAMESPACE& that)
{
  CObject::operator=(that);

  _structure = that._structure;

  return *this;
}