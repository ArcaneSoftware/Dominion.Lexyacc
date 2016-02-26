using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation.Meili
{
  public abstract class Evaluator<TResult>
  {
    public Evaluator()
    {

    }

    public Context Context
    {
      get;
      set;
    }

    public virtual TResult Evaluate(RawSyntax syntax)
    {
      throw new NotImplementedException();
    }
  }
}
