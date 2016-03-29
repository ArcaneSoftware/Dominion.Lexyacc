using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Dominion.Compilation.Essay;
using Dominion.Compilation.Syntax;
using System.IO;

namespace EssayManagedCompiler
{
  class Program
  {
    static void Main(string[] args)
    {
      var engine = new SyntaxEngine();
      var file = new FileInfo("../../Scripts/1.essay");

      var context = engine.Start(file, false);

      var a = context.GetVariable("Business.a").Available;


      // string source = "naming Business{var a = 0; function Main(var x){return a + 32}}";
    }
  }
}
