using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class Evalutor
  {
    public IEvaluative Create(int id, IBaseContext context)
    {
      var syntax = context.GetSyntax(id);

      if (syntax.SyntaxType == SyntaxTypeEnum.Scalar)
      {
        return new ScalarEvalutor(syntax as ScalarSyntax);
      }

      return null;
    }
  }
}
