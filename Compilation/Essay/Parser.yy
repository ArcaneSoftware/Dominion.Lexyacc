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
%token Naming If Else Var Return Function Object

%token <numeric> Numeric
%token <litera> Identifier
%token <litera> String
%token <boolean> Boolean

%type <node> PARAMETER PARAMETER_CHAIN ARGUMENT ARGUMENT_CHAIN DEFINE_FUNCTION DEFINE_FUNCTION_CHAIN
%type <node> ESSAY EXPRESSION SCALAR VARIABLE FUNCTION VARIABLE_PROPERTY VARIABLE_METHED
%type <node> BLOCK STATEMENT FLOW DEFINE_VARIABLE

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
	{
		$$ = -1;
  }|
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
  }|
  VARIABLE_PROPERTY {
    
  }|
  VARIABLE_METHED {
    
  };
  
ARGUMENT:
  EXPRESSION {
    
  };
  
ARGUMENT_CHAIN:
  ARGUMENT {
    
  }|
  ARGUMENT ARGUMENT_CHAIN {
    
  };
  
PARAMETER: {
  
  }|
  Var Identifier {
  };
  
PARAMETER_CHAIN:
  PARAMETER {
  
  }|
  PARAMETER ',' PARAMETER_CHAIN {
    
  };
  
VARIABLE:
  Identifier {
		auto syntax = CVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, *$1);
		auto result = _producer.Variable(syntax);
    
		YY_REDUCE(result);
  };
  
FUNCTION:
  Identifier '(' ARGUMENT_CHAIN ')' {
    
  };

DEFINE_VARIABLE:
  Var Identifier
	{
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, EVariableType::Atom, *$2, NONE_ID);
		auto result = _producer.DefineVariable(syntax);

		YY_REDUCE(result);
  }|
  Var Identifier '=' EXPRESSION
	{
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, EVariableType::Atom, *$2, $4);
		auto result = _producer.DefineVariable(syntax);

		YY_REDUCE(result);
  };
  
VARIABLE_PROPERTY:
  VARIABLE '.' Identifier {
  }
  
VARIABLE_METHED:
  VARIABLE '.' Identifier '(' ARGUMENT_CHAIN ')' {
    
  }
  
ASSIGN_VARIABLE:
  VARIABLE '=' EXPRESSION
	{
    auto syntax = CAssignVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, $1, $3);
		auto result = _producer.AssignVariable(syntax);

		YY_REDUCE(result);
  };
  
DEFINE_FUNCTION:
  Function Identifier
  {
    _producer.PushNaming(*$2);
  }
  '(' PARAMETER_CHAIN ')' '{' BLOCK '}' ';' {
    
  };
  
FLOW:
  If '(' EXPRESSION ')' {
  };
  
DEFINE_FUNCTION_CHAIN:
  DEFINE_FUNCTION {
  
  }|
  DEFINE_FUNCTION DEFINE_FUNCTION_CHAIN {
    
  };
  
STATEMENT:
  DEFINE_VARIABLE ';' {
    $$ = $1;
  }|
  ASSIGN_VARIABLE ';' {
    $$ = $1;
  }|
  EXPRESSION ';'{
    $$ = $1;
  };
  
BLOCK:
	{
    $$ = NONE_ID;
  }| STATEMENT BLOCK
	{
		auto syntax = CBlockSyntax(YY_LIVING_LINE, $1, $2);
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
		_producer.SetEntry($1);
	};

%%
void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}
