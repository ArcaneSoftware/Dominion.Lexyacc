using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class ReturnEvalutor : Evalutor, IEvaluative
  {
    public ReturnEvalutor(ReturnSyntax syntax)
    {
      Syntax = syntax;
    }

    public ReturnSyntax Syntax
    {
      get;
      set;
    }

    Scalar IEvaluative.Reduce(Context context)
    {
      return CREATE(Syntax.ExpressionID, context).Reduce(context);
    }
  }
}
