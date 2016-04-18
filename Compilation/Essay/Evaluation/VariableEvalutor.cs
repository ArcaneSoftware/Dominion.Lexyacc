using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class VariableEvalutor : Evalutor, IEvaluative
  {
    public VariableEvalutor(VariableSyntax syntax)
    {
      Syntax = syntax;
    }

    public VariableSyntax Syntax
    {
      get;
      set;
    }

    Scalar IEvaluative.Reduce(Context context)
    {
      var identifier = new Identifier
      {
        LiveNamespace = Syntax.LiveNamespace,
        Name = Syntax.Name
      };
      var varible = context.GetVariable(identifier);

      return CREATE(varible.RealValueID, context).Reduce(context);
    }
  }
}
