
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

tree::TerminalNode* sclParser::ModuleContext::EOF() {
  return getToken(sclParser::EOF, 0);
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
    setState(44);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
    setState(45);
    match(sclParser::EOF);
   
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
    setState(52);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(47);
        dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
        dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
        setState(48);
        match(sclParser::DELIMITER); 
      }
      setState(54);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(56);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::T__0)
      | (1ULL << sclParser::KEYWORD_PRINT)
      | (1ULL << sclParser::CONTROL_IF)
      | (1ULL << sclParser::CONTROL_FOR))) != 0)) {
      setState(55);
      dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
      dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
    }
   
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
    setState(58);
    match(sclParser::T__0);
    setState(59);
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

sclParser::IfControlContext* sclParser::InstructionContext::ifControl() {
  return getRuleContext<sclParser::IfControlContext>(0);
}

sclParser::ForControlContext* sclParser::InstructionContext::forControl() {
  return getRuleContext<sclParser::ForControlContext>(0);
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
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(61);
        assign();
        break;
      }

      case sclParser::KEYWORD_PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(62);
        print();
        break;
      }

      case sclParser::CONTROL_IF: {
        enterOuterAlt(_localctx, 3);
        setState(63);
        ifControl();
        break;
      }

      case sclParser::CONTROL_FOR: {
        enterOuterAlt(_localctx, 4);
        setState(64);
        forControl();
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

//----------------- IfControlContext ------------------------------------------------------------------

sclParser::IfControlContext::IfControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::IfControlContext::CONTROL_IF() {
  return getToken(sclParser::CONTROL_IF, 0);
}

sclParser::ExpressionContext* sclParser::IfControlContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}

tree::TerminalNode* sclParser::IfControlContext::DELIMITER() {
  return getToken(sclParser::DELIMITER, 0);
}

sclParser::ScopeContext* sclParser::IfControlContext::scope() {
  return getRuleContext<sclParser::ScopeContext>(0);
}

tree::TerminalNode* sclParser::IfControlContext::CONTROL_END() {
  return getToken(sclParser::CONTROL_END, 0);
}


size_t sclParser::IfControlContext::getRuleIndex() const {
  return sclParser::RuleIfControl;
}


antlrcpp::Any sclParser::IfControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitIfControl(this);
  else
    return visitor->visitChildren(this);
}

sclParser::IfControlContext* sclParser::ifControl() {
  IfControlContext *_localctx = _tracker.createInstance<IfControlContext>(_ctx, getState());
  enterRule(_localctx, 8, sclParser::RuleIfControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(sclParser::CONTROL_IF);
    setState(68);
    expression();
    setState(69);
    match(sclParser::DELIMITER);
    setState(70);
    scope();
    setState(71);
    match(sclParser::CONTROL_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForControlContext ------------------------------------------------------------------

sclParser::ForControlContext::ForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::ForControlContext::CONTROL_FOR() {
  return getToken(sclParser::CONTROL_FOR, 0);
}

sclParser::VariableContext* sclParser::ForControlContext::variable() {
  return getRuleContext<sclParser::VariableContext>(0);
}

tree::TerminalNode* sclParser::ForControlContext::CONTROL_IN() {
  return getToken(sclParser::CONTROL_IN, 0);
}

sclParser::ExpressionContext* sclParser::ForControlContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}

tree::TerminalNode* sclParser::ForControlContext::DELIMITER() {
  return getToken(sclParser::DELIMITER, 0);
}

sclParser::ScopeContext* sclParser::ForControlContext::scope() {
  return getRuleContext<sclParser::ScopeContext>(0);
}

tree::TerminalNode* sclParser::ForControlContext::CONTROL_END() {
  return getToken(sclParser::CONTROL_END, 0);
}


size_t sclParser::ForControlContext::getRuleIndex() const {
  return sclParser::RuleForControl;
}


antlrcpp::Any sclParser::ForControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitForControl(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ForControlContext* sclParser::forControl() {
  ForControlContext *_localctx = _tracker.createInstance<ForControlContext>(_ctx, getState());
  enterRule(_localctx, 10, sclParser::RuleForControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(sclParser::CONTROL_FOR);
    setState(74);
    variable();
    setState(75);
    match(sclParser::CONTROL_IN);
    setState(76);
    expression();
    setState(77);
    match(sclParser::DELIMITER);
    setState(78);
    scope();
    setState(79);
    match(sclParser::CONTROL_END);
   
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
  enterRule(_localctx, 12, sclParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(sclParser::KEYWORD_PRINT);
    setState(82);
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
  enterRule(_localctx, 14, sclParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(85);
    match(sclParser::OPERAND_EQUAL);
    setState(86);
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

sclParser::ExpressionConcatedContext* sclParser::ExpressionContext::expressionConcated() {
  return getRuleContext<sclParser::ExpressionConcatedContext>(0);
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
  enterRule(_localctx, 16, sclParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    expressionConcated(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionConcatedContext ------------------------------------------------------------------

sclParser::ExpressionConcatedContext::ExpressionConcatedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressionGroupedContext* sclParser::ExpressionConcatedContext::expressionGrouped() {
  return getRuleContext<sclParser::ExpressionGroupedContext>(0);
}

std::vector<sclParser::ExpressionConcatedContext *> sclParser::ExpressionConcatedContext::expressionConcated() {
  return getRuleContexts<sclParser::ExpressionConcatedContext>();
}

sclParser::ExpressionConcatedContext* sclParser::ExpressionConcatedContext::expressionConcated(size_t i) {
  return getRuleContext<sclParser::ExpressionConcatedContext>(i);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_PLUS() {
  return getToken(sclParser::OPERAND_PLUS, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_MINUS() {
  return getToken(sclParser::OPERAND_MINUS, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_ASTERISK() {
  return getToken(sclParser::OPERAND_ASTERISK, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_SLASH() {
  return getToken(sclParser::OPERAND_SLASH, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_CARET() {
  return getToken(sclParser::OPERAND_CARET, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_AND() {
  return getToken(sclParser::OPERAND_AND, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::OPERAND_OR() {
  return getToken(sclParser::OPERAND_OR, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::COMPARATOR_EQUAL() {
  return getToken(sclParser::COMPARATOR_EQUAL, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::COMPARATOR_NOT_EQUAL() {
  return getToken(sclParser::COMPARATOR_NOT_EQUAL, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::COMPARATOR_LESS() {
  return getToken(sclParser::COMPARATOR_LESS, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::COMPARATOR_GREATER() {
  return getToken(sclParser::COMPARATOR_GREATER, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::COMPARATOR_LESS_EQUAL() {
  return getToken(sclParser::COMPARATOR_LESS_EQUAL, 0);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::COMPARATOR_GREATER_EQUAL() {
  return getToken(sclParser::COMPARATOR_GREATER_EQUAL, 0);
}


size_t sclParser::ExpressionConcatedContext::getRuleIndex() const {
  return sclParser::RuleExpressionConcated;
}


antlrcpp::Any sclParser::ExpressionConcatedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionConcated(this);
  else
    return visitor->visitChildren(this);
}


sclParser::ExpressionConcatedContext* sclParser::expressionConcated() {
   return expressionConcated(0);
}

sclParser::ExpressionConcatedContext* sclParser::expressionConcated(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sclParser::ExpressionConcatedContext *_localctx = _tracker.createInstance<ExpressionConcatedContext>(_ctx, parentState);
  sclParser::ExpressionConcatedContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, sclParser::RuleExpressionConcated, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(91);
    expressionGrouped();
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(99);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(93);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(94);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->operand = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << sclParser::OPERAND_PLUS)
            | (1ULL << sclParser::OPERAND_MINUS)
            | (1ULL << sclParser::OPERAND_ASTERISK)
            | (1ULL << sclParser::OPERAND_SLASH)
            | (1ULL << sclParser::OPERAND_CARET)
            | (1ULL << sclParser::OPERAND_AND)
            | (1ULL << sclParser::OPERAND_OR))) != 0))) {
            dynamic_cast<ExpressionConcatedContext *>(_localctx)->operand = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(95);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(3);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(96);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(97);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->comparator = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << sclParser::COMPARATOR_EQUAL)
            | (1ULL << sclParser::COMPARATOR_NOT_EQUAL)
            | (1ULL << sclParser::COMPARATOR_GREATER)
            | (1ULL << sclParser::COMPARATOR_GREATER_EQUAL)
            | (1ULL << sclParser::COMPARATOR_LESS)
            | (1ULL << sclParser::COMPARATOR_LESS_EQUAL))) != 0))) {
            dynamic_cast<ExpressionConcatedContext *>(_localctx)->comparator = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(98);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(2);
          break;
        }

        } 
      }
      setState(103);
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

//----------------- ExpressionGroupedContext ------------------------------------------------------------------

sclParser::ExpressionGroupedContext::ExpressionGroupedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressionConstContext* sclParser::ExpressionGroupedContext::expressionConst() {
  return getRuleContext<sclParser::ExpressionConstContext>(0);
}

tree::TerminalNode* sclParser::ExpressionGroupedContext::ROUND_BRACKET_OPEN() {
  return getToken(sclParser::ROUND_BRACKET_OPEN, 0);
}

sclParser::ExpressionContext* sclParser::ExpressionGroupedContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}

tree::TerminalNode* sclParser::ExpressionGroupedContext::ROUND_BRACKET_CLOSE() {
  return getToken(sclParser::ROUND_BRACKET_CLOSE, 0);
}


size_t sclParser::ExpressionGroupedContext::getRuleIndex() const {
  return sclParser::RuleExpressionGrouped;
}


antlrcpp::Any sclParser::ExpressionGroupedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionGrouped(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionGroupedContext* sclParser::expressionGrouped() {
  ExpressionGroupedContext *_localctx = _tracker.createInstance<ExpressionGroupedContext>(_ctx, getState());
  enterRule(_localctx, 20, sclParser::RuleExpressionGrouped);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(109);
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
        setState(104);
        expressionConst();
        break;
      }

      case sclParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(sclParser::ROUND_BRACKET_OPEN);
        setState(106);
        expression();
        setState(107);
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

//----------------- ExpressionConstContext ------------------------------------------------------------------

sclParser::ExpressionConstContext::ExpressionConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::ExpressionTypeContext* sclParser::ExpressionConstContext::expressionType() {
  return getRuleContext<sclParser::ExpressionTypeContext>(0);
}

sclParser::ExpressionUnaryContext* sclParser::ExpressionConstContext::expressionUnary() {
  return getRuleContext<sclParser::ExpressionUnaryContext>(0);
}

sclParser::VariableContext* sclParser::ExpressionConstContext::variable() {
  return getRuleContext<sclParser::VariableContext>(0);
}

sclParser::ArrayContext* sclParser::ExpressionConstContext::array() {
  return getRuleContext<sclParser::ArrayContext>(0);
}

sclParser::DictionaryContext* sclParser::ExpressionConstContext::dictionary() {
  return getRuleContext<sclParser::DictionaryContext>(0);
}


size_t sclParser::ExpressionConstContext::getRuleIndex() const {
  return sclParser::RuleExpressionConst;
}


antlrcpp::Any sclParser::ExpressionConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionConst(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionConstContext* sclParser::expressionConst() {
  ExpressionConstContext *_localctx = _tracker.createInstance<ExpressionConstContext>(_ctx, getState());
  enterRule(_localctx, 22, sclParser::RuleExpressionConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE:
      case sclParser::INTEGER:
      case sclParser::FLOAT:
      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(111);
        expressionType();
        break;
      }

      case sclParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(112);
        expressionUnary();
        break;
      }

      case sclParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(113);
        variable();
        break;
      }

      case sclParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(114);
        array();
        break;
      }

      case sclParser::CURLY_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 5);
        setState(115);
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

//----------------- ExpressionUnaryContext ------------------------------------------------------------------

sclParser::ExpressionUnaryContext::ExpressionUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::ExpressionUnaryContext::OPERAND_MINUS() {
  return getToken(sclParser::OPERAND_MINUS, 0);
}

sclParser::ExpressionContext* sclParser::ExpressionUnaryContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}


size_t sclParser::ExpressionUnaryContext::getRuleIndex() const {
  return sclParser::RuleExpressionUnary;
}


antlrcpp::Any sclParser::ExpressionUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionUnary(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionUnaryContext* sclParser::expressionUnary() {
  ExpressionUnaryContext *_localctx = _tracker.createInstance<ExpressionUnaryContext>(_ctx, getState());
  enterRule(_localctx, 24, sclParser::RuleExpressionUnary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(sclParser::OPERAND_MINUS);
    setState(119);
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
  enterRule(_localctx, 26, sclParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(127);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(122);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(123);
        match(sclParser::COMMA); 
      }
      setState(129);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(134);
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
      setState(130);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(131);
        match(sclParser::COMMA);
      }
    }
    setState(136);
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
  enterRule(_localctx, 28, sclParser::RuleDictionary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(sclParser::CURLY_BRACKET_OPEN);
    setState(144);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(139);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(140);
        match(sclParser::COMMA); 
      }
      setState(146);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(151);
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
      setState(147);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(149);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(148);
        match(sclParser::COMMA);
      }
    }
    setState(153);
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
  enterRule(_localctx, 30, sclParser::RuleDictionaryElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(156);
    match(sclParser::COLON);
    setState(157);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->value = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionTypeContext ------------------------------------------------------------------

sclParser::ExpressionTypeContext::ExpressionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::TypeContext* sclParser::ExpressionTypeContext::type() {
  return getRuleContext<sclParser::TypeContext>(0);
}


size_t sclParser::ExpressionTypeContext::getRuleIndex() const {
  return sclParser::RuleExpressionType;
}


antlrcpp::Any sclParser::ExpressionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionType(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionTypeContext* sclParser::expressionType() {
  ExpressionTypeContext *_localctx = _tracker.createInstance<ExpressionTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, sclParser::RuleExpressionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
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
  enterRule(_localctx, 34, sclParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        boolean();
        break;
      }

      case sclParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(162);
        numericInt();
        break;
      }

      case sclParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(163);
        numericFloat();
        break;
      }

      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 4);
        setState(164);
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
  enterRule(_localctx, 36, sclParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
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
  enterRule(_localctx, 38, sclParser::RuleNumericInt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
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
  enterRule(_localctx, 40, sclParser::RuleNumericFloat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
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
  enterRule(_localctx, 42, sclParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
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
    case 9: return expressionConcatedSempred(dynamic_cast<ExpressionConcatedContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sclParser::expressionConcatedSempred(ExpressionConcatedContext *_localctx, size_t predicateIndex) {
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
  "module", "scope", "variable", "instruction", "ifControl", "forControl", 
  "print", "assign", "expression", "expressionConcated", "expressionGrouped", 
  "expressionConst", "expressionUnary", "array", "dictionary", "dictionaryElements", 
  "expressionType", "type", "boolean", "numericInt", "numericFloat", "string"
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
    0x3, 0x31, 0xb2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x35, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x38, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3b, 0xa, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x44, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0x66, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x69, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x70, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x77, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 
    0x80, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x83, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x87, 0xa, 0xf, 0x5, 0xf, 0x89, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x91, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0x94, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x98, 0xa, 0x10, 0x5, 0x10, 0x9a, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xa8, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x2, 0x3, 0x14, 0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2, 0x6, 0x3, 0x2, 0x10, 0x16, 0x3, 0x2, 0x23, 
    0x28, 0x3, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2d, 0x2e, 0x2, 0xb0, 0x2, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x36, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x43, 0x3, 0x2, 0x2, 0x2, 0xa, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x53, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x24, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x28, 0xab, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 
    0x5, 0x4, 0x3, 0x2, 0x2f, 0x30, 0x7, 0x2, 0x2, 0x3, 0x30, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x32, 0x5, 0x8, 0x5, 0x2, 0x32, 0x33, 0x7, 0x4, 
    0x2, 0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x38, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3b, 0x5, 0x8, 0x5, 0x2, 0x3a, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x30, 
    0x2, 0x2, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x44, 0x5, 0x10, 0x9, 
    0x2, 0x40, 0x44, 0x5, 0xe, 0x8, 0x2, 0x41, 0x44, 0x5, 0xa, 0x6, 0x2, 
    0x42, 0x44, 0x5, 0xc, 0x7, 0x2, 0x43, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x9, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 
    0xb, 0x2, 0x2, 0x46, 0x47, 0x5, 0x12, 0xa, 0x2, 0x47, 0x48, 0x7, 0x4, 
    0x2, 0x2, 0x48, 0x49, 0x5, 0x4, 0x3, 0x2, 0x49, 0x4a, 0x7, 0xe, 0x2, 
    0x2, 0x4a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0xc, 0x2, 0x2, 
    0x4c, 0x4d, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4e, 0x7, 0xd, 0x2, 0x2, 0x4e, 
    0x4f, 0x5, 0x12, 0xa, 0x2, 0x4f, 0x50, 0x7, 0x4, 0x2, 0x2, 0x50, 0x51, 
    0x5, 0x4, 0x3, 0x2, 0x51, 0x52, 0x7, 0xe, 0x2, 0x2, 0x52, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x8, 0x2, 0x2, 0x54, 0x55, 0x5, 0x12, 
    0xa, 0x2, 0x55, 0xf, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x6, 0x4, 
    0x2, 0x57, 0x58, 0x7, 0xf, 0x2, 0x2, 0x58, 0x59, 0x5, 0x12, 0xa, 0x2, 
    0x59, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x14, 0xb, 0x2, 0x5b, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x8, 0xb, 0x1, 0x2, 0x5d, 0x5e, 
    0x5, 0x16, 0xc, 0x2, 0x5e, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0xc, 
    0x4, 0x2, 0x2, 0x60, 0x61, 0x9, 0x2, 0x2, 0x2, 0x61, 0x66, 0x5, 0x14, 
    0xb, 0x5, 0x62, 0x63, 0xc, 0x3, 0x2, 0x2, 0x63, 0x64, 0x9, 0x3, 0x2, 
    0x2, 0x64, 0x66, 0x5, 0x14, 0xb, 0x4, 0x65, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x70, 0x5, 
    0x18, 0xd, 0x2, 0x6b, 0x6c, 0x7, 0x1c, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x12, 
    0xa, 0x2, 0x6d, 0x6e, 0x7, 0x1d, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x17, 0x3, 0x2, 0x2, 0x2, 0x71, 0x77, 0x5, 0x22, 0x12, 0x2, 0x72, 
    0x77, 0x5, 0x1a, 0xe, 0x2, 0x73, 0x77, 0x5, 0x6, 0x4, 0x2, 0x74, 0x77, 
    0x5, 0x1c, 0xf, 0x2, 0x75, 0x77, 0x5, 0x1e, 0x10, 0x2, 0x76, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x72, 0x3, 0x2, 0x2, 0x2, 0x76, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x19, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x11, 0x2, 0x2, 
    0x79, 0x7a, 0x5, 0x12, 0xa, 0x2, 0x7a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x81, 0x7, 0x18, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x12, 0xa, 0x2, 0x7d, 0x7e, 
    0x7, 0x20, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0x12, 0xa, 0x2, 
    0x85, 0x87, 0x7, 0x20, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 0x88, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x19, 0x2, 0x2, 0x8b, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x92, 0x7, 0x1a, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x20, 0x11, 
    0x2, 0x8e, 0x8f, 0x7, 0x20, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x5, 
    0x20, 0x11, 0x2, 0x96, 0x98, 0x7, 0x20, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x95, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x1b, 0x2, 0x2, 0x9c, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x12, 0xa, 0x2, 0x9e, 0x9f, 
    0x7, 0x1f, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x12, 0xa, 0x2, 0xa0, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x24, 0x13, 0x2, 0xa2, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa8, 0x5, 0x26, 0x14, 0x2, 0xa4, 0xa8, 0x5, 0x28, 0x15, 
    0x2, 0xa5, 0xa8, 0x5, 0x2a, 0x16, 0x2, 0xa6, 0xa8, 0x5, 0x2c, 0x17, 
    0x2, 0xa7, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x9, 0x4, 0x2, 0x2, 0xaa, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x2b, 0x2, 0x2, 0xac, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x2c, 0x2, 0x2, 0xae, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x9, 0x5, 0x2, 0x2, 0xb0, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x36, 0x3a, 0x43, 0x65, 0x67, 0x6f, 0x76, 0x81, 0x86, 0x88, 
    0x92, 0x97, 0x99, 0xa7, 
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
