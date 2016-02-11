%{
#include "Dominion/Compilation/Essay/Scanner.h"
#include "Dominion/Compilation/Essay/Producer.h"

using namespace Dominion::Compilation::Essay;

#undef YY_LIVE_LINE
#undef YY_LIVE_NAMESPACE
#undef YY_SOURCE_FILE
#undef YY_REDUCE
%}

%require "2.3"
%debug
%start ESSAY
%skeleton "lalr1.cc"
%name-prefix = "Dominion::Compilation::Essay"
%define "parser_class_name" "CParser"
%locations
%parse-param{ class CScanner& _scanner }
%parse-param{ class CProducer& _producer }

%union
{
  double numeric;
  wstring* litera;
  bool boolean;
  int32_t node;
}

%token _EOF_ 0
%token EOL
%token Nil
%token Equal NotEqual Greater GreaterEqual Less LessEqual Match NotMatch And Or Xor
%token Naming If Else Var Return Function Object Public Private New Delete

%token <numeric> Numeric
%token <litera> Identifier
%token <litera> String
%token <boolean> Boolean

%type <node> ESSAY
%type <node> ACCESS EXPRESSION SCALAR VARIABLE FUNCTION PARAMETER PARAMETER_CHAIN ARGUMENT ARGUMENT_CHAIN DEFINE_REFERENCE DEFINE_REFERENCE_CHAN
%type <node> STATEMENT BLOCK FLOW DEFINE_VARIABLE DEFINE_FUNCTION ASSIGN_VARIABLE DEFINE_OBJECT

%left And Or
%left Equal NotEqual Match NotMatch
%left Greater GreaterEqual Less LessEqual
%left '+' '-'
%left '*' '/' '%'
%right '!'
%nonassoc UMINUS

%destructor{delete $$;} String

%{
#ifdef yylex
#undef yylex
#endif

#define yylex _scanner.Run
#define YY_LIVE_LINE _scanner.Line()
#define YY_LIVE_NAMESPACE _producer.GetLiveNamespace()
#define YY_SOURCE_FILE _producer.GetFile()
#define YY_REDUCE(PRODUCTOR) if (PRODUCTOR.GetSuccessed()){yyval.node = PRODUCTOR.GetID();}else{YYABORT;}
%}
%%
SCALAR:
  Nil
  {
    $$ = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar())).GetID();
  }|
  Numeric
  {
    $$ = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar($1))).GetID();
  }|
  String
  {
    $$ = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar(*$1))).GetID();
  }|
  Boolean
  {
    $$ = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar($1))).GetID();
  };

EXPRESSION:
  SCALAR
  {
    $$ = $1;
  }|
  EXPRESSION '+' EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Add, $3);
  	auto result = _producer.BinaryOperation(syntax);
  
  	YY_REDUCE(result);
  }|
  EXPRESSION '-' EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Subtract, $3);
  	auto result = _producer.BinaryOperation(syntax);
  
  	YY_REDUCE(result);
  }|
  EXPRESSION '*' EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Multiply, $3);
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }|
  EXPRESSION '/' EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Divide, $3);
  	auto result = _producer.BinaryOperation(syntax);
  
  	YY_REDUCE(result);
  }|
  EXPRESSION '%' EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Modulo, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION Equal EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Equal, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION NotEqual EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::NotEqual, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION Match EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Match, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION NotMatch EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::NotMatch, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION Greater EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Greater, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION GreaterEqual EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::GreaterEqual, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION Less EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Less, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION LessEqual EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::LessEqual, $3);
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }|
  EXPRESSION And EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::And, $3);
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }|
  EXPRESSION Or EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Or, $3);
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }|
  EXPRESSION Xor EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, EOperationType::Xor, $3);
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }|
  '!' EXPRESSION
  {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, NONE_ID, EOperationType::Not, $2);
    auto result = _producer.UnaryOperation(syntax);
    
    YY_REDUCE(result);
  }|
  '(' EXPRESSION ')'
  {
    $$ = $2;
  }|
  VARIABLE
  {
    $$ = $1;
  }|
  FUNCTION
  {
    $$ = $1;
  };

ACCESS:
  {
    $$ = 0;
  }|
  Public
  {
    $$ = 1;
  }|
  Private
  {
    $$ = 0;
  };

PARAMETER:
  {
    $$ = -1;
  }|DEFINE_VARIABLE
  {
    $$ = $1;
  };
  
ARGUMENT:
  {
    $$ = -1;
  }|EXPRESSION
  {
    $$ = $1;
  };
  
ARGUMENT_CHAIN:
  ARGUMENT
  {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, NONE_ID);
    auto result = _producer.Chain(syntax);
  
    YY_REDUCE(result); 
  }|
  ARGUMENT ',' ARGUMENT_CHAIN
  {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, $3);
    auto result = _producer.Chain(syntax);
  
    YY_REDUCE(result);
  };
DEFINE_REFERENCE:
  DEFINE_VARIABLE
  {
    $$ = $1;
  }|
  DEFINE_FUNCTION
  {
    $$ = $1;
  };

DEFINE_REFERENCE_CHAN:
  DEFINE_REFERENCE
  {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, NONE_ID);
    auto result = _producer.Chain(syntax);
    
    YY_REDUCE(result); 
  }|
  DEFINE_REFERENCE ',' DEFINE_REFERENCE_CHAN
  {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, $3);
    auto result = _producer.Chain(syntax);
    
    YY_REDUCE(result);
  };

PARAMETER_CHAIN:
  PARAMETER
  {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, NONE_ID);
    auto result = _producer.Chain(syntax);
    
    YY_REDUCE(result);
  }|
  PARAMETER ',' PARAMETER_CHAIN
  {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, $3);
    auto result = _producer.Chain(syntax);
    
    YY_REDUCE(result);
  };
  
VARIABLE:
  Identifier
  {
    auto syntax = CVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, *$1);
    auto result = _producer.Variable(syntax);
    
    YY_REDUCE(result);
  };
  
FUNCTION:
  Identifier '(' ARGUMENT_CHAIN ')'
  {
    auto syntax = CFunctionSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, *$1, $3);
    auto result = _producer.Function(syntax);

    YY_REDUCE(result);
  };

DEFINE_VARIABLE:
  ACCESS Var Identifier
  {
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (EAccessType)$1, EVariableType::Atom, *$3, NONE_ID);
    auto result = _producer.DefineVariable(syntax);
    
    YY_REDUCE(result);
  }|
  ACCESS Var Identifier '=' EXPRESSION
  {
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (EAccessType)$1, EVariableType::Atom, *$3, $5);
    auto result = _producer.DefineVariable(syntax);
    
    YY_REDUCE(result);
  };
    
ASSIGN_VARIABLE:
  VARIABLE '=' EXPRESSION
  {
    auto syntax = CAssignVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, $3);
    auto result = _producer.AssignVariable(syntax);
    
    YY_REDUCE(result);
  };
  
DEFINE_FUNCTION:
  ACCESS Function Identifier
  {
    _producer.PushNaming(*$3);
  }
  '(' PARAMETER_CHAIN ')' '{' BLOCK '}'
  {
    auto syntax = CDefineFunctionSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE.GetParent(), (EAccessType)$1, *$3, $6, $9);
    auto result = _producer.DefineFunction(syntax);
    
    YY_REDUCE(result);
    
    _producer.PopNaming();
  };

DEFINE_OBJECT:
  ACCESS Object Identifier
  {
    _producer.PushNaming(*$3);
  }
  '{' DEFINE_REFERENCE_CHAN '}'
  {
  }
  
FLOW:
  If '(' EXPRESSION ')' {
  };
  
STATEMENT:
  DEFINE_VARIABLE ';'
  {
    $$ = $1;
  }|
  ASSIGN_VARIABLE ';'
  {
    $$ = $1;
  }|
  DEFINE_FUNCTION
  {
    $$ = $1;
  }|
  EXPRESSION ';'
  {
    $$ = $1;
  };
  
BLOCK:
  {
    $$ = NONE_ID;
  }| STATEMENT BLOCK
  {
    auto syntax = CBlockSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, $2);
    auto result = _producer.Block(syntax);
    
    YY_REDUCE(result);
  };

ESSAY:
  Naming Identifier
  {
    _producer.PushNaming(*$2);
  }
  '{' BLOCK '}'
  {
  };

%%
void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}
