
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

#undef YY_LIVING_LINE
#undef YY_SOURCE_FILE
#undef YY_REDUCE


/* Line 311 of lalr1.cc  */
#line 55 "Parser.yy.cpp"


#include "Parser.yy.h"

/* User implementation prologue.  */

/* Line 317 of lalr1.cc  */
#line 55 "./Parser.yy"

#ifdef yylex
#undef yylex
#endif

#define yylex _scanner.Run
#define YY_LIVING_LINE _scanner.Line()
#define YY_SOURCE_FILE _producer.GetFile()
#define YY_REDUCE(PRODUCTOR) if (PRODUCTOR.GetSuccessed()){yyval.node = PRODUCTOR.GetID();}else{YYABORT;}


/* Line 317 of lalr1.cc  */
#line 76 "Parser.yy.cpp"

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
#line 145 "Parser.yy.cpp"
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
#line 53 "./Parser.yy"
	{delete (yyvaluep->litera);};

/* Line 480 of lalr1.cc  */
#line 253 "Parser.yy.cpp"
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
#line 68 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVING_LINE, CScalar())).GetID();
  }
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 72 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVING_LINE, CScalar((yysemantic_stack_[(1) - (1)].numeric)))).GetID();
  }
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 76 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVING_LINE, CScalar(*(yysemantic_stack_[(1) - (1)].litera)))).GetID();
  }
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 80 "./Parser.yy"
    {
    (yyval.node) = _producer.Scalar(CScalarSyntax(YY_LIVING_LINE, CScalar((yysemantic_stack_[(1) - (1)].boolean)))).GetID();
  }
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 85 "./Parser.yy"
    {
		(yyval.node) = -1;
  }
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 89 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 93 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Add, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 100 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Subtract, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
    
  }
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 108 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Multiply, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
    
  }
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 116 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Divide, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 123 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Modulo, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 130 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Equal, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 137 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::NotEqual, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 144 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Match, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 151 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::NotMatch, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 158 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Greater, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 165 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::GreaterEqual, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 172 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Less, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 179 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::LessEqual, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 186 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::And, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 193 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Or, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 200 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, (yysemantic_stack_[(3) - (1)].node), EOperationType::Xor, (yysemantic_stack_[(3) - (3)].node));
		auto result = _producer.BinaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 207 "./Parser.yy"
    {
    auto syntax = COperationSyntax(YY_LIVING_LINE, NONE_ID, EOperationType::Not, (yysemantic_stack_[(2) - (2)].node));
		auto result = _producer.UnaryOperation(syntax);

		YY_REDUCE(result);
  }
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 214 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(3) - (2)].node);
  }
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 218 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 222 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 225 "./Parser.yy"
    {
    
  }
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 228 "./Parser.yy"
    {
    
  }
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 233 "./Parser.yy"
    {
    
  }
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 238 "./Parser.yy"
    {
    
  }
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 241 "./Parser.yy"
    {
    
  }
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 260 "./Parser.yy"
    {
    
  }
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 265 "./Parser.yy"
    {
    
  }
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 271 "./Parser.yy"
    {
    auto syntax = CDefineVariableSyntax(YY_LIVING_LINE, EVariableType::Atom, _producer.GetCurrentNamespace(), *(yysemantic_stack_[(3) - (2)].litera), NONE_ID);
		auto result = _producer.DefineVariable(syntax);

		YY_REDUCE(result);
  }
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 278 "./Parser.yy"
    {
    auto syntax = CDefineVariableSyntax(YY_LIVING_LINE, EVariableType::Atom, _producer.GetCurrentNamespace(), *(yysemantic_stack_[(5) - (2)].litera), (yysemantic_stack_[(5) - (4)].node));
		auto result = _producer.DefineVariable(syntax);

		YY_REDUCE(result);
  }
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 286 "./Parser.yy"
    {
  }
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 290 "./Parser.yy"
    {
    
  }
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 296 "./Parser.yy"
    {
    auto syntax = CAssignVariableSyntax(YY_LIVING_LINE, _producer.GetCurrentNamespace(), *(yysemantic_stack_[(4) - (1)].litera), (yysemantic_stack_[(4) - (3)].node));
		auto result = _producer.AssignVariable(syntax);

		YY_REDUCE(result);
  }
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 325 "./Parser.yy"
    {
    
  }
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 328 "./Parser.yy"
    {
    
  }
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 331 "./Parser.yy"
    {
    
  }
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 336 "./Parser.yy"
    {
    (yyval.node) = NONE_ID;
  }
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 338 "./Parser.yy"
    {
	}
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 343 "./Parser.yy"
    {
		_producer.PushNaming(*(yysemantic_stack_[(2) - (2)].litera));
	}
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 347 "./Parser.yy"
    {
		(yyval.node) = -1;
	}
    break;



/* Line 678 of lalr1.cc  */
#line 911 "Parser.yy.cpp"
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
  const signed char CParser::yypact_ninf_ = -36;
  const short int
  CParser::yypact_[] =
  {
       -10,   -15,    10,   -36,   -36,   -29,    37,   -36,   -12,   -36,
     -33,   -36,   -36,    19,    19,   -36,    74,   -26,   -36,   -36,
     -36,   -36,   -36,    37,   -27,   -35,    19,    19,   -19,     1,
     129,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,   -36,     0,   -36,
     -36,   -36,    19,   160,    19,    13,    85,   -36,   196,   196,
     201,   201,   201,   201,   196,   196,   171,   171,   160,   -11,
     -11,     1,     1,     1,    15,   118,   -36,   -36,   -36,    19,
     -36,    17,   -36
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  CParser::yydefact_[] =
  {
         0,     0,     0,    45,     1,     0,     6,     2,     0,     3,
      33,     4,     5,     6,     6,     7,     0,    26,    27,    40,
      28,    29,    41,     6,     0,     0,     6,     6,    33,    24,
       0,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,    42,     0,    44,
      46,    35,     6,    30,     6,     0,     0,    25,    13,    14,
      17,    18,    19,    20,    15,    16,    21,    22,    23,     8,
       9,    10,    11,    12,    37,     0,    32,    34,    39,     6,
      36,     0,    38
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  CParser::yypgoto_[] =
  {
       -36,   -36,    -6,   -36,   -32,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,    27,   -36,   -36
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  CParser::yydefgoto_[] =
  {
        -1,    15,    53,    54,    55,    17,    18,    19,    20,    21,
      22,    23,    24,     2,     5
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char CParser::yytable_ninf_ = -44;
  const signed char
  CParser::yytable_[] =
  {
        16,    26,    51,    52,    41,    27,     1,    29,    30,     3,
       4,     6,    25,    48,    50,    26,    41,    16,    44,    45,
      46,    56,    76,     7,    74,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     7,     9,    28,    11,    12,    75,    81,    77,    79,
      49,    13,    82,    14,     0,     0,     8,     0,     0,     0,
       9,    10,    11,    12,     0,     0,     0,     0,     0,    13,
       0,    14,     0,     0,     0,     0,     0,     0,   -43,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,     0,     0,     0,     0,
       0,    47,    42,    43,    44,    45,    46,     0,     0,     0,
       0,     0,    78,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,    80,    42,    43,    44,    45,
      46,     0,     0,     0,    57,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    31,    32,    33,    34,
      35,    36,    37,    38,     0,     0,    41,    42,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,    46,    33,    34,    35,    36,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    42,    43,
      44,    45,    46
  };

  /* YYCHECK.  */
  const signed char
  CParser::yycheck_[] =
  {
         6,    34,    37,    38,    15,    38,    16,    13,    14,    24,
       0,    40,    24,    39,    41,    34,    15,    23,    29,    30,
      31,    27,    54,     4,    24,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     4,    23,    24,    25,    26,    52,    79,    35,    34,
      23,    32,    35,    34,    -1,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    37,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    37,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    35,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    27,    28,
      29,    30,    31
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  CParser::yystos_[] =
  {
         0,    16,    55,    24,     0,    56,    40,     4,    19,    23,
      24,    25,    26,    32,    34,    43,    44,    47,    48,    49,
      50,    51,    52,    53,    54,    24,    34,    38,    24,    44,
      44,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    27,    28,    29,    30,    31,    37,    39,    54,
      41,    37,    38,    44,    45,    46,    44,    35,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    24,    44,    46,    35,    37,    34,
      37,    46,    35
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  CParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    43,    45,    42,
      47,    37,    33,   282,    40,    41,    44,    59,    61,    46,
     123,   125
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  CParser::yyr1_[] =
  {
         0,    42,    43,    43,    43,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    46,    46,    47,    48,    49,    49,    50,    51,    52,
      53,    53,    53,    54,    54,    56,    55
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  CParser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     0,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     1,     4,     3,     5,     3,     6,     4,
       1,     1,     2,     0,     2,     0,     6
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
  "Object", "Numeric", "Identifier", "String", "Boolean", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "'('", "')'", "','", "';'", "'='",
  "'.'", "'{'", "'}'", "$accept", "SCALAR", "EXPRESSION", "ARGUMENT",
  "ARGUMENT_CHAIN", "VARIABLE", "FUNCTION", "DEFINE_VARIABLE",
  "VARIABLE_PROPERTY", "VARIABLE_METHED", "ASSIGN_VARIABLE", "STATEMENT",
  "BLOCK", "ESSAY", "$@2", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const CParser::rhs_number_type
  CParser::yyrhs_[] =
  {
        55,     0,    -1,     4,    -1,    23,    -1,    25,    -1,    26,
      -1,    -1,    43,    -1,    44,    27,    44,    -1,    44,    28,
      44,    -1,    44,    29,    44,    -1,    44,    30,    44,    -1,
      44,    31,    44,    -1,    44,     5,    44,    -1,    44,     6,
      44,    -1,    44,    11,    44,    -1,    44,    12,    44,    -1,
      44,     7,    44,    -1,    44,     8,    44,    -1,    44,     9,
      44,    -1,    44,    10,    44,    -1,    44,    13,    44,    -1,
      44,    14,    44,    -1,    44,    15,    44,    -1,    32,    44,
      -1,    34,    44,    35,    -1,    47,    -1,    48,    -1,    50,
      -1,    51,    -1,    44,    -1,    45,    -1,    45,    46,    -1,
      24,    -1,    24,    34,    46,    35,    -1,    19,    24,    37,
      -1,    19,    24,    38,    44,    37,    -1,    47,    39,    24,
      -1,    47,    39,    24,    34,    46,    35,    -1,    24,    38,
      44,    37,    -1,    49,    -1,    52,    -1,    44,    37,    -1,
      -1,    53,    54,    -1,    -1,    16,    24,    56,    40,    54,
      41,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  CParser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    12,    14,    18,
      22,    26,    30,    34,    38,    42,    46,    50,    54,    58,
      62,    66,    70,    74,    78,    81,    85,    87,    89,    91,
      93,    95,    97,   100,   102,   107,   111,   117,   121,   128,
     133,   135,   137,   140,   141,   144,   145
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  CParser::yyrline_[] =
  {
         0,    67,    67,    71,    75,    79,    85,    88,    92,    99,
     107,   115,   122,   129,   136,   143,   150,   157,   164,   171,
     178,   185,   192,   199,   206,   213,   217,   221,   225,   228,
     233,   238,   241,   260,   265,   270,   277,   286,   290,   295,
     325,   328,   331,   336,   338,   343,   342
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
       2,     2,     2,    32,     2,     2,     2,    31,     2,     2,
      34,    35,    29,    27,    36,    28,    39,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      25,    26,    33
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int CParser::yyeof_ = 0;
  const int CParser::yylast_ = 232;
  const int CParser::yynnts_ = 15;
  const int CParser::yyempty_ = -2;
  const int CParser::yyfinal_ = 4;
  const int CParser::yyterror_ = 1;
  const int CParser::yyerrcode_ = 256;
  const int CParser::yyntokens_ = 42;

  const unsigned int CParser::yyuser_token_number_max_ = 282;
  const CParser::token_number_type CParser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} } } // Dominion::Compilation::Essay

/* Line 1054 of lalr1.cc  */
#line 1435 "Parser.yy.cpp"


/* Line 1056 of lalr1.cc  */
#line 351 "./Parser.yy"

void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}

