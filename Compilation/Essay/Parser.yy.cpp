
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

// Take the name prefix into account.
// <Perl> delete incorrect yylex

/* First part of user declarations.  */

/* Line 311 of lalr1.cc  */
#line 1 "./Parser.yy"

#include "Dominion/Compilation/Essay/Scanner.h"
#include "Dominion/Compilation/Essay/Producer.h"

using namespace Dominion::Compilation::Essay;

#undef YY_LIVE_LINE
#undef YY_LIVE_NAMESPACE
#undef YY_SOURCE_FILE
#undef YY_REDUCE


/* Line 311 of lalr1.cc  */
#line 56 "Parser.yy.cpp"


#include "Parser.yy.h"

/* User implementation prologue.  */

/* Line 317 of lalr1.cc  */
#line 56 "./Parser.yy"

#ifdef yylex
#undef yylex
#endif

#define yylex _scanner.Run
#define YY_LIVE_LINE _scanner.Line()
#define YY_LIVE_NAMESPACE _producer.GetLiveNamespace()
#define YY_SOURCE_FILE _producer.GetFile()
#define YY_REDUCE(PRODUCTOR) if (PRODUCTOR.GetSuccessed()){yyval.node = PRODUCTOR.GetID();}else{YYABORT;}


/* Line 317 of lalr1.cc  */
#line 78 "Parser.yy.cpp"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


/* Line 380 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

namespace Dominion { namespace Compilation { namespace Essay {

/* Line 380 of lalr1.cc  */
#line 147 "Parser.yy.cpp"
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  CParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  CParser::CParser (class CScanner& _scanner_yyarg, class CProducer& _producer_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      _scanner (_scanner_yyarg),
      _producer (_producer_yyarg)
  {
  }

  CParser::~CParser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  CParser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  CParser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  CParser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
        case 29: /* "String" */

/* Line 480 of lalr1.cc  */
#line 54 "./Parser.yy"
	{delete (yyvaluep->litera);};

/* Line 480 of lalr1.cc  */
#line 255 "Parser.yy.cpp"
	break;

	default:
	  break;
      }
  }

  void
  CParser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  CParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  CParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  CParser::debug_level_type
  CParser::debug_level () const
  {
    return yydebug_;
  }

  void
  CParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  int
  CParser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 2:

/* Line 678 of lalr1.cc  */
#line 70 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar())).GetID();
  }
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 74 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar((yysemantic_stack_[(1) - (1)].numeric)))).GetID();
  }
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 78 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar(*(yysemantic_stack_[(1) - (1)].litera)))).GetID();
  }
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 82 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar((yysemantic_stack_[(1) - (1)].boolean)))).GetID();
  }
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 88 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 92 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Add, (yysemantic_stack_[(3) - (3)].node));
  	auto result = _producer.BinaryOperation(syntax);
  
  	YY_REDUCE(result);
  }
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 99 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Subtract, (yysemantic_stack_[(3) - (3)].node));
  	auto result = _producer.BinaryOperation(syntax);
  
  	YY_REDUCE(result);
  }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 106 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Multiply, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 113 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Divide, (yysemantic_stack_[(3) - (3)].node));
  	auto result = _producer.BinaryOperation(syntax);
  
  	YY_REDUCE(result);
  }
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 120 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Modulo, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 127 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Equal, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 134 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::NotEqual, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 141 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Match, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 148 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::NotMatch, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 155 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Greater, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 162 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::GreaterEqual, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 169 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Less, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 176 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::LessEqual, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 183 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::And, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 190 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Or, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 197 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Xor, (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.BinaryOperation(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 204 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, NONE_ID, EOperationType::Not, (yysemantic_stack_[(2) - (2)].node));
    auto result = _producer.UnaryOperation(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 211 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(3) - (2)].node);
  }
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 215 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 219 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 224 "./Parser.yy"
    {
    (yyval.node) = 0;
  }
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 228 "./Parser.yy"
    {
    (yyval.node) = 1;
  }
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 232 "./Parser.yy"
    {
    (yyval.node) = 0;
  }
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 237 "./Parser.yy"
    {
    (yyval.node) = -1;
  }
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 240 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 245 "./Parser.yy"
    {
    (yyval.node) = -1;
  }
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 248 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 254 "./Parser.yy"
    {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(1) - (1)].node), NONE_ID);
    auto result = _producer.Chain(syntax);
  
    YY_REDUCE(result); 
  }
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 261 "./Parser.yy"
    {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.Chain(syntax);
  
    YY_REDUCE(result);
  }
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 295 "./Parser.yy"
    {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(1) - (1)].node), NONE_ID);
    auto result = _producer.Chain(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 302 "./Parser.yy"
    {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.Chain(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 311 "./Parser.yy"
    {
    auto syntax = CVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, *(yysemantic_stack_[(1) - (1)].litera));
    auto result = _producer.Variable(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 320 "./Parser.yy"
    {
    auto syntax = CFunctionSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, *(yysemantic_stack_[(4) - (1)].litera), (yysemantic_stack_[(4) - (3)].node));
		auto result = _producer.Function(syntax);

		YY_REDUCE(result);
  }
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 329 "./Parser.yy"
    {
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (EAccessType)(yysemantic_stack_[(3) - (1)].node), EVariableType::Atom, *(yysemantic_stack_[(3) - (3)].litera), NONE_ID);
    auto result = _producer.DefineVariable(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 336 "./Parser.yy"
    {
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (EAccessType)(yysemantic_stack_[(5) - (1)].node), EVariableType::Atom, *(yysemantic_stack_[(5) - (3)].litera), (yysemantic_stack_[(5) - (5)].node));
    auto result = _producer.DefineVariable(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 345 "./Parser.yy"
    {
    auto syntax = CAssignVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node));
    auto result = _producer.AssignVariable(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 354 "./Parser.yy"
    {
    _producer.PushNaming(*(yysemantic_stack_[(3) - (3)].litera));
  }
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 358 "./Parser.yy"
    {
    auto syntax = CDefineFunctionSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE.GetParent(), (EAccessType)(yysemantic_stack_[(10) - (1)].node), *(yysemantic_stack_[(10) - (3)].litera), (yysemantic_stack_[(10) - (6)].node), (yysemantic_stack_[(10) - (9)].node));
    auto result = _producer.DefineFunction(syntax);
    
    YY_REDUCE(result);
    
    _producer.PopNaming();
  }
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 382 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
  }
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 386 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
  }
    break;

  case 47:

/* Line 678 of lalr1.cc  */
#line 390 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
	}
    break;

  case 48:

/* Line 678 of lalr1.cc  */
#line 394 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
  }
    break;

  case 49:

/* Line 678 of lalr1.cc  */
#line 399 "./Parser.yy"
    {
    (yyval.node) = NONE_ID;
  }
    break;

  case 50:

/* Line 678 of lalr1.cc  */
#line 402 "./Parser.yy"
    {
    auto syntax = CBlockSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(2) - (1)].node), (yysemantic_stack_[(2) - (2)].node));
    auto result = _producer.Block(syntax);
    
    YY_REDUCE(result);
  }
    break;

  case 51:

/* Line 678 of lalr1.cc  */
#line 411 "./Parser.yy"
    {
    _producer.PushNaming(*(yysemantic_stack_[(2) - (2)].litera));
	}
    break;

  case 52:

/* Line 678 of lalr1.cc  */
#line 415 "./Parser.yy"
    {
	}
    break;



/* Line 678 of lalr1.cc  */
#line 992 "Parser.yy.cpp"
	default:
          break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
	  }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  CParser::yysyntax_error_ (int yystate)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char CParser::yypact_ninf_ = -81;
  const short int
  CParser::yypact_[] =
  {
        -5,   -15,    15,   -81,   -81,   -25,    52,   -81,   -81,   -81,
     -81,   -19,   -81,   -81,    80,    80,   -81,    39,    -9,    -4,
     -81,    -8,    -2,   -81,    52,    -3,    80,    23,   -81,    91,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,   -81,    27,    34,    80,
     -81,   -81,   -81,   -81,   126,     3,    24,   -81,   166,   166,
      26,    26,    26,    26,   166,   166,   137,   137,   126,    78,
      78,    23,    23,    23,    25,   -81,   126,    80,   -81,    80,
      40,   -81,   126,   -17,    45,    37,    47,   -81,   -17,    49,
     -81,    52,    22,   -81
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  CParser::yydefact_[] =
  {
         0,     0,     0,    51,     1,     0,    27,     2,    28,    29,
       3,    38,     4,     5,     0,     0,     6,     0,     0,    25,
      26,     0,     0,    47,    27,     0,    32,    23,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
      45,    46,    50,    52,    33,    34,     0,    24,    12,    13,
      16,    17,    18,    19,    14,    15,    20,    21,    22,     7,
       8,     9,    10,    11,    40,    43,    42,    32,    39,     0,
       0,    35,    41,    30,     0,    36,     0,    31,    30,     0,
      37,    27,     0,    44
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  CParser::yypgoto_[] =
  {
       -81,   -81,   -10,   -80,   -81,   -81,    10,     1,    -6,   -81,
     -74,   -81,   -81,   -81,   -81,   -23,   -81,   -81
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  CParser::yydefgoto_[] =
  {
        -1,    16,    17,    18,    85,    55,    56,    86,    28,    20,
      21,    22,    23,    80,    24,    25,     2,     5
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char CParser::yytable_ninf_ = -50;
  const signed char
  CParser::yytable_[] =
  {
        19,    52,   -27,    84,    27,    29,     8,     9,    84,    87,
      47,     1,    48,     3,    87,     4,    54,     6,    19,    26,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    50,    49,    40,    76,
      53,    40,    51,    77,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    74,     7,    41,    42,    43,
      44,    45,    75,    78,    47,    93,    79,    54,    92,    82,
      41,    42,    43,    44,    45,     8,     9,    88,    83,    10,
      11,    12,    13,    46,     7,    19,    89,    81,    14,    90,
      15,    91,     0,    40,     0,   -49,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    10,    11,    12,
      13,    43,    44,    45,     0,     0,    14,     0,    15,     0,
       0,     0,    41,    42,    43,    44,    45,     0,     0,     0,
      57,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    30,    31,    32,    33,    34,    35,    36,    37,
       0,     0,    40,     0,     0,     0,     0,    41,    42,    43,
      44,    45,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    45,    32,    33,    34,    35,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45
  };

  /* YYCHECK.  */
  const signed char
  CParser::yycheck_[] =
  {
         6,    24,    19,    83,    14,    15,    23,    24,    88,    83,
      19,    16,    21,    28,    88,     0,    26,    42,    24,    38,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    44,    41,    15,    49,
      43,    15,    44,    40,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    28,     4,    31,    32,    33,
      34,    35,    28,    39,    19,    43,    41,    77,    91,    79,
      31,    32,    33,    34,    35,    23,    24,    40,    38,    27,
      28,    29,    30,    44,     4,    91,    39,    77,    36,    88,
      38,    42,    -1,    15,    -1,    43,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    27,    28,    29,
      30,    33,    34,    35,    -1,    -1,    36,    -1,    38,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      39,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  CParser::yystos_[] =
  {
         0,    16,    61,    28,     0,    62,    42,     4,    23,    24,
      27,    28,    29,    30,    36,    38,    46,    47,    48,    53,
      54,    55,    56,    57,    59,    60,    38,    47,    53,    47,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    31,    32,    33,    34,    35,    44,    19,    21,    41,
      44,    44,    60,    43,    47,    50,    51,    39,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    28,    28,    47,    40,    39,    41,
      58,    51,    47,    38,    48,    49,    52,    55,    40,    39,
      52,    42,    60,    43
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  CParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    43,    45,    42,    47,    37,    33,   286,    40,    41,
      44,    61,   123,   125,    59
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  CParser::yyr1_[] =
  {
         0,    45,    46,    46,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    48,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    54,
      55,    55,    56,    58,    57,    59,    59,    59,    59,    60,
      60,    62,    61
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  CParser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     0,     1,     1,
       0,     1,     0,     1,     1,     3,     1,     3,     1,     4,
       3,     5,     3,     0,    10,     2,     2,     1,     2,     0,
       2,     0,     6
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const CParser::yytname_[] =
  {
    "_EOF_", "error", "$undefined", "EOL", "Nil", "Equal", "NotEqual",
  "Greater", "GreaterEqual", "Less", "LessEqual", "Match", "NotMatch",
  "And", "Or", "Xor", "Naming", "If", "Else", "Var", "Return", "Function",
  "Object", "Public", "Private", "New", "Delete", "Numeric", "Identifier",
  "String", "Boolean", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS",
  "'('", "')'", "','", "'='", "'{'", "'}'", "';'", "$accept", "SCALAR",
  "EXPRESSION", "ACCESS", "PARAMETER", "ARGUMENT", "ARGUMENT_CHAIN",
  "PARAMETER_CHAIN", "VARIABLE", "FUNCTION", "DEFINE_VARIABLE",
  "ASSIGN_VARIABLE", "DEFINE_FUNCTION", "$@1", "STATEMENT", "BLOCK",
  "ESSAY", "$@3", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const CParser::rhs_number_type
  CParser::yyrhs_[] =
  {
        61,     0,    -1,     4,    -1,    27,    -1,    29,    -1,    30,
      -1,    46,    -1,    47,    31,    47,    -1,    47,    32,    47,
      -1,    47,    33,    47,    -1,    47,    34,    47,    -1,    47,
      35,    47,    -1,    47,     5,    47,    -1,    47,     6,    47,
      -1,    47,    11,    47,    -1,    47,    12,    47,    -1,    47,
       7,    47,    -1,    47,     8,    47,    -1,    47,     9,    47,
      -1,    47,    10,    47,    -1,    47,    13,    47,    -1,    47,
      14,    47,    -1,    47,    15,    47,    -1,    36,    47,    -1,
      38,    47,    39,    -1,    53,    -1,    54,    -1,    -1,    23,
      -1,    24,    -1,    -1,    55,    -1,    -1,    47,    -1,    50,
      -1,    50,    40,    51,    -1,    49,    -1,    49,    40,    52,
      -1,    28,    -1,    28,    38,    51,    39,    -1,    48,    19,
      28,    -1,    48,    19,    28,    41,    47,    -1,    53,    41,
      47,    -1,    -1,    48,    21,    28,    58,    38,    52,    39,
      42,    60,    43,    -1,    55,    44,    -1,    56,    44,    -1,
      57,    -1,    47,    44,    -1,    -1,    59,    60,    -1,    -1,
      16,    28,    62,    42,    60,    43,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  CParser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    13,    17,    21,
      25,    29,    33,    37,    41,    45,    49,    53,    57,    61,
      65,    69,    73,    77,    80,    84,    86,    88,    89,    91,
      93,    94,    96,    97,    99,   101,   105,   107,   111,   113,
     118,   122,   128,   132,   133,   144,   147,   150,   152,   155,
     156,   159,   160
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  CParser::yyrline_[] =
  {
         0,    69,    69,    73,    77,    81,    87,    91,    98,   105,
     112,   119,   126,   133,   140,   147,   154,   161,   168,   175,
     182,   189,   196,   203,   210,   214,   218,   224,   227,   231,
     237,   239,   245,   247,   253,   260,   294,   301,   310,   319,
     328,   335,   344,   354,   353,   381,   385,   389,   393,   399,
     401,   411,   410
  };

  // Print the state stack on the debug stream.
  void
  CParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  CParser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  CParser::token_number_type
  CParser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,     2,     2,    35,     2,     2,
      38,    39,    33,    31,    40,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    37
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int CParser::yyeof_ = 0;
  const int CParser::yylast_ = 201;
  const int CParser::yynnts_ = 18;
  const int CParser::yyempty_ = -2;
  const int CParser::yyfinal_ = 4;
  const int CParser::yyterror_ = 1;
  const int CParser::yyerrcode_ = 256;
  const int CParser::yyntokens_ = 45;

  const unsigned int CParser::yyuser_token_number_max_ = 286;
  const CParser::token_number_type CParser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} } } // Dominion::Compilation::Essay

/* Line 1054 of lalr1.cc  */
#line 1519 "Parser.yy.cpp"


/* Line 1056 of lalr1.cc  */
#line 418 "./Parser.yy"

void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}

