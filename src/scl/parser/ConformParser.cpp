
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Conform.g4 by ANTLR 4.8


#include "ConformVisitor.h"

#include "ConformParser.h"


using namespace antlrcpp;
using namespace antlr4;

ConformParser::ConformParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ConformParser::~ConformParser() {
  delete _interpreter;
}

std::string ConformParser::getGrammarFileName() const {
  return "Conform.g4";
}

const std::vector<std::string>& ConformParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ConformParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ModuleContext ------------------------------------------------------------------

ConformParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::ModuleContext::EOF() {
  return getToken(ConformParser::EOF, 0);
}

ConformParser::ScopeContext* ConformParser::ModuleContext::scope() {
  return getRuleContext<ConformParser::ScopeContext>(0);
}


size_t ConformParser::ModuleContext::getRuleIndex() const {
  return ConformParser::RuleModule;
}


antlrcpp::Any ConformParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ModuleContext* ConformParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, ConformParser::RuleModule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
    setState(53);
    match(ConformParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

ConformParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ConformParser::ScopeContext::DELIMITER() {
  return getTokens(ConformParser::DELIMITER);
}

tree::TerminalNode* ConformParser::ScopeContext::DELIMITER(size_t i) {
  return getToken(ConformParser::DELIMITER, i);
}

std::vector<ConformParser::InstructionContext *> ConformParser::ScopeContext::instruction() {
  return getRuleContexts<ConformParser::InstructionContext>();
}

ConformParser::InstructionContext* ConformParser::ScopeContext::instruction(size_t i) {
  return getRuleContext<ConformParser::InstructionContext>(i);
}


size_t ConformParser::ScopeContext::getRuleIndex() const {
  return ConformParser::RuleScope;
}


antlrcpp::Any ConformParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ScopeContext* ConformParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 2, ConformParser::RuleScope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(59);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ConformParser::DELIMITER: {
            setState(55);
            match(ConformParser::DELIMITER);
            break;
          }

          case ConformParser::T__0:
          case ConformParser::KEYWORD_PRINT:
          case ConformParser::CONTROL_IF:
          case ConformParser::CONTROL_FOR:
          case ConformParser::OPERAND_MINUS:
          case ConformParser::SQUARED_BRACKET_OPEN:
          case ConformParser::CURLY_BRACKET_OPEN:
          case ConformParser::ROUND_BRACKET_OPEN:
          case ConformParser::BOOLEAN_TRUE:
          case ConformParser::BOOLEAN_FALSE:
          case ConformParser::INTEGER:
          case ConformParser::FLOAT:
          case ConformParser::STRING_DOUBLE_QUOTE:
          case ConformParser::STRING_SINGLE_QUOTE: {
            setState(56);
            dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
            dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
            setState(57);
            match(ConformParser::DELIMITER);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(63);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ConformParser::T__0)
      | (1ULL << ConformParser::KEYWORD_PRINT)
      | (1ULL << ConformParser::CONTROL_IF)
      | (1ULL << ConformParser::CONTROL_FOR)
      | (1ULL << ConformParser::OPERAND_MINUS)
      | (1ULL << ConformParser::SQUARED_BRACKET_OPEN)
      | (1ULL << ConformParser::CURLY_BRACKET_OPEN)
      | (1ULL << ConformParser::ROUND_BRACKET_OPEN)
      | (1ULL << ConformParser::BOOLEAN_TRUE)
      | (1ULL << ConformParser::BOOLEAN_FALSE)
      | (1ULL << ConformParser::INTEGER)
      | (1ULL << ConformParser::FLOAT)
      | (1ULL << ConformParser::STRING_DOUBLE_QUOTE)
      | (1ULL << ConformParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(64);
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

ConformParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::VariableContext::IDENTIFIER() {
  return getToken(ConformParser::IDENTIFIER, 0);
}


size_t ConformParser::VariableContext::getRuleIndex() const {
  return ConformParser::RuleVariable;
}


antlrcpp::Any ConformParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::VariableContext* ConformParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, ConformParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(ConformParser::T__0);
    setState(68);
    match(ConformParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ConformParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::PrintContext* ConformParser::InstructionContext::print() {
  return getRuleContext<ConformParser::PrintContext>(0);
}

ConformParser::AssignContext* ConformParser::InstructionContext::assign() {
  return getRuleContext<ConformParser::AssignContext>(0);
}

ConformParser::AssignPropertyContext* ConformParser::InstructionContext::assignProperty() {
  return getRuleContext<ConformParser::AssignPropertyContext>(0);
}

ConformParser::IfControlContext* ConformParser::InstructionContext::ifControl() {
  return getRuleContext<ConformParser::IfControlContext>(0);
}

ConformParser::ForControlContext* ConformParser::InstructionContext::forControl() {
  return getRuleContext<ConformParser::ForControlContext>(0);
}


size_t ConformParser::InstructionContext::getRuleIndex() const {
  return ConformParser::RuleInstruction;
}


antlrcpp::Any ConformParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::InstructionContext* ConformParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, ConformParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      print();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
      assignProperty();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(73);
      ifControl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(74);
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

ConformParser::IfControlContext::IfControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::IfControlContext::CONTROL_IF() {
  return getToken(ConformParser::CONTROL_IF, 0);
}

ConformParser::ExpressionContext* ConformParser::IfControlContext::expression() {
  return getRuleContext<ConformParser::ExpressionContext>(0);
}

tree::TerminalNode* ConformParser::IfControlContext::DELIMITER() {
  return getToken(ConformParser::DELIMITER, 0);
}

ConformParser::ScopeContext* ConformParser::IfControlContext::scope() {
  return getRuleContext<ConformParser::ScopeContext>(0);
}

tree::TerminalNode* ConformParser::IfControlContext::CONTROL_END() {
  return getToken(ConformParser::CONTROL_END, 0);
}


size_t ConformParser::IfControlContext::getRuleIndex() const {
  return ConformParser::RuleIfControl;
}


antlrcpp::Any ConformParser::IfControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitIfControl(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::IfControlContext* ConformParser::ifControl() {
  IfControlContext *_localctx = _tracker.createInstance<IfControlContext>(_ctx, getState());
  enterRule(_localctx, 8, ConformParser::RuleIfControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(ConformParser::CONTROL_IF);
    setState(78);
    expression();
    setState(79);
    match(ConformParser::DELIMITER);
    setState(80);
    scope();
    setState(81);
    match(ConformParser::CONTROL_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForControlContext ------------------------------------------------------------------

ConformParser::ForControlContext::ForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::ForControlContext::CONTROL_FOR() {
  return getToken(ConformParser::CONTROL_FOR, 0);
}

ConformParser::VariableContext* ConformParser::ForControlContext::variable() {
  return getRuleContext<ConformParser::VariableContext>(0);
}

tree::TerminalNode* ConformParser::ForControlContext::CONTROL_IN() {
  return getToken(ConformParser::CONTROL_IN, 0);
}

ConformParser::ExpressionContext* ConformParser::ForControlContext::expression() {
  return getRuleContext<ConformParser::ExpressionContext>(0);
}

tree::TerminalNode* ConformParser::ForControlContext::DELIMITER() {
  return getToken(ConformParser::DELIMITER, 0);
}

ConformParser::ScopeContext* ConformParser::ForControlContext::scope() {
  return getRuleContext<ConformParser::ScopeContext>(0);
}

tree::TerminalNode* ConformParser::ForControlContext::CONTROL_END() {
  return getToken(ConformParser::CONTROL_END, 0);
}


size_t ConformParser::ForControlContext::getRuleIndex() const {
  return ConformParser::RuleForControl;
}


antlrcpp::Any ConformParser::ForControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitForControl(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ForControlContext* ConformParser::forControl() {
  ForControlContext *_localctx = _tracker.createInstance<ForControlContext>(_ctx, getState());
  enterRule(_localctx, 10, ConformParser::RuleForControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(ConformParser::CONTROL_FOR);
    setState(84);
    variable();
    setState(85);
    match(ConformParser::CONTROL_IN);
    setState(86);
    expression();
    setState(87);
    match(ConformParser::DELIMITER);
    setState(88);
    scope();
    setState(89);
    match(ConformParser::CONTROL_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

ConformParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::PrintContext::KEYWORD_PRINT() {
  return getToken(ConformParser::KEYWORD_PRINT, 0);
}

ConformParser::ExpressionContext* ConformParser::PrintContext::expression() {
  return getRuleContext<ConformParser::ExpressionContext>(0);
}


size_t ConformParser::PrintContext::getRuleIndex() const {
  return ConformParser::RulePrint;
}


antlrcpp::Any ConformParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::PrintContext* ConformParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 12, ConformParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(ConformParser::KEYWORD_PRINT);
    setState(92);
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

ConformParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::AssignContext::OPERAND_EQUAL() {
  return getToken(ConformParser::OPERAND_EQUAL, 0);
}

ConformParser::VariableContext* ConformParser::AssignContext::variable() {
  return getRuleContext<ConformParser::VariableContext>(0);
}

ConformParser::ExpressionContext* ConformParser::AssignContext::expression() {
  return getRuleContext<ConformParser::ExpressionContext>(0);
}


size_t ConformParser::AssignContext::getRuleIndex() const {
  return ConformParser::RuleAssign;
}


antlrcpp::Any ConformParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::AssignContext* ConformParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 14, ConformParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(95);
    match(ConformParser::OPERAND_EQUAL);
    setState(96);
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

ConformParser::AssignPropertyContext::AssignPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::AssignPropertyContext::SQUARED_BRACKET_OPEN() {
  return getToken(ConformParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* ConformParser::AssignPropertyContext::SQUARED_BRACKET_CLOSE() {
  return getToken(ConformParser::SQUARED_BRACKET_CLOSE, 0);
}

tree::TerminalNode* ConformParser::AssignPropertyContext::OPERAND_EQUAL() {
  return getToken(ConformParser::OPERAND_EQUAL, 0);
}

std::vector<ConformParser::ExpressionContext *> ConformParser::AssignPropertyContext::expression() {
  return getRuleContexts<ConformParser::ExpressionContext>();
}

ConformParser::ExpressionContext* ConformParser::AssignPropertyContext::expression(size_t i) {
  return getRuleContext<ConformParser::ExpressionContext>(i);
}


size_t ConformParser::AssignPropertyContext::getRuleIndex() const {
  return ConformParser::RuleAssignProperty;
}


antlrcpp::Any ConformParser::AssignPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitAssignProperty(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::AssignPropertyContext* ConformParser::assignProperty() {
  AssignPropertyContext *_localctx = _tracker.createInstance<AssignPropertyContext>(_ctx, getState());
  enterRule(_localctx, 16, ConformParser::RuleAssignProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    dynamic_cast<AssignPropertyContext *>(_localctx)->property = expression();
    setState(99);
    match(ConformParser::SQUARED_BRACKET_OPEN);
    setState(100);
    dynamic_cast<AssignPropertyContext *>(_localctx)->key = expression();
    setState(101);
    match(ConformParser::SQUARED_BRACKET_CLOSE);
    setState(102);
    match(ConformParser::OPERAND_EQUAL);
    setState(103);
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

ConformParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::ExpressionConcatedContext* ConformParser::ExpressionContext::expressionConcated() {
  return getRuleContext<ConformParser::ExpressionConcatedContext>(0);
}

ConformParser::ExpressionAccessContext* ConformParser::ExpressionContext::expressionAccess() {
  return getRuleContext<ConformParser::ExpressionAccessContext>(0);
}


size_t ConformParser::ExpressionContext::getRuleIndex() const {
  return ConformParser::RuleExpression;
}


antlrcpp::Any ConformParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ExpressionContext* ConformParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, ConformParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(105);
      expressionConcated(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(106);
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

ConformParser::ExpressionAccessContext::ExpressionAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::AccessContext* ConformParser::ExpressionAccessContext::access() {
  return getRuleContext<ConformParser::AccessContext>(0);
}

ConformParser::AccessRangeContext* ConformParser::ExpressionAccessContext::accessRange() {
  return getRuleContext<ConformParser::AccessRangeContext>(0);
}


size_t ConformParser::ExpressionAccessContext::getRuleIndex() const {
  return ConformParser::RuleExpressionAccess;
}


antlrcpp::Any ConformParser::ExpressionAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpressionAccess(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ExpressionAccessContext* ConformParser::expressionAccess() {
  ExpressionAccessContext *_localctx = _tracker.createInstance<ExpressionAccessContext>(_ctx, getState());
  enterRule(_localctx, 20, ConformParser::RuleExpressionAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(109);
      access();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(110);
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

ConformParser::AccessContext::AccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::AccessContext::SQUARED_BRACKET_OPEN() {
  return getToken(ConformParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* ConformParser::AccessContext::SQUARED_BRACKET_CLOSE() {
  return getToken(ConformParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<ConformParser::ExpressionConcatedContext *> ConformParser::AccessContext::expressionConcated() {
  return getRuleContexts<ConformParser::ExpressionConcatedContext>();
}

ConformParser::ExpressionConcatedContext* ConformParser::AccessContext::expressionConcated(size_t i) {
  return getRuleContext<ConformParser::ExpressionConcatedContext>(i);
}


size_t ConformParser::AccessContext::getRuleIndex() const {
  return ConformParser::RuleAccess;
}


antlrcpp::Any ConformParser::AccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitAccess(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::AccessContext* ConformParser::access() {
  AccessContext *_localctx = _tracker.createInstance<AccessContext>(_ctx, getState());
  enterRule(_localctx, 22, ConformParser::RuleAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    dynamic_cast<AccessContext *>(_localctx)->property = expressionConcated(0);
    setState(114);
    match(ConformParser::SQUARED_BRACKET_OPEN);
    setState(115);
    dynamic_cast<AccessContext *>(_localctx)->key = expressionConcated(0);
    setState(116);
    match(ConformParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessRangeContext ------------------------------------------------------------------

ConformParser::AccessRangeContext::AccessRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::AccessRangeContext::SQUARED_BRACKET_OPEN() {
  return getToken(ConformParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* ConformParser::AccessRangeContext::COLON() {
  return getToken(ConformParser::COLON, 0);
}

tree::TerminalNode* ConformParser::AccessRangeContext::SQUARED_BRACKET_CLOSE() {
  return getToken(ConformParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<ConformParser::ExpressionConcatedContext *> ConformParser::AccessRangeContext::expressionConcated() {
  return getRuleContexts<ConformParser::ExpressionConcatedContext>();
}

ConformParser::ExpressionConcatedContext* ConformParser::AccessRangeContext::expressionConcated(size_t i) {
  return getRuleContext<ConformParser::ExpressionConcatedContext>(i);
}


size_t ConformParser::AccessRangeContext::getRuleIndex() const {
  return ConformParser::RuleAccessRange;
}


antlrcpp::Any ConformParser::AccessRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitAccessRange(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::AccessRangeContext* ConformParser::accessRange() {
  AccessRangeContext *_localctx = _tracker.createInstance<AccessRangeContext>(_ctx, getState());
  enterRule(_localctx, 24, ConformParser::RuleAccessRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(119);
      match(ConformParser::SQUARED_BRACKET_OPEN);
      setState(120);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(121);
      match(ConformParser::COLON);
      setState(122);
      match(ConformParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(124);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(125);
      match(ConformParser::SQUARED_BRACKET_OPEN);
      setState(126);
      match(ConformParser::COLON);
      setState(127);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(128);
      match(ConformParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(130);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(131);
      match(ConformParser::SQUARED_BRACKET_OPEN);
      setState(132);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(133);
      match(ConformParser::COLON);
      setState(134);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(135);
      match(ConformParser::SQUARED_BRACKET_CLOSE);
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

ConformParser::ExpressionConcatedContext::ExpressionConcatedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::ExpressionGroupedContext* ConformParser::ExpressionConcatedContext::expressionGrouped() {
  return getRuleContext<ConformParser::ExpressionGroupedContext>(0);
}

std::vector<ConformParser::ExpressionConcatedContext *> ConformParser::ExpressionConcatedContext::expressionConcated() {
  return getRuleContexts<ConformParser::ExpressionConcatedContext>();
}

ConformParser::ExpressionConcatedContext* ConformParser::ExpressionConcatedContext::expressionConcated(size_t i) {
  return getRuleContext<ConformParser::ExpressionConcatedContext>(i);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_PLUS() {
  return getToken(ConformParser::OPERAND_PLUS, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_MINUS() {
  return getToken(ConformParser::OPERAND_MINUS, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_ASTERISK() {
  return getToken(ConformParser::OPERAND_ASTERISK, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_SLASH() {
  return getToken(ConformParser::OPERAND_SLASH, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_CARET() {
  return getToken(ConformParser::OPERAND_CARET, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_AND() {
  return getToken(ConformParser::OPERAND_AND, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::OPERAND_OR() {
  return getToken(ConformParser::OPERAND_OR, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::COMPARATOR_EQUAL() {
  return getToken(ConformParser::COMPARATOR_EQUAL, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::COMPARATOR_NOT_EQUAL() {
  return getToken(ConformParser::COMPARATOR_NOT_EQUAL, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::COMPARATOR_LESS() {
  return getToken(ConformParser::COMPARATOR_LESS, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::COMPARATOR_GREATER() {
  return getToken(ConformParser::COMPARATOR_GREATER, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::COMPARATOR_LESS_EQUAL() {
  return getToken(ConformParser::COMPARATOR_LESS_EQUAL, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::COMPARATOR_GREATER_EQUAL() {
  return getToken(ConformParser::COMPARATOR_GREATER_EQUAL, 0);
}

tree::TerminalNode* ConformParser::ExpressionConcatedContext::RANGE() {
  return getToken(ConformParser::RANGE, 0);
}


size_t ConformParser::ExpressionConcatedContext::getRuleIndex() const {
  return ConformParser::RuleExpressionConcated;
}


antlrcpp::Any ConformParser::ExpressionConcatedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpressionConcated(this);
  else
    return visitor->visitChildren(this);
}


ConformParser::ExpressionConcatedContext* ConformParser::expressionConcated() {
   return expressionConcated(0);
}

ConformParser::ExpressionConcatedContext* ConformParser::expressionConcated(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ConformParser::ExpressionConcatedContext *_localctx = _tracker.createInstance<ExpressionConcatedContext>(_ctx, parentState);
  ConformParser::ExpressionConcatedContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, ConformParser::RuleExpressionConcated, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(140);
    expressionGrouped();
    _ctx->stop = _input->LT(-1);
    setState(153);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(151);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(142);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(143);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->operand = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ConformParser::OPERAND_PLUS)
            | (1ULL << ConformParser::OPERAND_MINUS)
            | (1ULL << ConformParser::OPERAND_ASTERISK)
            | (1ULL << ConformParser::OPERAND_SLASH)
            | (1ULL << ConformParser::OPERAND_CARET)
            | (1ULL << ConformParser::OPERAND_AND)
            | (1ULL << ConformParser::OPERAND_OR))) != 0))) {
            dynamic_cast<ExpressionConcatedContext *>(_localctx)->operand = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(144);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(145);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(146);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->comparator = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ConformParser::COMPARATOR_EQUAL)
            | (1ULL << ConformParser::COMPARATOR_NOT_EQUAL)
            | (1ULL << ConformParser::COMPARATOR_GREATER)
            | (1ULL << ConformParser::COMPARATOR_GREATER_EQUAL)
            | (1ULL << ConformParser::COMPARATOR_LESS)
            | (1ULL << ConformParser::COMPARATOR_LESS_EQUAL))) != 0))) {
            dynamic_cast<ExpressionConcatedContext *>(_localctx)->comparator = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(147);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(148);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(149);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->range = match(ConformParser::RANGE);
          setState(150);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(2);
          break;
        }

        } 
      }
      setState(155);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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

ConformParser::ExpressionGroupedContext::ExpressionGroupedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::ExpressionConstContext* ConformParser::ExpressionGroupedContext::expressionConst() {
  return getRuleContext<ConformParser::ExpressionConstContext>(0);
}

tree::TerminalNode* ConformParser::ExpressionGroupedContext::ROUND_BRACKET_OPEN() {
  return getToken(ConformParser::ROUND_BRACKET_OPEN, 0);
}

ConformParser::ExpressionContext* ConformParser::ExpressionGroupedContext::expression() {
  return getRuleContext<ConformParser::ExpressionContext>(0);
}

tree::TerminalNode* ConformParser::ExpressionGroupedContext::ROUND_BRACKET_CLOSE() {
  return getToken(ConformParser::ROUND_BRACKET_CLOSE, 0);
}


size_t ConformParser::ExpressionGroupedContext::getRuleIndex() const {
  return ConformParser::RuleExpressionGrouped;
}


antlrcpp::Any ConformParser::ExpressionGroupedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpressionGrouped(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ExpressionGroupedContext* ConformParser::expressionGrouped() {
  ExpressionGroupedContext *_localctx = _tracker.createInstance<ExpressionGroupedContext>(_ctx, getState());
  enterRule(_localctx, 28, ConformParser::RuleExpressionGrouped);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ConformParser::T__0:
      case ConformParser::OPERAND_MINUS:
      case ConformParser::SQUARED_BRACKET_OPEN:
      case ConformParser::CURLY_BRACKET_OPEN:
      case ConformParser::BOOLEAN_TRUE:
      case ConformParser::BOOLEAN_FALSE:
      case ConformParser::INTEGER:
      case ConformParser::FLOAT:
      case ConformParser::STRING_DOUBLE_QUOTE:
      case ConformParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        expressionConst();
        break;
      }

      case ConformParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(157);
        match(ConformParser::ROUND_BRACKET_OPEN);
        setState(158);
        expression();
        setState(159);
        match(ConformParser::ROUND_BRACKET_CLOSE);
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

ConformParser::ExpressionConstContext::ExpressionConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::ExpressionTypeContext* ConformParser::ExpressionConstContext::expressionType() {
  return getRuleContext<ConformParser::ExpressionTypeContext>(0);
}

ConformParser::ExpressionUnaryContext* ConformParser::ExpressionConstContext::expressionUnary() {
  return getRuleContext<ConformParser::ExpressionUnaryContext>(0);
}

ConformParser::VariableContext* ConformParser::ExpressionConstContext::variable() {
  return getRuleContext<ConformParser::VariableContext>(0);
}

ConformParser::ArrayContext* ConformParser::ExpressionConstContext::array() {
  return getRuleContext<ConformParser::ArrayContext>(0);
}

ConformParser::DictionaryContext* ConformParser::ExpressionConstContext::dictionary() {
  return getRuleContext<ConformParser::DictionaryContext>(0);
}


size_t ConformParser::ExpressionConstContext::getRuleIndex() const {
  return ConformParser::RuleExpressionConst;
}


antlrcpp::Any ConformParser::ExpressionConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpressionConst(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ExpressionConstContext* ConformParser::expressionConst() {
  ExpressionConstContext *_localctx = _tracker.createInstance<ExpressionConstContext>(_ctx, getState());
  enterRule(_localctx, 30, ConformParser::RuleExpressionConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ConformParser::BOOLEAN_TRUE:
      case ConformParser::BOOLEAN_FALSE:
      case ConformParser::INTEGER:
      case ConformParser::FLOAT:
      case ConformParser::STRING_DOUBLE_QUOTE:
      case ConformParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(163);
        expressionType();
        break;
      }

      case ConformParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        expressionUnary();
        break;
      }

      case ConformParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(165);
        variable();
        break;
      }

      case ConformParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(166);
        array();
        break;
      }

      case ConformParser::CURLY_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 5);
        setState(167);
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

ConformParser::ExpressionUnaryContext::ExpressionUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::ExpressionUnaryContext::OPERAND_MINUS() {
  return getToken(ConformParser::OPERAND_MINUS, 0);
}

ConformParser::ExpressionContext* ConformParser::ExpressionUnaryContext::expression() {
  return getRuleContext<ConformParser::ExpressionContext>(0);
}


size_t ConformParser::ExpressionUnaryContext::getRuleIndex() const {
  return ConformParser::RuleExpressionUnary;
}


antlrcpp::Any ConformParser::ExpressionUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpressionUnary(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ExpressionUnaryContext* ConformParser::expressionUnary() {
  ExpressionUnaryContext *_localctx = _tracker.createInstance<ExpressionUnaryContext>(_ctx, getState());
  enterRule(_localctx, 32, ConformParser::RuleExpressionUnary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(ConformParser::OPERAND_MINUS);
    setState(171);
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

ConformParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::ArrayContext::SQUARED_BRACKET_OPEN() {
  return getToken(ConformParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* ConformParser::ArrayContext::SQUARED_BRACKET_CLOSE() {
  return getToken(ConformParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> ConformParser::ArrayContext::COMMA() {
  return getTokens(ConformParser::COMMA);
}

tree::TerminalNode* ConformParser::ArrayContext::COMMA(size_t i) {
  return getToken(ConformParser::COMMA, i);
}

std::vector<ConformParser::ExpressionContext *> ConformParser::ArrayContext::expression() {
  return getRuleContexts<ConformParser::ExpressionContext>();
}

ConformParser::ExpressionContext* ConformParser::ArrayContext::expression(size_t i) {
  return getRuleContext<ConformParser::ExpressionContext>(i);
}


size_t ConformParser::ArrayContext::getRuleIndex() const {
  return ConformParser::RuleArray;
}


antlrcpp::Any ConformParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ArrayContext* ConformParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 34, ConformParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(ConformParser::SQUARED_BRACKET_OPEN);
    setState(179);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(174);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(175);
        match(ConformParser::COMMA); 
      }
      setState(181);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ConformParser::T__0)
      | (1ULL << ConformParser::OPERAND_MINUS)
      | (1ULL << ConformParser::SQUARED_BRACKET_OPEN)
      | (1ULL << ConformParser::CURLY_BRACKET_OPEN)
      | (1ULL << ConformParser::ROUND_BRACKET_OPEN)
      | (1ULL << ConformParser::BOOLEAN_TRUE)
      | (1ULL << ConformParser::BOOLEAN_FALSE)
      | (1ULL << ConformParser::INTEGER)
      | (1ULL << ConformParser::FLOAT)
      | (1ULL << ConformParser::STRING_DOUBLE_QUOTE)
      | (1ULL << ConformParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(182);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ConformParser::COMMA) {
        setState(183);
        match(ConformParser::COMMA);
      }
    }
    setState(188);
    match(ConformParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryContext ------------------------------------------------------------------

ConformParser::DictionaryContext::DictionaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::DictionaryContext::CURLY_BRACKET_OPEN() {
  return getToken(ConformParser::CURLY_BRACKET_OPEN, 0);
}

tree::TerminalNode* ConformParser::DictionaryContext::CURLY_BRACKET_CLOSE() {
  return getToken(ConformParser::CURLY_BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> ConformParser::DictionaryContext::COMMA() {
  return getTokens(ConformParser::COMMA);
}

tree::TerminalNode* ConformParser::DictionaryContext::COMMA(size_t i) {
  return getToken(ConformParser::COMMA, i);
}

std::vector<ConformParser::DictionaryElementsContext *> ConformParser::DictionaryContext::dictionaryElements() {
  return getRuleContexts<ConformParser::DictionaryElementsContext>();
}

ConformParser::DictionaryElementsContext* ConformParser::DictionaryContext::dictionaryElements(size_t i) {
  return getRuleContext<ConformParser::DictionaryElementsContext>(i);
}


size_t ConformParser::DictionaryContext::getRuleIndex() const {
  return ConformParser::RuleDictionary;
}


antlrcpp::Any ConformParser::DictionaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitDictionary(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::DictionaryContext* ConformParser::dictionary() {
  DictionaryContext *_localctx = _tracker.createInstance<DictionaryContext>(_ctx, getState());
  enterRule(_localctx, 36, ConformParser::RuleDictionary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(ConformParser::CURLY_BRACKET_OPEN);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(191);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(192);
        match(ConformParser::COMMA); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ConformParser::T__0)
      | (1ULL << ConformParser::OPERAND_MINUS)
      | (1ULL << ConformParser::SQUARED_BRACKET_OPEN)
      | (1ULL << ConformParser::CURLY_BRACKET_OPEN)
      | (1ULL << ConformParser::ROUND_BRACKET_OPEN)
      | (1ULL << ConformParser::BOOLEAN_TRUE)
      | (1ULL << ConformParser::BOOLEAN_FALSE)
      | (1ULL << ConformParser::INTEGER)
      | (1ULL << ConformParser::FLOAT)
      | (1ULL << ConformParser::STRING_DOUBLE_QUOTE)
      | (1ULL << ConformParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(199);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(201);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ConformParser::COMMA) {
        setState(200);
        match(ConformParser::COMMA);
      }
    }
    setState(205);
    match(ConformParser::CURLY_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryElementsContext ------------------------------------------------------------------

ConformParser::DictionaryElementsContext::DictionaryElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::DictionaryElementsContext::COLON() {
  return getToken(ConformParser::COLON, 0);
}

std::vector<ConformParser::ExpressionContext *> ConformParser::DictionaryElementsContext::expression() {
  return getRuleContexts<ConformParser::ExpressionContext>();
}

ConformParser::ExpressionContext* ConformParser::DictionaryElementsContext::expression(size_t i) {
  return getRuleContext<ConformParser::ExpressionContext>(i);
}


size_t ConformParser::DictionaryElementsContext::getRuleIndex() const {
  return ConformParser::RuleDictionaryElements;
}


antlrcpp::Any ConformParser::DictionaryElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitDictionaryElements(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::DictionaryElementsContext* ConformParser::dictionaryElements() {
  DictionaryElementsContext *_localctx = _tracker.createInstance<DictionaryElementsContext>(_ctx, getState());
  enterRule(_localctx, 38, ConformParser::RuleDictionaryElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(208);
    match(ConformParser::COLON);
    setState(209);
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

ConformParser::ExpressionTypeContext::ExpressionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::TypeContext* ConformParser::ExpressionTypeContext::type() {
  return getRuleContext<ConformParser::TypeContext>(0);
}


size_t ConformParser::ExpressionTypeContext::getRuleIndex() const {
  return ConformParser::RuleExpressionType;
}


antlrcpp::Any ConformParser::ExpressionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitExpressionType(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::ExpressionTypeContext* ConformParser::expressionType() {
  ExpressionTypeContext *_localctx = _tracker.createInstance<ExpressionTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, ConformParser::RuleExpressionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
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

ConformParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ConformParser::BooleanContext* ConformParser::TypeContext::boolean() {
  return getRuleContext<ConformParser::BooleanContext>(0);
}

ConformParser::NumericIntContext* ConformParser::TypeContext::numericInt() {
  return getRuleContext<ConformParser::NumericIntContext>(0);
}

ConformParser::NumericFloatContext* ConformParser::TypeContext::numericFloat() {
  return getRuleContext<ConformParser::NumericFloatContext>(0);
}

ConformParser::StringContext* ConformParser::TypeContext::string() {
  return getRuleContext<ConformParser::StringContext>(0);
}


size_t ConformParser::TypeContext::getRuleIndex() const {
  return ConformParser::RuleType;
}


antlrcpp::Any ConformParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::TypeContext* ConformParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 42, ConformParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ConformParser::BOOLEAN_TRUE:
      case ConformParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(213);
        boolean();
        break;
      }

      case ConformParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(214);
        numericInt();
        break;
      }

      case ConformParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(215);
        numericFloat();
        break;
      }

      case ConformParser::STRING_DOUBLE_QUOTE:
      case ConformParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 4);
        setState(216);
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

ConformParser::BooleanContext::BooleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::BooleanContext::BOOLEAN_TRUE() {
  return getToken(ConformParser::BOOLEAN_TRUE, 0);
}

tree::TerminalNode* ConformParser::BooleanContext::BOOLEAN_FALSE() {
  return getToken(ConformParser::BOOLEAN_FALSE, 0);
}


size_t ConformParser::BooleanContext::getRuleIndex() const {
  return ConformParser::RuleBoolean;
}


antlrcpp::Any ConformParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::BooleanContext* ConformParser::boolean() {
  BooleanContext *_localctx = _tracker.createInstance<BooleanContext>(_ctx, getState());
  enterRule(_localctx, 44, ConformParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    _la = _input->LA(1);
    if (!(_la == ConformParser::BOOLEAN_TRUE

    || _la == ConformParser::BOOLEAN_FALSE)) {
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

ConformParser::NumericIntContext::NumericIntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::NumericIntContext::INTEGER() {
  return getToken(ConformParser::INTEGER, 0);
}


size_t ConformParser::NumericIntContext::getRuleIndex() const {
  return ConformParser::RuleNumericInt;
}


antlrcpp::Any ConformParser::NumericIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitNumericInt(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::NumericIntContext* ConformParser::numericInt() {
  NumericIntContext *_localctx = _tracker.createInstance<NumericIntContext>(_ctx, getState());
  enterRule(_localctx, 46, ConformParser::RuleNumericInt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(ConformParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericFloatContext ------------------------------------------------------------------

ConformParser::NumericFloatContext::NumericFloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::NumericFloatContext::FLOAT() {
  return getToken(ConformParser::FLOAT, 0);
}


size_t ConformParser::NumericFloatContext::getRuleIndex() const {
  return ConformParser::RuleNumericFloat;
}


antlrcpp::Any ConformParser::NumericFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitNumericFloat(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::NumericFloatContext* ConformParser::numericFloat() {
  NumericFloatContext *_localctx = _tracker.createInstance<NumericFloatContext>(_ctx, getState());
  enterRule(_localctx, 48, ConformParser::RuleNumericFloat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(ConformParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

ConformParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ConformParser::StringContext::STRING_SINGLE_QUOTE() {
  return getToken(ConformParser::STRING_SINGLE_QUOTE, 0);
}

tree::TerminalNode* ConformParser::StringContext::STRING_DOUBLE_QUOTE() {
  return getToken(ConformParser::STRING_DOUBLE_QUOTE, 0);
}


size_t ConformParser::StringContext::getRuleIndex() const {
  return ConformParser::RuleString;
}


antlrcpp::Any ConformParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ConformVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

ConformParser::StringContext* ConformParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 50, ConformParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _la = _input->LA(1);
    if (!(_la == ConformParser::STRING_DOUBLE_QUOTE

    || _la == ConformParser::STRING_SINGLE_QUOTE)) {
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

bool ConformParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return expressionConcatedSempred(dynamic_cast<ExpressionConcatedContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ConformParser::expressionConcatedSempred(ExpressionConcatedContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> ConformParser::_decisionToDFA;
atn::PredictionContextCache ConformParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ConformParser::_atn;
std::vector<uint16_t> ConformParser::_serializedATN;

std::vector<std::string> ConformParser::_ruleNames = {
  "module", "scope", "variable", "instruction", "ifControl", "forControl", 
  "print", "assign", "assignProperty", "expression", "expressionAccess", 
  "access", "accessRange", "expressionConcated", "expressionGrouped", "expressionConst", 
  "expressionUnary", "array", "dictionary", "dictionaryElements", "expressionType", 
  "type", "boolean", "numericInt", "numericFloat", "string"
};

std::vector<std::string> ConformParser::_literalNames = {
  "", "'$'", "", "", "", "'print'", "'include'", "'import'", "'if'", "'for'", 
  "'in'", "'end'", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'&&'", "'||'", 
  "'..'", "'['", "']'", "'{'", "'}'", "'('", "')'", "';'", "':'", "','", 
  "'?'", "'!'", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'TRUE'", 
  "'FALSE'"
};

std::vector<std::string> ConformParser::_symbolicNames = {
  "", "", "DELIMITER", "NEWLINE", "WHITESPACE", "KEYWORD_PRINT", "KEYWORD_INCLUDE", 
  "KEYWORD_IMPORT", "CONTROL_IF", "CONTROL_FOR", "CONTROL_IN", "CONTROL_END", 
  "OPERAND_EQUAL", "OPERAND_PLUS", "OPERAND_MINUS", "OPERAND_ASTERISK", 
  "OPERAND_SLASH", "OPERAND_CARET", "OPERAND_AND", "OPERAND_OR", "RANGE", 
  "SQUARED_BRACKET_OPEN", "SQUARED_BRACKET_CLOSE", "CURLY_BRACKET_OPEN", 
  "CURLY_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE", "SEMICOLON", 
  "COLON", "COMMA", "QUESTION_MARK", "EXCLAMATION_MARK", "COMPARATOR_EQUAL", 
  "COMPARATOR_NOT_EQUAL", "COMPARATOR_GREATER", "COMPARATOR_GREATER_EQUAL", 
  "COMPARATOR_LESS", "COMPARATOR_LESS_EQUAL", "BOOLEAN_TRUE", "BOOLEAN_FALSE", 
  "INTEGER", "FLOAT", "STRING_DOUBLE_QUOTE", "STRING_SINGLE_QUOTE", "IDENTIFIER", 
  "COMMENT"
};

dfa::Vocabulary ConformParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ConformParser::_tokenNames;

ConformParser::Initializer::Initializer() {
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
    0x3, 0x2f, 0xe6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x3e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x41, 0xb, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x44, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4e, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x6e, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x72, 0xa, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x8c, 0xa, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x9a, 0xa, 0xf, 0xc, 
    0xf, 0xe, 0xf, 0x9d, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xa4, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xab, 0xa, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0xb4, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xb7, 0xb, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0xbb, 0xa, 0x13, 0x5, 0x13, 0xbd, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xc5, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xc8, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0xcc, 0xa, 0x14, 0x5, 0x14, 0xce, 0xa, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xdc, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x2, 0x3, 0x1c, 0x1c, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x2, 0x6, 
    0x3, 0x2, 0xf, 0x15, 0x3, 0x2, 0x22, 0x27, 0x3, 0x2, 0x28, 0x29, 0x3, 
    0x2, 0x2c, 0x2d, 0x2, 0xe7, 0x2, 0x36, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x45, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x60, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x22, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x30, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x37, 0x5, 0x4, 0x3, 0x2, 0x37, 0x38, 0x7, 0x2, 
    0x2, 0x3, 0x38, 0x3, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3e, 0x7, 0x4, 0x2, 
    0x2, 0x3a, 0x3b, 0x5, 0x8, 0x5, 0x2, 0x3b, 0x3c, 0x7, 0x4, 0x2, 0x2, 
    0x3c, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x5, 0x8, 
    0x5, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x5, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x3, 0x2, 0x2, 
    0x46, 0x47, 0x7, 0x2e, 0x2, 0x2, 0x47, 0x7, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x4e, 0x5, 0xe, 0x8, 0x2, 0x49, 0x4e, 0x5, 0x10, 0x9, 0x2, 0x4a, 0x4e, 
    0x5, 0x12, 0xa, 0x2, 0x4b, 0x4e, 0x5, 0xa, 0x6, 0x2, 0x4c, 0x4e, 0x5, 
    0xc, 0x7, 0x2, 0x4d, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x50, 0x7, 0xa, 0x2, 0x2, 0x50, 0x51, 0x5, 0x14, 0xb, 0x2, 0x51, 
    0x52, 0x7, 0x4, 0x2, 0x2, 0x52, 0x53, 0x5, 0x4, 0x3, 0x2, 0x53, 0x54, 
    0x7, 0xd, 0x2, 0x2, 0x54, 0xb, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 
    0xb, 0x2, 0x2, 0x56, 0x57, 0x5, 0x6, 0x4, 0x2, 0x57, 0x58, 0x7, 0xc, 
    0x2, 0x2, 0x58, 0x59, 0x5, 0x14, 0xb, 0x2, 0x59, 0x5a, 0x7, 0x4, 0x2, 
    0x2, 0x5a, 0x5b, 0x5, 0x4, 0x3, 0x2, 0x5b, 0x5c, 0x7, 0xd, 0x2, 0x2, 
    0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x7, 0x2, 0x2, 0x5e, 
    0x5f, 0x5, 0x14, 0xb, 0x2, 0x5f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x5, 0x6, 0x4, 0x2, 0x61, 0x62, 0x7, 0xe, 0x2, 0x2, 0x62, 0x63, 0x5, 
    0x14, 0xb, 0x2, 0x63, 0x11, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x14, 
    0xb, 0x2, 0x65, 0x66, 0x7, 0x17, 0x2, 0x2, 0x66, 0x67, 0x5, 0x14, 0xb, 
    0x2, 0x67, 0x68, 0x7, 0x18, 0x2, 0x2, 0x68, 0x69, 0x7, 0xe, 0x2, 0x2, 
    0x69, 0x6a, 0x5, 0x14, 0xb, 0x2, 0x6a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6e, 0x5, 0x1c, 0xf, 0x2, 0x6c, 0x6e, 0x5, 0x16, 0xc, 0x2, 0x6d, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x72, 0x5, 0x18, 0xd, 0x2, 0x70, 0x72, 0x5, 0x1a, 
    0xe, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x17, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0x1c, 0xf, 0x2, 
    0x74, 0x75, 0x7, 0x17, 0x2, 0x2, 0x75, 0x76, 0x5, 0x1c, 0xf, 0x2, 0x76, 
    0x77, 0x7, 0x18, 0x2, 0x2, 0x77, 0x19, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 
    0x5, 0x1c, 0xf, 0x2, 0x79, 0x7a, 0x7, 0x17, 0x2, 0x2, 0x7a, 0x7b, 0x5, 
    0x1c, 0xf, 0x2, 0x7b, 0x7c, 0x7, 0x1e, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x18, 
    0x2, 0x2, 0x7d, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x1c, 0xf, 
    0x2, 0x7f, 0x80, 0x7, 0x17, 0x2, 0x2, 0x80, 0x81, 0x7, 0x1e, 0x2, 0x2, 
    0x81, 0x82, 0x5, 0x1c, 0xf, 0x2, 0x82, 0x83, 0x7, 0x18, 0x2, 0x2, 0x83, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x5, 0x1c, 0xf, 0x2, 0x85, 0x86, 
    0x7, 0x17, 0x2, 0x2, 0x86, 0x87, 0x5, 0x1c, 0xf, 0x2, 0x87, 0x88, 0x7, 
    0x1e, 0x2, 0x2, 0x88, 0x89, 0x5, 0x1c, 0xf, 0x2, 0x89, 0x8a, 0x7, 0x18, 
    0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x8, 0xf, 0x1, 0x2, 0x8e, 
    0x8f, 0x5, 0x1e, 0x10, 0x2, 0x8f, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 
    0xc, 0x5, 0x2, 0x2, 0x91, 0x92, 0x9, 0x2, 0x2, 0x2, 0x92, 0x9a, 0x5, 
    0x1c, 0xf, 0x6, 0x93, 0x94, 0xc, 0x4, 0x2, 0x2, 0x94, 0x95, 0x9, 0x3, 
    0x2, 0x2, 0x95, 0x9a, 0x5, 0x1c, 0xf, 0x5, 0x96, 0x97, 0xc, 0x3, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0x16, 0x2, 0x2, 0x98, 0x9a, 0x5, 0x1c, 0xf, 0x4, 
    0x99, 0x90, 0x3, 0x2, 0x2, 0x2, 0x99, 0x93, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa4, 0x5, 0x20, 
    0x11, 0x2, 0x9f, 0xa0, 0x7, 0x1b, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x14, 0xb, 
    0x2, 0xa1, 0xa2, 0x7, 0x1c, 0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xab, 0x5, 0x2a, 0x16, 0x2, 0xa6, 0xab, 
    0x5, 0x22, 0x12, 0x2, 0xa7, 0xab, 0x5, 0x6, 0x4, 0x2, 0xa8, 0xab, 0x5, 
    0x24, 0x13, 0x2, 0xa9, 0xab, 0x5, 0x26, 0x14, 0x2, 0xaa, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0x21, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0x10, 0x2, 0x2, 
    0xad, 0xae, 0x5, 0x14, 0xb, 0x2, 0xae, 0x23, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb5, 0x7, 0x17, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x14, 0xb, 0x2, 0xb1, 0xb2, 
    0x7, 0x1f, 0x2, 0x2, 0xb2, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x14, 0xb, 0x2, 
    0xb9, 0xbb, 0x7, 0x1f, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x18, 0x2, 0x2, 0xbf, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xc6, 0x7, 0x19, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x28, 0x15, 
    0x2, 0xc2, 0xc3, 0x7, 0x1f, 0x2, 0x2, 0xc3, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0x5, 
    0x28, 0x15, 0x2, 0xca, 0xcc, 0x7, 0x1f, 0x2, 0x2, 0xcb, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x1a, 0x2, 0x2, 0xd0, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x14, 0xb, 0x2, 0xd2, 0xd3, 
    0x7, 0x1e, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x14, 0xb, 0x2, 0xd4, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x2c, 0x17, 0x2, 0xd6, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xdc, 0x5, 0x2e, 0x18, 0x2, 0xd8, 0xdc, 0x5, 0x30, 0x19, 
    0x2, 0xd9, 0xdc, 0x5, 0x32, 0x1a, 0x2, 0xda, 0xdc, 0x5, 0x34, 0x1b, 
    0x2, 0xdb, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x9, 0x4, 0x2, 0x2, 0xde, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x2a, 0x2, 0x2, 0xe0, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x2b, 0x2, 0x2, 0xe2, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe4, 0x9, 0x5, 0x2, 0x2, 0xe4, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x3d, 0x3f, 0x43, 0x4d, 0x6d, 0x71, 0x8b, 0x99, 0x9b, 0xa3, 
    0xaa, 0xb5, 0xba, 0xbc, 0xc6, 0xcb, 0xcd, 0xdb, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ConformParser::Initializer ConformParser::_init;
