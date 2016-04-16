using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class DefineVariableEvalutor : Evalutor, IEvaluative
  {
    public DefineVariableEvalutor(DefineVariableSyntax syntax)
    {
      Syntax = syntax;
    }

    public DefineVariableSyntax Syntax
    {
      get;
      set;
    }

    Scalar IEvaluative.Reduce(IBaseContext context)
    {
      var identifier = new Identifier
      {
        LiveNamespace = Syntax.LiveNamespace,
        Name = Syntax.Name
      };
      var varible = context.GetVariable(identifier);

      varible.RealValueID = varible.InitialValueID;

      return Create(varible.InitialValueID, context).Reduce(context);
    }
  }
}
