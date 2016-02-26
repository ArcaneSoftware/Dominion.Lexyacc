using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Dominion.Compilation.Essay;
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

      int a = context.SyntaxAmount;

      for (int i = 0; i < context.SyntaxAmount; i++)
      {
        var syntax = context.GetSyntax(i);
      }

      // string source = "naming Business{var a = 0; function Main(var x){return a + 32}}";
    }
  }
}
