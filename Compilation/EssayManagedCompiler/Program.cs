using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Dominion.Compilation.Essay;

namespace EssayManagedCompiler
{
  class Program
  {
    static void Main(string[] args)
    {
      var engine = new SyntaxEngine();

      string source = "naming Business{var a = 0; function Main(var x){return a + 32}}";
    }
  }
}
