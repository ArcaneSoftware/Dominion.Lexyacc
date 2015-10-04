
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
#define YY_REDUCE(PRODUCTOR) if (PRODUCTOR.GetSuccessed()){yyval.node = PRODUCTOR.GetIndex();}else{YYABORT;}


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
        case 22: /* "String" */

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
#line 67 "./Parser.yy"
    {
    
  }
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 70 "./Parser.yy"
    {
    
  }
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 73 "./Parser.yy"
    {
    
  }
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 76 "./Parser.yy"
    {
    
  }
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 80 "./Parser.yy"
    {
  (yyval.node) = -1;
  }
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 83 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
  }
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 86 "./Parser.yy"
    {
    
  }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 89 "./Parser.yy"
    {
    
  }
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 92 "./Parser.yy"
    {
    
  }
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 95 "./Parser.yy"
    {
    
  }
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 98 "./Parser.yy"
    {
    
  }
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 101 "./Parser.yy"
    {
    
  }
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 104 "./Parser.yy"
    {
    
  }
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 107 "./Parser.yy"
    {
    
  }
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 110 "./Parser.yy"
    {
    
  }
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 113 "./Parser.yy"
    {
    
  }
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 116 "./Parser.yy"
    {
    
  }
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 119 "./Parser.yy"
    {
    
  }
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 122 "./Parser.yy"
    {
    
  }
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 125 "./Parser.yy"
    {
  }
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 127 "./Parser.yy"
    {
    (yyval.node) = (yysemantic_stack_[(3) - (2)].node);
  }
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 130 "./Parser.yy"
    {
    
  }
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 133 "./Parser.yy"
    {
    
  }
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 136 "./Parser.yy"
    {
    
  }
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 139 "./Parser.yy"
    {
    
  }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 144 "./Parser.yy"
    {
    
  }
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 149 "./Parser.yy"
    {
    
  }
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 152 "./Parser.yy"
    {
    
  }
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 156 "./Parser.yy"
    {
  
  }
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 159 "./Parser.yy"
    {
  }
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 163 "./Parser.yy"
    {
  
  }
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 166 "./Parser.yy"
    {
    
  }
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 171 "./Parser.yy"
    {
    
  }
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 176 "./Parser.yy"
    {
    
  }
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 181 "./Parser.yy"
    {
    
  }
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 184 "./Parser.yy"
    {
    
  }
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 189 "./Parser.yy"
    {
  }
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 193 "./Parser.yy"
    {
    
  }
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 198 "./Parser.yy"
    {
    
  }
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 204 "./Parser.yy"
    {
    int y = 0;/*Set space*/
  }
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 207 "./Parser.yy"
    {
    
  }
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 212 "./Parser.yy"
    {

  }
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 221 "./Parser.yy"
    {
  
  }
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 224 "./Parser.yy"
    {
    
  }
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 229 "./Parser.yy"
    {
    
  }
    break;

  case 47:

/* Line 678 of lalr1.cc  */
#line 232 "./Parser.yy"
    {
    
  }
    break;

  case 48:

/* Line 678 of lalr1.cc  */
#line 235 "./Parser.yy"
    {
    
  }
    break;

  case 49:

/* Line 678 of lalr1.cc  */
#line 239 "./Parser.yy"
    {
    (yyval.node) = -1;
  }
    break;

  case 50:

/* Line 678 of lalr1.cc  */
#line 241 "./Parser.yy"
    {
	}
    break;

  case 51:

/* Line 678 of lalr1.cc  */
#line 245 "./Parser.yy"
    {
    
  }
    break;



/* Line 678 of lalr1.cc  */
#line 892 "Parser.yy.cpp"
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
  const signed char CParser::yypact_ninf_ = -43;
  const short int
  CParser::yypact_[] =
  {
       -15,    -7,   -15,   -43,     6,   -43,   -43,   -43,   -13,    -2,
      -5,   -11,    13,   -43,    -2,   -18,   -43,    34,   -43,    25,
     -43,   -30,   -43,   -43,    19,   -43,    68,    11,   -43,   -43,
     -43,   -43,   -43,   -43,    34,    10,   -32,    19,    19,    18,
     158,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,   -43,    31,   -43,    24,   -43,
      19,   186,    19,    21,    98,   -43,    59,    59,   -16,   -16,
     -16,   -16,    59,    59,   196,   196,   -14,   -14,   -43,   -43,
      28,   -43,   128,   -43,   -43,   -43,    19,   -43,    29,   -43
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  CParser::yydefact_[] =
  {
         0,     0,    44,    51,     0,    41,    45,     1,     0,    30,
       0,    32,     0,    31,    30,     0,    33,     6,     2,     0,
       3,    34,     4,     5,     6,     7,     0,    23,    24,    46,
      25,    26,    47,    48,     6,     0,     0,     6,     6,    34,
       0,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,    43,     0,    50,     0,    36,
       6,    27,     6,     0,     0,    22,    12,    13,    16,    17,
      18,    19,    14,    15,    20,    21,     8,     9,    10,    11,
      38,    42,     0,    29,    35,    40,     6,    37,     0,    39
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  CParser::yypgoto_[] =
  {
       -43,   -43,   -17,   -43,   -42,   -43,    46,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,    60,   -43,    30,   -43
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  CParser::yydefgoto_[] =
  {
        -1,    25,    61,    62,    63,    11,    12,    27,    28,    29,
      30,    31,    32,     2,     8,    33,     3,    34,    35,     4
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char CParser::yytable_ninf_ = -50;
  const signed char
  CParser::yytable_[] =
  {
        26,    37,    59,    60,     1,    38,     7,    40,    51,    52,
      53,    54,    53,    54,     5,    10,    13,    26,     9,    17,
      83,    64,    14,    18,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    18,    20,
      39,    22,    23,    82,    88,    15,    36,    56,    58,    37,
      24,    19,    80,    84,    20,    21,    22,    23,    81,    86,
      16,    89,     6,     0,    57,    24,    43,    44,    45,    46,
       0,     0,   -49,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,    55,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,    85,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,    87,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      65,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54
  };

  /* YYCHECK.  */
  const signed char
  CParser::yycheck_[] =
  {
        17,    31,    34,    35,    19,    35,     0,    24,    24,    25,
      26,    27,    26,    27,    21,    17,    21,    34,    31,    37,
      62,    38,    33,     4,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     4,    20,
      21,    22,    23,    60,    86,    32,    21,    36,    38,    31,
      31,    17,    21,    32,    20,    21,    22,    23,    34,    31,
      14,    32,     2,    -1,    34,    31,     7,     8,     9,    10,
      -1,    -1,    38,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  CParser::yystos_[] =
  {
         0,    19,    52,    55,    58,    21,    55,     0,    53,    31,
      17,    44,    45,    21,    33,    32,    45,    37,     4,    17,
      20,    21,    22,    23,    31,    40,    41,    46,    47,    48,
      49,    50,    51,    54,    56,    57,    21,    31,    35,    21,
      41,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    24,    25,    26,    27,    34,    36,    57,    38,    34,
      35,    41,    42,    43,    41,    32,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      21,    34,    41,    43,    32,    34,    31,    34,    43,    32
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  CParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    43,    45,    42,    47,    37,    33,
     279,    40,    41,    44,    59,    61,    46,   123,   125
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  CParser::yyr1_[] =
  {
         0,    39,    40,    40,    40,    40,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    42,    43,    43,
      44,    44,    45,    45,    46,    47,    48,    48,    49,    50,
      51,    53,    52,    54,    55,    55,    56,    56,    56,    57,
      57,    58
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  CParser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     0,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       0,     2,     1,     3,     1,     4,     3,     5,     3,     6,
       4,     0,    10,     2,     1,     2,     1,     1,     1,     0,
       2,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const CParser::yytname_[] =
  {
    "_EOF_", "error", "$undefined", "EOL", "Nil", "Equal", "NotEqual",
  "Greater", "GreaterEqual", "Less", "LessEqual", "Match", "NotMatch",
  "And", "Or", "If", "Else", "Var", "Return", "Function", "Numeric",
  "Identifier", "String", "Boolean", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'!'", "UMINUS", "'('", "')'", "','", "';'", "'='", "'.'", "'{'", "'}'",
  "$accept", "SCALAR", "EXPRESSION", "ARGUMENT", "ARGUMENT_CHAIN",
  "PARAMETER", "PARAMETER_CHAIN", "VARIABLE", "FUNCTION",
  "DEFINE_VARIABLE", "VARIABLE_PROPERTY", "VARIABLE_METHED",
  "ASSIGN_VARIABLE", "DEFINE_FUNCTION", "$@1", "EXPRESS",
  "DEFINE_FUNCTION_CHAIN", "STATEMENT", "BLOCK", "ESSAY", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const CParser::rhs_number_type
  CParser::yyrhs_[] =
  {
        58,     0,    -1,     4,    -1,    20,    -1,    22,    -1,    23,
      -1,    -1,    40,    -1,    41,    24,    41,    -1,    41,    25,
      41,    -1,    41,    26,    41,    -1,    41,    27,    41,    -1,
      41,     5,    41,    -1,    41,     6,    41,    -1,    41,    11,
      41,    -1,    41,    12,    41,    -1,    41,     7,    41,    -1,
      41,     8,    41,    -1,    41,     9,    41,    -1,    41,    10,
      41,    -1,    41,    13,    41,    -1,    41,    14,    41,    -1,
      31,    41,    32,    -1,    46,    -1,    47,    -1,    49,    -1,
      50,    -1,    41,    -1,    42,    -1,    42,    43,    -1,    -1,
      17,    21,    -1,    44,    -1,    44,    33,    45,    -1,    21,
      -1,    21,    31,    43,    32,    -1,    17,    21,    34,    -1,
      17,    21,    35,    41,    34,    -1,    46,    36,    21,    -1,
      46,    36,    21,    31,    43,    32,    -1,    21,    35,    41,
      34,    -1,    -1,    19,    21,    53,    31,    45,    32,    37,
      57,    38,    34,    -1,    41,    34,    -1,    52,    -1,    52,
      55,    -1,    48,    -1,    51,    -1,    54,    -1,    -1,    56,
      57,    -1,    55,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  CParser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    12,    14,    18,
      22,    26,    30,    34,    38,    42,    46,    50,    54,    58,
      62,    66,    70,    74,    76,    78,    80,    82,    84,    86,
      89,    90,    93,    95,    99,   101,   106,   110,   116,   120,
     127,   132,   133,   144,   147,   149,   152,   154,   156,   158,
     159,   162
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  CParser::yyrline_[] =
  {
         0,    67,    67,    70,    73,    76,    80,    83,    86,    89,
      92,    95,    98,   101,   104,   107,   110,   113,   116,   119,
     122,   125,   127,   130,   133,   136,   139,   144,   149,   152,
     156,   159,   163,   166,   171,   176,   181,   184,   189,   193,
     198,   204,   203,   212,   221,   224,   229,   232,   235,   239,
     241,   245
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
       2,     2,     2,    29,     2,     2,     2,    28,     2,     2,
      31,    32,    26,    24,    33,    25,    36,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    30
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int CParser::yyeof_ = 0;
  const int CParser::yylast_ = 223;
  const int CParser::yynnts_ = 20;
  const int CParser::yyempty_ = -2;
  const int CParser::yyfinal_ = 7;
  const int CParser::yyterror_ = 1;
  const int CParser::yyerrcode_ = 256;
  const int CParser::yyntokens_ = 39;

  const unsigned int CParser::yyuser_token_number_max_ = 279;
  const CParser::token_number_type CParser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} } } // Dominion::Compilation::Essay

/* Line 1054 of lalr1.cc  */
#line 1418 "Parser.yy.cpp"


/* Line 1056 of lalr1.cc  */
#line 249 "./Parser.yy"

void CParser::error(const CParser::location_type& location, const std::string& message)
{
  //driver.error(l, m);
}

