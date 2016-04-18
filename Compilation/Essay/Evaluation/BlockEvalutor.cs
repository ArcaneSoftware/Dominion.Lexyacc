using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dominion.Compilation.Essay.Evaluation
{
  public class BlockEvalutor : Evalutor, IEvaluative
  {
    public BlockEvalutor(BlockSyntax syntax)
    {
      Syntax = syntax;
    }

    public BlockSyntax Syntax
    {
      get;
      set;
    }

    Scalar IEvaluative.Reduce(Context context)
    {
      return Syntax.BlockID == IDConst.NONE ?
             CREATE(Syntax.StatementID, context).Reduce(context) :
             CREATE(Syntax.BlockID, context).Reduce(context);
    }
  }
}
