using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class ScalarEvalutor : IReducible
  {
    public ScalarEvalutor(ScalarSyntax syntax)
    {
      Syntax = syntax;
    }

    public ScalarSyntax Syntax
    {
      get;
      set;
    }

    Scalar IReducible.Reduce(IBaseContext context)
    {
      return Syntax.Value;
    }
  }
}
