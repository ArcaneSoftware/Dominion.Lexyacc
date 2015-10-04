%{
#include "Dominion/Compilation/Essay/Scanner.h"
#include "Dominion/Compilation/Essay/Producer.h"

using namespace Dominion::Compilation::Essay;

#undef YY_LIVING_LINE
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
%token Equal NotEqual Greater GreaterEqual Less LessEqual Match NotMatch And Or
%token If Else Var Return Function

%token <numeric> Numeric
%token <litera> Identifier
%token <litera> String
%token <boolean> Boolean

%type <node> PARAMETER PARAMETER_CHAIN ARGUMENT ARGUMENT_CHAIN DEFINE_FUNCTION DEFINE_FUNCTION_CHAIN
%type <node> ESSAY EXPRESSION SCALAR VARIABLE FUNCTION VARIABLE_PROPERTY VARIABLE_METHED
%type <node> STATEMENT BLOCK FLOW EXPRESS DEFINE_VARIABLE

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
#define YY_LIVING_LINE _scanner.Line()
#define YY_SOURCE_FILE _producer.GetFile()
#define YY_REDUCE(PRODUCTOR) if (PRODUCTOR.GetSuccessed()){yyval.node = PRODUCTOR.GetIndex();}else{YYABORT;}
%}
%%
SCALAR:
  Nil{
    
  }|
  Numeric{
    
  }|
  String{
    
  }|
  Boolean{
    
  };

EXPRESSION: {
  $$ = -1;
  }|
  SCALAR{
    $$ = $1;
  }|
  EXPRESSION '+' EXPRESSION {
    
  }|
  EXPRESSION '-' EXPRESSION {
    
  }|
  EXPRESSION '*' EXPRESSION {
    
  }|
  EXPRESSION '/' EXPRESSION {
    
  }|
  EXPRESSION Equal EXPRESSION {
    
  }|
  EXPRESSION NotEqual EXPRESSION {
    
  }|
  EXPRESSION Match EXPRESSION {
    
  }|
  EXPRESSION NotMatch EXPRESSION {
    
  }|
  EXPRESSION Greater EXPRESSION {
    
  }|
  EXPRESSION GreaterEqual EXPRESSION {
    
  }|
  EXPRESSION Less EXPRESSION {
    
  }|
  EXPRESSION LessEqual EXPRESSION {
    
  }|
  EXPRESSION And EXPRESSION {
    
  }|
  EXPRESSION Or EXPRESSION {
  }|
  '(' EXPRESSION ')' {
    $$ = $2;
  }|
  VARIABLE {
    
  }|
  FUNCTION {
    
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
    
  };
  
FUNCTION:
  Identifier '(' ARGUMENT_CHAIN ')' {
    
  };

DEFINE_VARIABLE:
  Var Identifier ';'{
    
  }|
  Var Identifier '=' EXPRESSION ';' {
    
  };
  
VARIABLE_PROPERTY:
  VARIABLE '.' Identifier {
  }
  
VARIABLE_METHED:
  VARIABLE '.' Identifier '(' ARGUMENT_CHAIN ')' {
    
  }
  
ASSIGN_VARIABLE:
  Identifier '=' EXPRESSION ';' {
    
  };
  
DEFINE_FUNCTION:
  Function Identifier
  {
    int y = 0;/*Set space*/
  }
  '(' PARAMETER_CHAIN ')' '{' BLOCK '}' ';' {
    
  };
  
EXPRESS:
  EXPRESSION ';' {

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
  DEFINE_VARIABLE {
    
  }|
  ASSIGN_VARIABLE {
    
  }|
  EXPRESS {
    
  };
  
BLOCK:{
    $$ = -1;
  }| STATEMENT BLOCK {
	};

ESSAY:
  DEFINE_FUNCTION_CHAIN {
    
  };

%%
void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}
