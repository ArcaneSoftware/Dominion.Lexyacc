using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class ScalarEvalutor : Evalutor, IEvaluative
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

    Scalar IEvaluative.Reduce(IBaseContext context)
    {
      return Syntax.Value;
    }
  }
}
