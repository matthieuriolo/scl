
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8


#include "sclVisitor.h"

#include "sclParser.h"


using namespace antlrcpp;
using namespace antlr4;

sclParser::sclParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

sclParser::~sclParser() {
  delete _interpreter;
}

std::string sclParser::getGrammarFileName() const {
  return "scl.g4";
}

const std::vector<std::string>& sclParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& sclParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ModuleContext ------------------------------------------------------------------

sclParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ScopeContext* sclParser::ModuleContext::scope() {
  return getRuleContext<sclParser::ScopeContext>(0);
}


size_t sclParser::ModuleContext::getRuleIndex() const {
  return sclParser::RuleModule;
}


antlrcpp::Any sclParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ModuleContext* sclParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, sclParser::RuleModule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

sclParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::ScopeContext::EOF() {
  return getToken(sclParser::EOF, 0);
}

std::vector<tree::TerminalNode *> sclParser::ScopeContext::DELIMITER() {
  return getTokens(sclParser::DELIMITER);
}

tree::TerminalNode* sclParser::ScopeContext::DELIMITER(size_t i) {
  return getToken(sclParser::DELIMITER, i);
}

std::vector<sclParser::InstructionContext *> sclParser::ScopeContext::instruction() {
  return getRuleContexts<sclParser::InstructionContext>();
}

sclParser::InstructionContext* sclParser::ScopeContext::instruction(size_t i) {
  return getRuleContext<sclParser::InstructionContext>(i);
}


size_t sclParser::ScopeContext::getRuleIndex() const {
  return sclParser::RuleScope;
}


antlrcpp::Any sclParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ScopeContext* sclParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 2, sclParser::RuleScope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(47);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(42);
        dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
        dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
        setState(43);
        match(sclParser::DELIMITER); 
      }
      setState(49);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sclParser::T__0

    || _la == sclParser::KEYWORD_PRINT) {
      setState(50);
      dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
      dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
    }
    setState(53);
    match(sclParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

sclParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::VariableContext::IDENTIFIER() {
  return getToken(sclParser::IDENTIFIER, 0);
}


size_t sclParser::VariableContext::getRuleIndex() const {
  return sclParser::RuleVariable;
}


antlrcpp::Any sclParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

sclParser::VariableContext* sclParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, sclParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(sclParser::T__0);
    setState(56);
    match(sclParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

sclParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::AssignContext* sclParser::InstructionContext::assign() {
  return getRuleContext<sclParser::AssignContext>(0);
}

sclParser::PrintContext* sclParser::InstructionContext::print() {
  return getRuleContext<sclParser::PrintContext>(0);
}


size_t sclParser::InstructionContext::getRuleIndex() const {
  return sclParser::RuleInstruction;
}


antlrcpp::Any sclParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

sclParser::InstructionContext* sclParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, sclParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(58);
        assign();
        break;
      }

      case sclParser::KEYWORD_PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(59);
        print();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

sclParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::PrintContext::KEYWORD_PRINT() {
  return getToken(sclParser::KEYWORD_PRINT, 0);
}

sclParser::ExpressionContext* sclParser::PrintContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}


size_t sclParser::PrintContext::getRuleIndex() const {
  return sclParser::RulePrint;
}


antlrcpp::Any sclParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

sclParser::PrintContext* sclParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 8, sclParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(sclParser::KEYWORD_PRINT);
    setState(63);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

sclParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::AssignContext::OPERAND_EQUAL() {
  return getToken(sclParser::OPERAND_EQUAL, 0);
}

sclParser::VariableContext* sclParser::AssignContext::variable() {
  return getRuleContext<sclParser::VariableContext>(0);
}

sclParser::ExpressionContext* sclParser::AssignContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}


size_t sclParser::AssignContext::getRuleIndex() const {
  return sclParser::RuleAssign;
}


antlrcpp::Any sclParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

sclParser::AssignContext* sclParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 10, sclParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(66);
    match(sclParser::OPERAND_EQUAL);
    setState(67);
    dynamic_cast<AssignContext *>(_localctx)->value = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

sclParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressionconcatedContext* sclParser::ExpressionContext::expressionconcated() {
  return getRuleContext<sclParser::ExpressionconcatedContext>(0);
}


size_t sclParser::ExpressionContext::getRuleIndex() const {
  return sclParser::RuleExpression;
}


antlrcpp::Any sclParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionContext* sclParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, sclParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    expressionconcated(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionconcatedContext ------------------------------------------------------------------

sclParser::ExpressionconcatedContext::ExpressionconcatedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressiongroupedContext* sclParser::ExpressionconcatedContext::expressiongrouped() {
  return getRuleContext<sclParser::ExpressiongroupedContext>(0);
}

std::vector<sclParser::ExpressionconcatedContext *> sclParser::ExpressionconcatedContext::expressionconcated() {
  return getRuleContexts<sclParser::ExpressionconcatedContext>();
}

sclParser::ExpressionconcatedContext* sclParser::ExpressionconcatedContext::expressionconcated(size_t i) {
  return getRuleContext<sclParser::ExpressionconcatedContext>(i);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_PLUS() {
  return getToken(sclParser::OPERAND_PLUS, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_MINUS() {
  return getToken(sclParser::OPERAND_MINUS, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_ASTERISK() {
  return getToken(sclParser::OPERAND_ASTERISK, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_SLASH() {
  return getToken(sclParser::OPERAND_SLASH, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_CARET() {
  return getToken(sclParser::OPERAND_CARET, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_AND() {
  return getToken(sclParser::OPERAND_AND, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::OPERAND_OR() {
  return getToken(sclParser::OPERAND_OR, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::COMPARATOR_EQUAL() {
  return getToken(sclParser::COMPARATOR_EQUAL, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::COMPARATOR_NOT_EQUAL() {
  return getToken(sclParser::COMPARATOR_NOT_EQUAL, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::COMPARATOR_LESS() {
  return getToken(sclParser::COMPARATOR_LESS, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::COMPARATOR_GREATER() {
  return getToken(sclParser::COMPARATOR_GREATER, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::COMPARATOR_LESS_EQUAL() {
  return getToken(sclParser::COMPARATOR_LESS_EQUAL, 0);
}

tree::TerminalNode* sclParser::ExpressionconcatedContext::COMPARATOR_GREATER_EQUAL() {
  return getToken(sclParser::COMPARATOR_GREATER_EQUAL, 0);
}


size_t sclParser::ExpressionconcatedContext::getRuleIndex() const {
  return sclParser::RuleExpressionconcated;
}


antlrcpp::Any sclParser::ExpressionconcatedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionconcated(this);
  else
    return visitor->visitChildren(this);
}


sclParser::ExpressionconcatedContext* sclParser::expressionconcated() {
   return expressionconcated(0);
}

sclParser::ExpressionconcatedContext* sclParser::expressionconcated(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sclParser::ExpressionconcatedContext *_localctx = _tracker.createInstance<ExpressionconcatedContext>(_ctx, parentState);
  sclParser::ExpressionconcatedContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, sclParser::RuleExpressionconcated, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(72);
    expressiongrouped();
    _ctx->stop = _input->LT(-1);
    setState(82);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(80);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionconcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionconcated);
          setState(74);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(75);
          dynamic_cast<ExpressionconcatedContext *>(_localctx)->operand = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << sclParser::OPERAND_PLUS)
            | (1ULL << sclParser::OPERAND_MINUS)
            | (1ULL << sclParser::OPERAND_ASTERISK)
            | (1ULL << sclParser::OPERAND_SLASH)
            | (1ULL << sclParser::OPERAND_CARET)
            | (1ULL << sclParser::OPERAND_AND)
            | (1ULL << sclParser::OPERAND_OR))) != 0))) {
            dynamic_cast<ExpressionconcatedContext *>(_localctx)->operand = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(76);
          dynamic_cast<ExpressionconcatedContext *>(_localctx)->right = expressionconcated(3);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionconcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionconcated);
          setState(77);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(78);
          dynamic_cast<ExpressionconcatedContext *>(_localctx)->comparator = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << sclParser::COMPARATOR_EQUAL)
            | (1ULL << sclParser::COMPARATOR_NOT_EQUAL)
            | (1ULL << sclParser::COMPARATOR_GREATER)
            | (1ULL << sclParser::COMPARATOR_GREATER_EQUAL)
            | (1ULL << sclParser::COMPARATOR_LESS)
            | (1ULL << sclParser::COMPARATOR_LESS_EQUAL))) != 0))) {
            dynamic_cast<ExpressionconcatedContext *>(_localctx)->comparator = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(79);
          dynamic_cast<ExpressionconcatedContext *>(_localctx)->right = expressionconcated(2);
          break;
        }

        } 
      }
      setState(84);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressiongroupedContext ------------------------------------------------------------------

sclParser::ExpressiongroupedContext::ExpressiongroupedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressionconstContext* sclParser::ExpressiongroupedContext::expressionconst() {
  return getRuleContext<sclParser::ExpressionconstContext>(0);
}

tree::TerminalNode* sclParser::ExpressiongroupedContext::ROUND_BRACKET_OPEN() {
  return getToken(sclParser::ROUND_BRACKET_OPEN, 0);
}

sclParser::ExpressionContext* sclParser::ExpressiongroupedContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}

tree::TerminalNode* sclParser::ExpressiongroupedContext::ROUND_BRACKET_CLOSE() {
  return getToken(sclParser::ROUND_BRACKET_CLOSE, 0);
}


size_t sclParser::ExpressiongroupedContext::getRuleIndex() const {
  return sclParser::RuleExpressiongrouped;
}


antlrcpp::Any sclParser::ExpressiongroupedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressiongrouped(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressiongroupedContext* sclParser::expressiongrouped() {
  ExpressiongroupedContext *_localctx = _tracker.createInstance<ExpressiongroupedContext>(_ctx, getState());
  enterRule(_localctx, 16, sclParser::RuleExpressiongrouped);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::T__0:
      case sclParser::OPERAND_MINUS:
      case sclParser::SQUARED_BRACKET_OPEN:
      case sclParser::CURLY_BRACKET_OPEN:
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE:
      case sclParser::INTEGER:
      case sclParser::FLOAT:
      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(85);
        expressionconst();
        break;
      }

      case sclParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(86);
        match(sclParser::ROUND_BRACKET_OPEN);
        setState(87);
        expression();
        setState(88);
        match(sclParser::ROUND_BRACKET_CLOSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionconstContext ------------------------------------------------------------------

sclParser::ExpressionconstContext::ExpressionconstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressiontypeContext* sclParser::ExpressionconstContext::expressiontype() {
  return getRuleContext<sclParser::ExpressiontypeContext>(0);
}

sclParser::ExpressionunaryContext* sclParser::ExpressionconstContext::expressionunary() {
  return getRuleContext<sclParser::ExpressionunaryContext>(0);
}

sclParser::VariableContext* sclParser::ExpressionconstContext::variable() {
  return getRuleContext<sclParser::VariableContext>(0);
}

sclParser::ArrayContext* sclParser::ExpressionconstContext::array() {
  return getRuleContext<sclParser::ArrayContext>(0);
}

sclParser::DictionaryContext* sclParser::ExpressionconstContext::dictionary() {
  return getRuleContext<sclParser::DictionaryContext>(0);
}


size_t sclParser::ExpressionconstContext::getRuleIndex() const {
  return sclParser::RuleExpressionconst;
}


antlrcpp::Any sclParser::ExpressionconstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionconst(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionconstContext* sclParser::expressionconst() {
  ExpressionconstContext *_localctx = _tracker.createInstance<ExpressionconstContext>(_ctx, getState());
  enterRule(_localctx, 18, sclParser::RuleExpressionconst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE:
      case sclParser::INTEGER:
      case sclParser::FLOAT:
      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(92);
        expressiontype();
        break;
      }

      case sclParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(93);
        expressionunary();
        break;
      }

      case sclParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(94);
        variable();
        break;
      }

      case sclParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(95);
        array();
        break;
      }

      case sclParser::CURLY_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 5);
        setState(96);
        dictionary();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionunaryContext ------------------------------------------------------------------

sclParser::ExpressionunaryContext::ExpressionunaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::ExpressionunaryContext::OPERAND_MINUS() {
  return getToken(sclParser::OPERAND_MINUS, 0);
}

sclParser::ExpressionContext* sclParser::ExpressionunaryContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}


size_t sclParser::ExpressionunaryContext::getRuleIndex() const {
  return sclParser::RuleExpressionunary;
}


antlrcpp::Any sclParser::ExpressionunaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionunary(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionunaryContext* sclParser::expressionunary() {
  ExpressionunaryContext *_localctx = _tracker.createInstance<ExpressionunaryContext>(_ctx, getState());
  enterRule(_localctx, 20, sclParser::RuleExpressionunary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(sclParser::OPERAND_MINUS);
    setState(100);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayContext ------------------------------------------------------------------

sclParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::ArrayContext::SQUARED_BRACKET_OPEN() {
  return getToken(sclParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* sclParser::ArrayContext::SQUARED_BRACKET_CLOSE() {
  return getToken(sclParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> sclParser::ArrayContext::COMMA() {
  return getTokens(sclParser::COMMA);
}

tree::TerminalNode* sclParser::ArrayContext::COMMA(size_t i) {
  return getToken(sclParser::COMMA, i);
}

std::vector<sclParser::ExpressionContext *> sclParser::ArrayContext::expression() {
  return getRuleContexts<sclParser::ExpressionContext>();
}

sclParser::ExpressionContext* sclParser::ArrayContext::expression(size_t i) {
  return getRuleContext<sclParser::ExpressionContext>(i);
}


size_t sclParser::ArrayContext::getRuleIndex() const {
  return sclParser::RuleArray;
}


antlrcpp::Any sclParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ArrayContext* sclParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 22, sclParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(108);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(103);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(104);
        match(sclParser::COMMA); 
      }
      setState(110);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::T__0)
      | (1ULL << sclParser::OPERAND_MINUS)
      | (1ULL << sclParser::SQUARED_BRACKET_OPEN)
      | (1ULL << sclParser::CURLY_BRACKET_OPEN)
      | (1ULL << sclParser::ROUND_BRACKET_OPEN)
      | (1ULL << sclParser::BOOLEAN_TRUE)
      | (1ULL << sclParser::BOOLEAN_FALSE)
      | (1ULL << sclParser::INTEGER)
      | (1ULL << sclParser::FLOAT)
      | (1ULL << sclParser::STRING_DOUBLE_QUOTE)
      | (1ULL << sclParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(111);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(113);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(112);
        match(sclParser::COMMA);
      }
    }
    setState(117);
    match(sclParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryContext ------------------------------------------------------------------

sclParser::DictionaryContext::DictionaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::DictionaryContext::CURLY_BRACKET_OPEN() {
  return getToken(sclParser::CURLY_BRACKET_OPEN, 0);
}

tree::TerminalNode* sclParser::DictionaryContext::CURLY_BRACKET_CLOSE() {
  return getToken(sclParser::CURLY_BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> sclParser::DictionaryContext::COMMA() {
  return getTokens(sclParser::COMMA);
}

tree::TerminalNode* sclParser::DictionaryContext::COMMA(size_t i) {
  return getToken(sclParser::COMMA, i);
}

std::vector<sclParser::DictionaryElementsContext *> sclParser::DictionaryContext::dictionaryElements() {
  return getRuleContexts<sclParser::DictionaryElementsContext>();
}

sclParser::DictionaryElementsContext* sclParser::DictionaryContext::dictionaryElements(size_t i) {
  return getRuleContext<sclParser::DictionaryElementsContext>(i);
}


size_t sclParser::DictionaryContext::getRuleIndex() const {
  return sclParser::RuleDictionary;
}


antlrcpp::Any sclParser::DictionaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitDictionary(this);
  else
    return visitor->visitChildren(this);
}

sclParser::DictionaryContext* sclParser::dictionary() {
  DictionaryContext *_localctx = _tracker.createInstance<DictionaryContext>(_ctx, getState());
  enterRule(_localctx, 24, sclParser::RuleDictionary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(sclParser::CURLY_BRACKET_OPEN);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(121);
        match(sclParser::COMMA); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::T__0)
      | (1ULL << sclParser::OPERAND_MINUS)
      | (1ULL << sclParser::SQUARED_BRACKET_OPEN)
      | (1ULL << sclParser::CURLY_BRACKET_OPEN)
      | (1ULL << sclParser::ROUND_BRACKET_OPEN)
      | (1ULL << sclParser::BOOLEAN_TRUE)
      | (1ULL << sclParser::BOOLEAN_FALSE)
      | (1ULL << sclParser::INTEGER)
      | (1ULL << sclParser::FLOAT)
      | (1ULL << sclParser::STRING_DOUBLE_QUOTE)
      | (1ULL << sclParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(128);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(130);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(129);
        match(sclParser::COMMA);
      }
    }
    setState(134);
    match(sclParser::CURLY_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryElementsContext ------------------------------------------------------------------

sclParser::DictionaryElementsContext::DictionaryElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::DictionaryElementsContext::COLON() {
  return getToken(sclParser::COLON, 0);
}

std::vector<sclParser::ExpressionContext *> sclParser::DictionaryElementsContext::expression() {
  return getRuleContexts<sclParser::ExpressionContext>();
}

sclParser::ExpressionContext* sclParser::DictionaryElementsContext::expression(size_t i) {
  return getRuleContext<sclParser::ExpressionContext>(i);
}


size_t sclParser::DictionaryElementsContext::getRuleIndex() const {
  return sclParser::RuleDictionaryElements;
}


antlrcpp::Any sclParser::DictionaryElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitDictionaryElements(this);
  else
    return visitor->visitChildren(this);
}

sclParser::DictionaryElementsContext* sclParser::dictionaryElements() {
  DictionaryElementsContext *_localctx = _tracker.createInstance<DictionaryElementsContext>(_ctx, getState());
  enterRule(_localctx, 26, sclParser::RuleDictionaryElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(137);
    match(sclParser::COLON);
    setState(138);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->value = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressiontypeContext ------------------------------------------------------------------

sclParser::ExpressiontypeContext::ExpressiontypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::TypeContext* sclParser::ExpressiontypeContext::type() {
  return getRuleContext<sclParser::TypeContext>(0);
}


size_t sclParser::ExpressiontypeContext::getRuleIndex() const {
  return sclParser::RuleExpressiontype;
}


antlrcpp::Any sclParser::ExpressiontypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressiontype(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressiontypeContext* sclParser::expressiontype() {
  ExpressiontypeContext *_localctx = _tracker.createInstance<ExpressiontypeContext>(_ctx, getState());
  enterRule(_localctx, 28, sclParser::RuleExpressiontype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

sclParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::BooleanContext* sclParser::TypeContext::boolean() {
  return getRuleContext<sclParser::BooleanContext>(0);
}

sclParser::NumericIntContext* sclParser::TypeContext::numericInt() {
  return getRuleContext<sclParser::NumericIntContext>(0);
}

sclParser::NumericFloatContext* sclParser::TypeContext::numericFloat() {
  return getRuleContext<sclParser::NumericFloatContext>(0);
}

sclParser::StringContext* sclParser::TypeContext::string() {
  return getRuleContext<sclParser::StringContext>(0);
}


size_t sclParser::TypeContext::getRuleIndex() const {
  return sclParser::RuleType;
}


antlrcpp::Any sclParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

sclParser::TypeContext* sclParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, sclParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(142);
        boolean();
        break;
      }

      case sclParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(143);
        numericInt();
        break;
      }

      case sclParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(144);
        numericFloat();
        break;
      }

      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 4);
        setState(145);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanContext ------------------------------------------------------------------

sclParser::BooleanContext::BooleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::BooleanContext::BOOLEAN_TRUE() {
  return getToken(sclParser::BOOLEAN_TRUE, 0);
}

tree::TerminalNode* sclParser::BooleanContext::BOOLEAN_FALSE() {
  return getToken(sclParser::BOOLEAN_FALSE, 0);
}


size_t sclParser::BooleanContext::getRuleIndex() const {
  return sclParser::RuleBoolean;
}


antlrcpp::Any sclParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}

sclParser::BooleanContext* sclParser::boolean() {
  BooleanContext *_localctx = _tracker.createInstance<BooleanContext>(_ctx, getState());
  enterRule(_localctx, 32, sclParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    _la = _input->LA(1);
    if (!(_la == sclParser::BOOLEAN_TRUE

    || _la == sclParser::BOOLEAN_FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericIntContext ------------------------------------------------------------------

sclParser::NumericIntContext::NumericIntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::NumericIntContext::INTEGER() {
  return getToken(sclParser::INTEGER, 0);
}


size_t sclParser::NumericIntContext::getRuleIndex() const {
  return sclParser::RuleNumericInt;
}


antlrcpp::Any sclParser::NumericIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitNumericInt(this);
  else
    return visitor->visitChildren(this);
}

sclParser::NumericIntContext* sclParser::numericInt() {
  NumericIntContext *_localctx = _tracker.createInstance<NumericIntContext>(_ctx, getState());
  enterRule(_localctx, 34, sclParser::RuleNumericInt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(sclParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericFloatContext ------------------------------------------------------------------

sclParser::NumericFloatContext::NumericFloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::NumericFloatContext::FLOAT() {
  return getToken(sclParser::FLOAT, 0);
}


size_t sclParser::NumericFloatContext::getRuleIndex() const {
  return sclParser::RuleNumericFloat;
}


antlrcpp::Any sclParser::NumericFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitNumericFloat(this);
  else
    return visitor->visitChildren(this);
}

sclParser::NumericFloatContext* sclParser::numericFloat() {
  NumericFloatContext *_localctx = _tracker.createInstance<NumericFloatContext>(_ctx, getState());
  enterRule(_localctx, 36, sclParser::RuleNumericFloat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(sclParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

sclParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::StringContext::STRING_SINGLE_QUOTE() {
  return getToken(sclParser::STRING_SINGLE_QUOTE, 0);
}

tree::TerminalNode* sclParser::StringContext::STRING_DOUBLE_QUOTE() {
  return getToken(sclParser::STRING_DOUBLE_QUOTE, 0);
}


size_t sclParser::StringContext::getRuleIndex() const {
  return sclParser::RuleString;
}


antlrcpp::Any sclParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

sclParser::StringContext* sclParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 38, sclParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    _la = _input->LA(1);
    if (!(_la == sclParser::STRING_DOUBLE_QUOTE

    || _la == sclParser::STRING_SINGLE_QUOTE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool sclParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return expressionconcatedSempred(dynamic_cast<ExpressionconcatedContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sclParser::expressionconcatedSempred(ExpressionconcatedContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> sclParser::_decisionToDFA;
atn::PredictionContextCache sclParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sclParser::_atn;
std::vector<uint16_t> sclParser::_serializedATN;

std::vector<std::string> sclParser::_ruleNames = {
  "module", "scope", "variable", "instruction", "print", "assign", "expression", 
  "expressionconcated", "expressiongrouped", "expressionconst", "expressionunary", 
  "array", "dictionary", "dictionaryElements", "expressiontype", "type", 
  "boolean", "numericInt", "numericFloat", "string"
};

std::vector<std::string> sclParser::_literalNames = {
  "", "'$'", "", "", "", "", "'print'", "'include'", "'import'", "'if'", 
  "'for'", "'in'", "'end'", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'&&'", 
  "'||'", "'..'", "'['", "']'", "'{'", "'}'", "'('", "')'", "';'", "':'", 
  "','", "'?'", "'!'", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'TRUE'", 
  "'FALSE'"
};

std::vector<std::string> sclParser::_symbolicNames = {
  "", "", "DELIMITER", "NEWLINE", "SPACE", "TAB", "KEYWORD_PRINT", "KEYWORD_INCLUDE", 
  "KEYWORD_IMPORT", "CONTROL_IF", "CONTROL_FOR", "CONTROL_IN", "CONTROL_END", 
  "OPERAND_EQUAL", "OPERAND_PLUS", "OPERAND_MINUS", "OPERAND_ASTERISK", 
  "OPERAND_SLASH", "OPERAND_CARET", "OPERAND_AND", "OPERAND_OR", "RANGE", 
  "SQUARED_BRACKET_OPEN", "SQUARED_BRACKET_CLOSE", "CURLY_BRACKET_OPEN", 
  "CURLY_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE", "SEMICOLON", 
  "COLON", "COMMA", "QUESTION_MARK", "EXCLAMATION_MARK", "COMPARATOR_EQUAL", 
  "COMPARATOR_NOT_EQUAL", "COMPARATOR_GREATER", "COMPARATOR_GREATER_EQUAL", 
  "COMPARATOR_LESS", "COMPARATOR_LESS_EQUAL", "BOOLEAN_TRUE", "BOOLEAN_FALSE", 
  "INTEGER", "FLOAT", "STRING_DOUBLE_QUOTE", "STRING_SINGLE_QUOTE", "FUNCTION_NAME", 
  "IDENTIFIER", "COMMENT"
};

dfa::Vocabulary sclParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> sclParser::_tokenNames;

sclParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x31, 0x9f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x30, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x33, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x36, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0x53, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x56, 0xb, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5d, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x64, 0xa, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x6d, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x70, 0xb, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x74, 0xa, 0xd, 0x5, 0xd, 0x76, 0xa, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x7e, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x81, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x85, 0xa, 0xe, 0x5, 0xe, 0x87, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x95, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x2, 0x3, 0x10, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2, 0x6, 0x3, 0x2, 0x10, 0x16, 0x3, 0x2, 0x23, 0x28, 0x3, 
    0x2, 0x29, 0x2a, 0x3, 0x2, 0x2d, 0x2e, 0x2, 0x9d, 0x2, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x31, 0x3, 0x2, 0x2, 0x2, 0x6, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x40, 0x3, 0x2, 0x2, 0x2, 0xc, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x47, 0x3, 0x2, 0x2, 0x2, 0x10, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x65, 0x3, 0x2, 0x2, 0x2, 0x18, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x94, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x24, 0x98, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 
    0x4, 0x3, 0x2, 0x2b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0x8, 
    0x5, 0x2, 0x2d, 0x2e, 0x7, 0x4, 0x2, 0x2, 0x2e, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 
    0x5, 0x8, 0x5, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x7, 0x2, 
    0x2, 0x3, 0x38, 0x5, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x3, 0x2, 
    0x2, 0x3a, 0x3b, 0x7, 0x30, 0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x3f, 0x5, 0xc, 0x7, 0x2, 0x3d, 0x3f, 0x5, 0xa, 0x6, 0x2, 0x3e, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x8, 0x2, 0x2, 0x41, 0x42, 0x5, 
    0xe, 0x8, 0x2, 0x42, 0xb, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x5, 0x6, 
    0x4, 0x2, 0x44, 0x45, 0x7, 0xf, 0x2, 0x2, 0x45, 0x46, 0x5, 0xe, 0x8, 
    0x2, 0x46, 0xd, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0x10, 0x9, 0x2, 
    0x48, 0xf, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x8, 0x9, 0x1, 0x2, 0x4a, 
    0x4b, 0x5, 0x12, 0xa, 0x2, 0x4b, 0x54, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
    0xc, 0x4, 0x2, 0x2, 0x4d, 0x4e, 0x9, 0x2, 0x2, 0x2, 0x4e, 0x53, 0x5, 
    0x10, 0x9, 0x5, 0x4f, 0x50, 0xc, 0x3, 0x2, 0x2, 0x50, 0x51, 0x9, 0x3, 
    0x2, 0x2, 0x51, 0x53, 0x5, 0x10, 0x9, 0x4, 0x52, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5d, 
    0x5, 0x14, 0xb, 0x2, 0x58, 0x59, 0x7, 0x1c, 0x2, 0x2, 0x59, 0x5a, 0x5, 
    0xe, 0x8, 0x2, 0x5a, 0x5b, 0x7, 0x1d, 0x2, 0x2, 0x5b, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x64, 0x5, 0x1e, 0x10, 0x2, 
    0x5f, 0x64, 0x5, 0x16, 0xc, 0x2, 0x60, 0x64, 0x5, 0x6, 0x4, 0x2, 0x61, 
    0x64, 0x5, 0x18, 0xd, 0x2, 0x62, 0x64, 0x5, 0x1a, 0xe, 0x2, 0x63, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x63, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x15, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x11, 0x2, 
    0x2, 0x66, 0x67, 0x5, 0xe, 0x8, 0x2, 0x67, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x6e, 0x7, 0x18, 0x2, 0x2, 0x69, 0x6a, 0x5, 0xe, 0x8, 0x2, 0x6a, 
    0x6b, 0x7, 0x20, 0x2, 0x2, 0x6b, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x5, 0xe, 0x8, 
    0x2, 0x72, 0x74, 0x7, 0x20, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x19, 0x2, 0x2, 0x78, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7f, 0x7, 0x1a, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x1c, 
    0xf, 0x2, 0x7b, 0x7c, 0x7, 0x20, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 
    0x5, 0x1c, 0xf, 0x2, 0x83, 0x85, 0x7, 0x20, 0x2, 0x2, 0x84, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x82, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x1b, 0x2, 0x2, 
    0x89, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0xe, 0x8, 0x2, 0x8b, 
    0x8c, 0x7, 0x1f, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0xe, 0x8, 0x2, 0x8d, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x20, 0x11, 0x2, 0x8f, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x95, 0x5, 0x22, 0x12, 0x2, 0x91, 0x95, 0x5, 0x24, 
    0x13, 0x2, 0x92, 0x95, 0x5, 0x26, 0x14, 0x2, 0x93, 0x95, 0x5, 0x28, 
    0x15, 0x2, 0x94, 0x90, 0x3, 0x2, 0x2, 0x2, 0x94, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x21, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x9, 0x4, 0x2, 0x2, 0x97, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x2b, 0x2, 0x2, 0x99, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x2c, 0x2, 0x2, 0x9b, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9d, 0x9, 0x5, 0x2, 0x2, 0x9d, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x31, 0x35, 0x3e, 0x52, 0x54, 0x5c, 0x63, 0x6e, 0x73, 
    0x75, 0x7f, 0x84, 0x86, 0x94, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

sclParser::Initializer sclParser::_init;
