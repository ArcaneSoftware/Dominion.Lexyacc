
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
#line 58 "./Parser.yy"

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
        case 25: /* "String" */

/* Line 480 of lalr1.cc  */
#line 56 "./Parser.yy"
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
#line 72 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar())).GetID();
  }
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 76 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar((yysemantic_stack_[(1) - (1)].numeric)))).GetID();
  }
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 80 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar(*(yysemantic_stack_[(1) - (1)].litera)))).GetID();
  }
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 84 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, CScalar((yysemantic_stack_[(1) - (1)].boolean)))).GetID();
  }
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 90 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 94 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Add, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 101 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Subtract, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
    
  }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 109 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Multiply, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
    
  }
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 117 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Divide, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 124 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Modulo, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 131 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Equal, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 138 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::NotEqual, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 145 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Match, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 152 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::NotMatch, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 159 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Greater, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 166 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::GreaterEqual, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 173 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Less, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 180 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::LessEqual, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 187 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::And, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 194 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Or, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 201 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Xor, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 208 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, NONE_ID, EOperationType::Not, (yysemantic_stack_[(2) - (2)].node));
		auto result = _producer.UnaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 215 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(3) - (2)].node);
  }
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 219 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 223 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 238 "./Parser.yy"
    {
		(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
	}
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 244 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 250 "./Parser.yy"
    {
		auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(1) - (1)].node), NONE_ID);
		auto result = _producer.Chain(syntax);

		YY_REDUCE(result); 
  }
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 257 "./Parser.yy"
    {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.Chain(syntax);

		YY_REDUCE(result);
  }
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 266 "./Parser.yy"
    {
		auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(1) - (1)].node), NONE_ID);
		auto result = _producer.Chain(syntax);

		YY_REDUCE(result);
  }
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 273 "./Parser.yy"
    {
    auto syntax = CChainSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.Chain(syntax);

		YY_REDUCE(result);
  }
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 282 "./Parser.yy"
    {
		auto syntax = CVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, *(yysemantic_stack_[(1) - (1)].litera));
		auto result = _producer.Variable(syntax);
    
		YY_REDUCE(result);
  }
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 290 "./Parser.yy"
    {
    
  }
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 296 "./Parser.yy"
    {
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].access), EVariableType::Atom, *(yysemantic_stack_[(3) - (3)].litera), NONE_ID);
		auto result = _producer.DefineVariable(syntax);

		YY_REDUCE(result);
  }
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 303 "./Parser.yy"
    {
    auto syntax = CDefineVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(5) - (1)].access), EVariableType::Atom, *(yysemantic_stack_[(5) - (3)].litera), (yysemantic_stack_[(5) - (5)].node));
		auto result = _producer.DefineVariable(syntax);

		YY_REDUCE(result);
  }
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 312 "./Parser.yy"
    {
    auto syntax = CAssignVariableSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.AssignVariable(syntax);

		YY_REDUCE(result);
  }
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 321 "./Parser.yy"
    {
    _producer.PushNaming(*(yysemantic_stack_[(3) - (3)].litera));
  }
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 325 "./Parser.yy"
    {
    auto syntax = CDefineFunctionSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(10) - (1)].access), *(yysemantic_stack_[(10) - (3)].litera), (yysemantic_stack_[(10) - (6)].node), (yysemantic_stack_[(10) - (9)].node));
		auto result = _producer.DefineFunction(syntax);

		YY_REDUCE(result);
  }
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 338 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
  }
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 342 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
  }
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 346 "./Parser.yy"
    {
		(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
	}
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 350 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
  }
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 355 "./Parser.yy"
    {
    (yyval.node) = NONE_ID;
  }
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 358 "./Parser.yy"
    {
		auto syntax = CBlockSyntax(YY_LIVE_LINE, YY_LIVE_NAMESPACE, (yysemantic_stack_[(2) - (1)].node), (yysemantic_stack_[(2) - (2)].node));
		auto result = _producer.Block(syntax);

		YY_REDUCE(result);
	}
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 367 "./Parser.yy"
    {
		_producer.PushNaming(*(yysemantic_stack_[(2) - (2)].litera));
	}
    break;

  case 47:

/* Line 678 of lalr1.cc  */
#line 371 "./Parser.yy"
    {
		_producer.SetEntry((yysemantic_stack_[(6) - (5)].node));
	}
    break;



/* Line 678 of lalr1.cc  */
#line 945 "Parser.yy.cpp"
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
  const signed char CParser::yypact_ninf_ = -78;
  const short int
  CParser::yypact_[] =
  {
       -10,   -16,    10,   -78,   -78,   -28,    93,   -78,   -78,   -23,
     -78,   -78,   -14,    98,    98,   -78,    41,   -24,   -78,   -26,
       0,   -78,    93,   -22,    98,    -7,    11,    27,   -78,    79,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,   -78,    98,   -78,   -78,
     -78,   -78,   129,     6,     8,    19,   -78,   -78,    30,    30,
      48,    48,    48,    48,    30,    30,   140,   140,   129,   147,
     147,    27,    27,    27,   129,    98,   -78,    98,    32,   -78,
     129,    38,    55,    44,    39,   -78,    38,    56,   -78,    93,
      58,   -78
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  CParser::yydefact_[] =
  {
         0,     0,     0,    46,     1,     0,    44,     2,     3,    33,
       4,     5,     0,     0,     0,     6,     0,    25,    26,     0,
       0,    42,    44,     0,     0,     0,     0,    23,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    40,    41,
      45,    47,    28,    29,     0,    35,    38,    24,    12,    13,
      16,    17,    18,    19,    14,    15,    20,    21,    22,     7,
       8,     9,    10,    11,    37,     0,    34,     0,     0,    30,
      36,     0,     0,    31,     0,    27,     0,     0,    32,    44,
       0,    39
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  CParser::yypgoto_[] =
  {
       -78,   -78,   -11,   -78,   -78,    21,    13,    -6,   -78,   -77,
     -78,   -78,   -78,   -78,   -21,   -78,   -78
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  CParser::yydefgoto_[] =
  {
        -1,    15,    16,    83,    53,    54,    84,    28,    18,    19,
      20,    21,    78,    22,    23,     2,     5
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char CParser::yytable_ninf_ = -1;
  const unsigned char
  CParser::yytable_[] =
  {
        17,    50,    27,    29,    85,    25,     1,    26,     3,    85,
       4,     6,    24,    52,    47,    48,    17,    55,    51,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    56,    74,    32,    33,    34,
      35,    49,    40,    75,    76,    40,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    77,    41,    42,
      43,    44,    45,    40,    52,    82,    80,    81,    90,    41,
      42,    43,    44,    45,    25,    87,    41,    42,    43,    44,
      45,    86,    46,    17,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    89,    79,     7,    91,    88,
       0,     0,     7,     0,     0,     0,     0,    41,    42,    43,
      44,    45,     0,     0,     0,    57,     8,     9,    10,    11,
      12,     8,     9,    10,    11,     0,    13,     0,    14,     0,
       0,    13,     0,    14,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    30,    31,    32,    33,    34,
      35,    36,    37,     0,     0,    40,     0,    41,    42,    43,
      44,    45,    40,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    45,     0,     0,     0,     0,    43,    44,    45
  };

  /* YYCHECK.  */
  const signed char
  CParser::yycheck_[] =
  {
         6,    22,    13,    14,    81,    19,    16,    21,    24,    86,
       0,    39,    35,    24,    38,    41,    22,    24,    40,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    24,    47,     7,     8,     9,
      10,    41,    15,    37,    36,    15,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    38,    28,    29,
      30,    31,    32,    15,    75,    27,    77,    35,    89,    28,
      29,    30,    31,    32,    19,    36,    28,    29,    30,    31,
      32,    37,    41,    89,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    39,    75,     4,    40,    86,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    23,    24,    25,    26,
      27,    23,    24,    25,    26,    -1,    33,    -1,    35,    -1,
      -1,    33,    -1,    35,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    -1,    28,    29,    30,
      31,    32,    15,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    30,    31,    32
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  CParser::yystos_[] =
  {
         0,    16,    57,    24,     0,    58,    39,     4,    23,    24,
      25,    26,    27,    33,    35,    43,    44,    49,    50,    51,
      52,    53,    55,    56,    35,    19,    21,    44,    49,    44,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    28,    29,    30,    31,    32,    41,    38,    41,    41,
      56,    40,    44,    46,    47,    24,    24,    36,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    37,    36,    38,    54,    47,
      44,    35,    27,    45,    48,    51,    37,    36,    48,    39,
      56,    40
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  CParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,    37,    33,   283,    40,    41,    44,    61,   123,
     125,    59
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  CParser::yyr1_[] =
  {
         0,    42,    43,    43,    43,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    46,    47,
      47,    48,    48,    49,    50,    51,    51,    52,    54,    53,
      55,    55,    55,    55,    56,    56,    58,    57
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  CParser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     4,     3,     5,     3,     0,    10,
       2,     2,     1,     2,     0,     2,     0,     6
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
  "Object", "Numeric", "Identifier", "String", "Boolean", "Seal", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "'('", "')'", "','", "'='",
  "'{'", "'}'", "';'", "$accept", "SCALAR", "EXPRESSION", "PARAMETER",
  "ARGUMENT", "ARGUMENT_CHAIN", "PARAMETER_CHAIN", "VARIABLE", "FUNCTION",
  "DEFINE_VARIABLE", "ASSIGN_VARIABLE", "DEFINE_FUNCTION", "$@1",
  "STATEMENT", "BLOCK", "ESSAY", "$@2", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const CParser::rhs_number_type
  CParser::yyrhs_[] =
  {
        57,     0,    -1,     4,    -1,    23,    -1,    25,    -1,    26,
      -1,    43,    -1,    44,    28,    44,    -1,    44,    29,    44,
      -1,    44,    30,    44,    -1,    44,    31,    44,    -1,    44,
      32,    44,    -1,    44,     5,    44,    -1,    44,     6,    44,
      -1,    44,    11,    44,    -1,    44,    12,    44,    -1,    44,
       7,    44,    -1,    44,     8,    44,    -1,    44,     9,    44,
      -1,    44,    10,    44,    -1,    44,    13,    44,    -1,    44,
      14,    44,    -1,    44,    15,    44,    -1,    33,    44,    -1,
      35,    44,    36,    -1,    49,    -1,    50,    -1,    51,    -1,
      44,    -1,    46,    -1,    46,    37,    47,    -1,    45,    -1,
      45,    37,    48,    -1,    24,    -1,    24,    35,    47,    36,
      -1,    27,    19,    24,    -1,    27,    19,    24,    38,    44,
      -1,    49,    38,    44,    -1,    -1,    27,    21,    24,    54,
      35,    48,    36,    39,    56,    40,    -1,    51,    41,    -1,
      52,    41,    -1,    53,    -1,    44,    41,    -1,    -1,    55,
      56,    -1,    -1,    16,    24,    58,    39,    56,    40,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  CParser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    13,    17,    21,
      25,    29,    33,    37,    41,    45,    49,    53,    57,    61,
      65,    69,    73,    77,    80,    84,    86,    88,    90,    92,
      94,    98,   100,   104,   106,   111,   115,   121,   125,   126,
     137,   140,   143,   145,   148,   149,   152,   153
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  CParser::yyrline_[] =
  {
         0,    71,    71,    75,    79,    83,    89,    93,   100,   108,
     116,   123,   130,   137,   144,   151,   158,   165,   172,   179,
     186,   193,   200,   207,   214,   218,   222,   237,   243,   249,
     256,   265,   272,   281,   290,   295,   302,   311,   321,   320,
     337,   341,   345,   349,   355,   357,   367,   366
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
       2,     2,     2,    33,     2,     2,     2,    32,     2,     2,
      35,    36,    30,    28,    37,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      25,    26,    27,    34
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int CParser::yyeof_ = 0;
  const int CParser::yylast_ = 179;
  const int CParser::yynnts_ = 17;
  const int CParser::yyempty_ = -2;
  const int CParser::yyfinal_ = 4;
  const int CParser::yyterror_ = 1;
  const int CParser::yyerrcode_ = 256;
  const int CParser::yyntokens_ = 42;

  const unsigned int CParser::yyuser_token_number_max_ = 283;
  const CParser::token_number_type CParser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} } } // Dominion::Compilation::Essay

/* Line 1054 of lalr1.cc  */
#line 1460 "Parser.yy.cpp"


/* Line 1056 of lalr1.cc  */
#line 375 "./Parser.yy"

void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}

