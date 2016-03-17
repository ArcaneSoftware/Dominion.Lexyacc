using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public abstract class BaseEvalutor<TSyntax> where TSyntax : RawSyntax
  {
    public virtual Scalar Evaluate(TSyntax syntax, Context context)
    {
      throw new NotImplementedException();
    }
  }
}
