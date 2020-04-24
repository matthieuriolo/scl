
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
    setState(52);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
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
    setState(60);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(55);
        dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
        dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
        setState(56);
        match(sclParser::DELIMITER); 
      }
      setState(62);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::T__0)
      | (1ULL << sclParser::KEYWORD_PRINT)
      | (1ULL << sclParser::CONTROL_IF)
      | (1ULL << sclParser::CONTROL_FOR)
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
      setState(63);
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
    setState(66);
    match(sclParser::T__0);
    setState(67);
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

sclParser::AssignPropertyContext* sclParser::InstructionContext::assignProperty() {
  return getRuleContext<sclParser::AssignPropertyContext>(0);
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
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      assignProperty();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(71);
      print();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(72);
      ifControl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(73);
      forControl();
      break;
    }

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
    setState(76);
    match(sclParser::CONTROL_IF);
    setState(77);
    expression();
    setState(78);
    match(sclParser::DELIMITER);
    setState(79);
    scope();
    setState(80);
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
    setState(82);
    match(sclParser::CONTROL_FOR);
    setState(83);
    variable();
    setState(84);
    match(sclParser::CONTROL_IN);
    setState(85);
    expression();
    setState(86);
    match(sclParser::DELIMITER);
    setState(87);
    scope();
    setState(88);
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
    setState(90);
    match(sclParser::KEYWORD_PRINT);
    setState(91);
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
    setState(93);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(94);
    match(sclParser::OPERAND_EQUAL);
    setState(95);
    dynamic_cast<AssignContext *>(_localctx)->value = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignPropertyContext ------------------------------------------------------------------

sclParser::AssignPropertyContext::AssignPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::AssignPropertyContext::SQUARED_BRACKET_OPEN() {
  return getToken(sclParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* sclParser::AssignPropertyContext::SQUARED_BRACKET_CLOSE() {
  return getToken(sclParser::SQUARED_BRACKET_CLOSE, 0);
}

tree::TerminalNode* sclParser::AssignPropertyContext::OPERAND_EQUAL() {
  return getToken(sclParser::OPERAND_EQUAL, 0);
}

std::vector<sclParser::ExpressionContext *> sclParser::AssignPropertyContext::expression() {
  return getRuleContexts<sclParser::ExpressionContext>();
}

sclParser::ExpressionContext* sclParser::AssignPropertyContext::expression(size_t i) {
  return getRuleContext<sclParser::ExpressionContext>(i);
}


size_t sclParser::AssignPropertyContext::getRuleIndex() const {
  return sclParser::RuleAssignProperty;
}


antlrcpp::Any sclParser::AssignPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitAssignProperty(this);
  else
    return visitor->visitChildren(this);
}

sclParser::AssignPropertyContext* sclParser::assignProperty() {
  AssignPropertyContext *_localctx = _tracker.createInstance<AssignPropertyContext>(_ctx, getState());
  enterRule(_localctx, 16, sclParser::RuleAssignProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    dynamic_cast<AssignPropertyContext *>(_localctx)->property = expression();
    setState(98);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(99);
    dynamic_cast<AssignPropertyContext *>(_localctx)->key = expression();
    setState(100);
    match(sclParser::SQUARED_BRACKET_CLOSE);
    setState(101);
    match(sclParser::OPERAND_EQUAL);
    setState(102);
    dynamic_cast<AssignPropertyContext *>(_localctx)->value = expression();
   
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

sclParser::ExpressionAccessContext* sclParser::ExpressionContext::expressionAccess() {
  return getRuleContext<sclParser::ExpressionAccessContext>(0);
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
  enterRule(_localctx, 18, sclParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      expressionConcated(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      expressionAccess();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionAccessContext ------------------------------------------------------------------

sclParser::ExpressionAccessContext::ExpressionAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sclParser::AccessContext* sclParser::ExpressionAccessContext::access() {
  return getRuleContext<sclParser::AccessContext>(0);
}

sclParser::AccessRangeContext* sclParser::ExpressionAccessContext::accessRange() {
  return getRuleContext<sclParser::AccessRangeContext>(0);
}


size_t sclParser::ExpressionAccessContext::getRuleIndex() const {
  return sclParser::RuleExpressionAccess;
}


antlrcpp::Any sclParser::ExpressionAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitExpressionAccess(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ExpressionAccessContext* sclParser::expressionAccess() {
  ExpressionAccessContext *_localctx = _tracker.createInstance<ExpressionAccessContext>(_ctx, getState());
  enterRule(_localctx, 20, sclParser::RuleExpressionAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(108);
      access();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      accessRange();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessContext ------------------------------------------------------------------

sclParser::AccessContext::AccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::AccessContext::SQUARED_BRACKET_OPEN() {
  return getToken(sclParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* sclParser::AccessContext::SQUARED_BRACKET_CLOSE() {
  return getToken(sclParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<sclParser::ExpressionConcatedContext *> sclParser::AccessContext::expressionConcated() {
  return getRuleContexts<sclParser::ExpressionConcatedContext>();
}

sclParser::ExpressionConcatedContext* sclParser::AccessContext::expressionConcated(size_t i) {
  return getRuleContext<sclParser::ExpressionConcatedContext>(i);
}


size_t sclParser::AccessContext::getRuleIndex() const {
  return sclParser::RuleAccess;
}


antlrcpp::Any sclParser::AccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitAccess(this);
  else
    return visitor->visitChildren(this);
}

sclParser::AccessContext* sclParser::access() {
  AccessContext *_localctx = _tracker.createInstance<AccessContext>(_ctx, getState());
  enterRule(_localctx, 22, sclParser::RuleAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    dynamic_cast<AccessContext *>(_localctx)->property = expressionConcated(0);
    setState(113);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(114);
    dynamic_cast<AccessContext *>(_localctx)->key = expressionConcated(0);
    setState(115);
    match(sclParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessRangeContext ------------------------------------------------------------------

sclParser::AccessRangeContext::AccessRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::AccessRangeContext::SQUARED_BRACKET_OPEN() {
  return getToken(sclParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* sclParser::AccessRangeContext::COLON() {
  return getToken(sclParser::COLON, 0);
}

tree::TerminalNode* sclParser::AccessRangeContext::SQUARED_BRACKET_CLOSE() {
  return getToken(sclParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<sclParser::ExpressionConcatedContext *> sclParser::AccessRangeContext::expressionConcated() {
  return getRuleContexts<sclParser::ExpressionConcatedContext>();
}

sclParser::ExpressionConcatedContext* sclParser::AccessRangeContext::expressionConcated(size_t i) {
  return getRuleContext<sclParser::ExpressionConcatedContext>(i);
}


size_t sclParser::AccessRangeContext::getRuleIndex() const {
  return sclParser::RuleAccessRange;
}


antlrcpp::Any sclParser::AccessRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitAccessRange(this);
  else
    return visitor->visitChildren(this);
}

sclParser::AccessRangeContext* sclParser::accessRange() {
  AccessRangeContext *_localctx = _tracker.createInstance<AccessRangeContext>(_ctx, getState());
  enterRule(_localctx, 24, sclParser::RuleAccessRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(118);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(119);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(120);
      match(sclParser::COLON);
      setState(121);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(124);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(125);
      match(sclParser::COLON);
      setState(126);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(127);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(129);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(130);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(131);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(132);
      match(sclParser::COLON);
      setState(133);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(134);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    }
   
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

tree::TerminalNode* sclParser::ExpressionConcatedContext::RANGE() {
  return getToken(sclParser::RANGE, 0);
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, sclParser::RuleExpressionConcated, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(139);
    expressionGrouped();
    _ctx->stop = _input->LT(-1);
    setState(152);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(150);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(141);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(142);
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
          setState(143);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(144);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(145);
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
          setState(146);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(147);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(148);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->range = match(sclParser::RANGE);
          setState(149);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(2);
          break;
        }

        } 
      }
      setState(154);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
  enterRule(_localctx, 28, sclParser::RuleExpressionGrouped);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
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
        setState(155);
        expressionConst();
        break;
      }

      case sclParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(156);
        match(sclParser::ROUND_BRACKET_OPEN);
        setState(157);
        expression();
        setState(158);
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
  enterRule(_localctx, 30, sclParser::RuleExpressionConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE:
      case sclParser::INTEGER:
      case sclParser::FLOAT:
      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        expressionType();
        break;
      }

      case sclParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        expressionUnary();
        break;
      }

      case sclParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(164);
        variable();
        break;
      }

      case sclParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(165);
        array();
        break;
      }

      case sclParser::CURLY_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 5);
        setState(166);
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
  enterRule(_localctx, 32, sclParser::RuleExpressionUnary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(sclParser::OPERAND_MINUS);
    setState(170);
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
  enterRule(_localctx, 34, sclParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(178);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(173);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(174);
        match(sclParser::COMMA); 
      }
      setState(180);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(185);
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
      setState(181);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(183);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(182);
        match(sclParser::COMMA);
      }
    }
    setState(187);
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
  enterRule(_localctx, 36, sclParser::RuleDictionary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(sclParser::CURLY_BRACKET_OPEN);
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(190);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(191);
        match(sclParser::COMMA); 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
    setState(202);
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
      setState(198);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(199);
        match(sclParser::COMMA);
      }
    }
    setState(204);
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
  enterRule(_localctx, 38, sclParser::RuleDictionaryElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(207);
    match(sclParser::COLON);
    setState(208);
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
  enterRule(_localctx, 40, sclParser::RuleExpressionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
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
  enterRule(_localctx, 42, sclParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(216);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        boolean();
        break;
      }

      case sclParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(213);
        numericInt();
        break;
      }

      case sclParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(214);
        numericFloat();
        break;
      }

      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 4);
        setState(215);
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
  enterRule(_localctx, 44, sclParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
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
  enterRule(_localctx, 46, sclParser::RuleNumericInt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
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
  enterRule(_localctx, 48, sclParser::RuleNumericFloat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
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
  enterRule(_localctx, 50, sclParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
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
    case 13: return expressionConcatedSempred(dynamic_cast<ExpressionConcatedContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sclParser::expressionConcatedSempred(ExpressionConcatedContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

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
  "print", "assign", "assignProperty", "expression", "expressionAccess", 
  "access", "accessRange", "expressionConcated", "expressionGrouped", "expressionConst", 
  "expressionUnary", "array", "dictionary", "dictionaryElements", "expressionType", 
  "type", "boolean", "numericInt", "numericFloat", "string"
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
    0x3, 0x31, 0xe5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3d, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x40, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x43, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4d, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x6d, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x71, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x8b, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x99, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x9c, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xa3, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xaa, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xb3, 0xa, 
    0x13, 0xc, 0x13, 0xe, 0x13, 0xb6, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
    0x13, 0xba, 0xa, 0x13, 0x5, 0x13, 0xbc, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xc4, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0xc7, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0xcb, 0xa, 0x14, 0x5, 0x14, 0xcd, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xdb, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x2, 0x3, 0x1c, 0x1c, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x2, 0x6, 0x3, 0x2, 
    0x10, 0x16, 0x3, 0x2, 0x23, 0x28, 0x3, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2d, 
    0x2e, 0x2, 0xe5, 0x2, 0x36, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x44, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x54, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x72, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa2, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xab, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0x26, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x30, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x37, 0x5, 0x4, 0x3, 0x2, 0x37, 0x38, 0x7, 0x2, 0x2, 0x3, 
    0x38, 0x3, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x8, 0x5, 0x2, 0x3a, 
    0x3b, 0x7, 0x4, 0x2, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x43, 0x5, 0x8, 0x5, 
    0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x5, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x3, 0x2, 0x2, 0x45, 
    0x46, 0x7, 0x30, 0x2, 0x2, 0x46, 0x7, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4d, 
    0x5, 0x10, 0x9, 0x2, 0x48, 0x4d, 0x5, 0x12, 0xa, 0x2, 0x49, 0x4d, 0x5, 
    0xe, 0x8, 0x2, 0x4a, 0x4d, 0x5, 0xa, 0x6, 0x2, 0x4b, 0x4d, 0x5, 0xc, 
    0x7, 0x2, 0x4c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0xb, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x14, 0xb, 0x2, 0x50, 0x51, 
    0x7, 0x4, 0x2, 0x2, 0x51, 0x52, 0x5, 0x4, 0x3, 0x2, 0x52, 0x53, 0x7, 
    0xe, 0x2, 0x2, 0x53, 0xb, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0xc, 
    0x2, 0x2, 0x55, 0x56, 0x5, 0x6, 0x4, 0x2, 0x56, 0x57, 0x7, 0xd, 0x2, 
    0x2, 0x57, 0x58, 0x5, 0x14, 0xb, 0x2, 0x58, 0x59, 0x7, 0x4, 0x2, 0x2, 
    0x59, 0x5a, 0x5, 0x4, 0x3, 0x2, 0x5a, 0x5b, 0x7, 0xe, 0x2, 0x2, 0x5b, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 0x5e, 
    0x5, 0x14, 0xb, 0x2, 0x5e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x5, 
    0x6, 0x4, 0x2, 0x60, 0x61, 0x7, 0xf, 0x2, 0x2, 0x61, 0x62, 0x5, 0x14, 
    0xb, 0x2, 0x62, 0x11, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x5, 0x14, 0xb, 
    0x2, 0x64, 0x65, 0x7, 0x18, 0x2, 0x2, 0x65, 0x66, 0x5, 0x14, 0xb, 0x2, 
    0x66, 0x67, 0x7, 0x19, 0x2, 0x2, 0x67, 0x68, 0x7, 0xf, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0x14, 0xb, 0x2, 0x69, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 
    0x5, 0x1c, 0xf, 0x2, 0x6b, 0x6d, 0x5, 0x16, 0xc, 0x2, 0x6c, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x71, 0x5, 0x18, 0xd, 0x2, 0x6f, 0x71, 0x5, 0x1a, 0xe, 
    0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x17, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x1c, 0xf, 0x2, 0x73, 
    0x74, 0x7, 0x18, 0x2, 0x2, 0x74, 0x75, 0x5, 0x1c, 0xf, 0x2, 0x75, 0x76, 
    0x7, 0x19, 0x2, 0x2, 0x76, 0x19, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x5, 
    0x1c, 0xf, 0x2, 0x78, 0x79, 0x7, 0x18, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x1c, 
    0xf, 0x2, 0x7a, 0x7b, 0x7, 0x1f, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x19, 0x2, 
    0x2, 0x7c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x1c, 0xf, 0x2, 
    0x7e, 0x7f, 0x7, 0x18, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x1f, 0x2, 0x2, 0x80, 
    0x81, 0x5, 0x1c, 0xf, 0x2, 0x81, 0x82, 0x7, 0x19, 0x2, 0x2, 0x82, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x1c, 0xf, 0x2, 0x84, 0x85, 0x7, 
    0x18, 0x2, 0x2, 0x85, 0x86, 0x5, 0x1c, 0xf, 0x2, 0x86, 0x87, 0x7, 0x1f, 
    0x2, 0x2, 0x87, 0x88, 0x5, 0x1c, 0xf, 0x2, 0x88, 0x89, 0x7, 0x19, 0x2, 
    0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x8, 0xf, 0x1, 0x2, 0x8d, 0x8e, 
    0x5, 0x1e, 0x10, 0x2, 0x8e, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0xc, 
    0x5, 0x2, 0x2, 0x90, 0x91, 0x9, 0x2, 0x2, 0x2, 0x91, 0x99, 0x5, 0x1c, 
    0xf, 0x6, 0x92, 0x93, 0xc, 0x4, 0x2, 0x2, 0x93, 0x94, 0x9, 0x3, 0x2, 
    0x2, 0x94, 0x99, 0x5, 0x1c, 0xf, 0x5, 0x95, 0x96, 0xc, 0x3, 0x2, 0x2, 
    0x96, 0x97, 0x7, 0x17, 0x2, 0x2, 0x97, 0x99, 0x5, 0x1c, 0xf, 0x4, 0x98, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x98, 0x92, 0x3, 0x2, 0x2, 0x2, 0x98, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa3, 0x5, 0x20, 0x11, 
    0x2, 0x9e, 0x9f, 0x7, 0x1c, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x14, 0xb, 0x2, 
    0xa0, 0xa1, 0x7, 0x1d, 0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xaa, 0x5, 0x2a, 0x16, 0x2, 0xa5, 0xaa, 0x5, 
    0x22, 0x12, 0x2, 0xa6, 0xaa, 0x5, 0x6, 0x4, 0x2, 0xa7, 0xaa, 0x5, 0x24, 
    0x13, 0x2, 0xa8, 0xaa, 0x5, 0x26, 0x14, 0x2, 0xa9, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x11, 0x2, 0x2, 0xac, 0xad, 
    0x5, 0x14, 0xb, 0x2, 0xad, 0x23, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb4, 0x7, 
    0x18, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x14, 0xb, 0x2, 0xb0, 0xb1, 0x7, 0x20, 
    0x2, 0x2, 0xb1, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x5, 0x14, 0xb, 0x2, 0xb8, 0xba, 
    0x7, 0x20, 0x2, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xbe, 0x7, 0x19, 0x2, 0x2, 0xbe, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xc5, 0x7, 0x1a, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x28, 0x15, 0x2, 0xc1, 
    0xc2, 0x7, 0x20, 0x2, 0x2, 0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x28, 0x15, 
    0x2, 0xc9, 0xcb, 0x7, 0x20, 0x2, 0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x1b, 0x2, 0x2, 0xcf, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x14, 0xb, 0x2, 0xd1, 0xd2, 0x7, 0x1f, 
    0x2, 0x2, 0xd2, 0xd3, 0x5, 0x14, 0xb, 0x2, 0xd3, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd5, 0x5, 0x2c, 0x17, 0x2, 0xd5, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xdb, 0x5, 0x2e, 0x18, 0x2, 0xd7, 0xdb, 0x5, 0x30, 0x19, 0x2, 
    0xd8, 0xdb, 0x5, 0x32, 0x1a, 0x2, 0xd9, 0xdb, 0x5, 0x34, 0x1b, 0x2, 
    0xda, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x9, 0x4, 0x2, 0x2, 0xdd, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x2b, 0x2, 0x2, 0xdf, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xe1, 0x7, 0x2c, 0x2, 0x2, 0xe1, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x9, 0x5, 0x2, 0x2, 0xe3, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x3e, 0x42, 0x4c, 0x6c, 0x70, 0x8a, 0x98, 0x9a, 0xa2, 0xa9, 0xb4, 
    0xb9, 0xbb, 0xc5, 0xca, 0xcc, 0xda, 
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
