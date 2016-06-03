using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion
{
  public static class EnumHelper<TEnum>
  {
    public static TEnum PARSE(string value)
    {
      return (TEnum)Enum.Parse(typeof(TEnum), value);
    }
  }
}
