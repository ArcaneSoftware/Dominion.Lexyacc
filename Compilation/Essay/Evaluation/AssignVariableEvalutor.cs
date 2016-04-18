using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class AssignVariableEvalutor : Evalutor, IEvaluative
  {
    public AssignVariableEvalutor(AssignVariableSyntax syntax)
    {
      Syntax = syntax;
    }

    public AssignVariableSyntax Syntax
    {
      get;
      set;
    }

    Scalar IEvaluative.Reduce(Context context)
    {
      var syntax = context.GetSyntax(Syntax.VariableID);
      var identifier = syntax.GetIdentifier();

      bool successed = context.SetVariableValue(identifier, Syntax.ValueID);

      return CREATE(Syntax.VariableID, context).Reduce(context);
    }
  }
}
