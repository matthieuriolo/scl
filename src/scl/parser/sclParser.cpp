
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
    setState(28);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
    setState(29);
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

std::vector<sclParser::InstructionContext *> sclParser::ScopeContext::instruction() {
  return getRuleContexts<sclParser::InstructionContext>();
}

sclParser::InstructionContext* sclParser::ScopeContext::instruction(size_t i) {
  return getRuleContext<sclParser::InstructionContext>(i);
}

std::vector<tree::TerminalNode *> sclParser::ScopeContext::DELIMITER() {
  return getTokens(sclParser::DELIMITER);
}

tree::TerminalNode* sclParser::ScopeContext::DELIMITER(size_t i) {
  return getToken(sclParser::DELIMITER, i);
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
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::T__0)
      | (1ULL << sclParser::KEYWORD_PRINT)
      | (1ULL << sclParser::CONTROL_IF)
      | (1ULL << sclParser::CONTROL_FOR))) != 0)) {
      setState(31);
      dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
      dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
      setState(33);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(32);
        match(sclParser::DELIMITER);
        break;
      }

      }
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
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
    setState(40);
    match(sclParser::T__0);
    setState(41);
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

tree::TerminalNode* sclParser::InstructionContext::CONTROL_IF() {
  return getToken(sclParser::CONTROL_IF, 0);
}

sclParser::ExpressionContext* sclParser::InstructionContext::expression() {
  return getRuleContext<sclParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> sclParser::InstructionContext::DELIMITER() {
  return getTokens(sclParser::DELIMITER);
}

tree::TerminalNode* sclParser::InstructionContext::DELIMITER(size_t i) {
  return getToken(sclParser::DELIMITER, i);
}

sclParser::ScopeContext* sclParser::InstructionContext::scope() {
  return getRuleContext<sclParser::ScopeContext>(0);
}

tree::TerminalNode* sclParser::InstructionContext::CONTROL_END() {
  return getToken(sclParser::CONTROL_END, 0);
}

tree::TerminalNode* sclParser::InstructionContext::CONTROL_FOR() {
  return getToken(sclParser::CONTROL_FOR, 0);
}

sclParser::VariableContext* sclParser::InstructionContext::variable() {
  return getRuleContext<sclParser::VariableContext>(0);
}

tree::TerminalNode* sclParser::InstructionContext::CONTROL_IN() {
  return getToken(sclParser::CONTROL_IN, 0);
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
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        assign();
        break;
      }

      case sclParser::KEYWORD_PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(44);
        print();
        break;
      }

      case sclParser::CONTROL_IF: {
        enterOuterAlt(_localctx, 3);
        setState(45);
        match(sclParser::CONTROL_IF);
        setState(46);
        expression();
        setState(47);
        match(sclParser::DELIMITER);
        setState(48);
        scope();
        setState(49);
        match(sclParser::DELIMITER);
        setState(50);
        match(sclParser::CONTROL_END);
        break;
      }

      case sclParser::CONTROL_FOR: {
        enterOuterAlt(_localctx, 4);
        setState(52);
        match(sclParser::CONTROL_FOR);
        setState(53);
        variable();
        setState(54);
        match(sclParser::CONTROL_IN);
        setState(55);
        expression();
        setState(56);
        match(sclParser::DELIMITER);
        setState(57);
        scope();
        setState(58);
        match(sclParser::DELIMITER);
        setState(59);
        match(sclParser::CONTROL_END);
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

tree::TerminalNode* sclParser::PrintContext::SPACE() {
  return getToken(sclParser::SPACE, 0);
}

sclParser::ExpressiontypeContext* sclParser::PrintContext::expressiontype() {
  return getRuleContext<sclParser::ExpressiontypeContext>(0);
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
    setState(63);
    match(sclParser::KEYWORD_PRINT);
    setState(64);
    match(sclParser::SPACE);
    setState(65);
    dynamic_cast<PrintContext *>(_localctx)->param = expressiontype();
   
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
    setState(67);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(68);
    match(sclParser::OPERAND_EQUAL);
    setState(69);
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

sclParser::ExpressiontypeContext* sclParser::ExpressionContext::expressiontype() {
  return getRuleContext<sclParser::ExpressiontypeContext>(0);
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
    setState(71);
    expressiontype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

sclParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_PLUS() {
  return getToken(sclParser::OPERAND_PLUS, 0);
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_MINUS() {
  return getToken(sclParser::OPERAND_MINUS, 0);
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_ASTERISK() {
  return getToken(sclParser::OPERAND_ASTERISK, 0);
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_SLASH() {
  return getToken(sclParser::OPERAND_SLASH, 0);
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_CARET() {
  return getToken(sclParser::OPERAND_CARET, 0);
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_AND() {
  return getToken(sclParser::OPERAND_AND, 0);
}

tree::TerminalNode* sclParser::OperandContext::OPERAND_OR() {
  return getToken(sclParser::OPERAND_OR, 0);
}


size_t sclParser::OperandContext::getRuleIndex() const {
  return sclParser::RuleOperand;
}


antlrcpp::Any sclParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

sclParser::OperandContext* sclParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 14, sclParser::RuleOperand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::OPERAND_PLUS)
      | (1ULL << sclParser::OPERAND_MINUS)
      | (1ULL << sclParser::OPERAND_ASTERISK)
      | (1ULL << sclParser::OPERAND_SLASH)
      | (1ULL << sclParser::OPERAND_CARET)
      | (1ULL << sclParser::OPERAND_AND)
      | (1ULL << sclParser::OPERAND_OR))) != 0))) {
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

//----------------- ComparatorContext ------------------------------------------------------------------

sclParser::ComparatorContext::ComparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::ComparatorContext::COMPARATOR_EQUAL() {
  return getToken(sclParser::COMPARATOR_EQUAL, 0);
}

tree::TerminalNode* sclParser::ComparatorContext::COMPARATOR_NOT_EQUAL() {
  return getToken(sclParser::COMPARATOR_NOT_EQUAL, 0);
}

tree::TerminalNode* sclParser::ComparatorContext::COMPARATOR_LESS() {
  return getToken(sclParser::COMPARATOR_LESS, 0);
}

tree::TerminalNode* sclParser::ComparatorContext::COMPARATOR_GREATER() {
  return getToken(sclParser::COMPARATOR_GREATER, 0);
}

tree::TerminalNode* sclParser::ComparatorContext::COMPARATOR_LESS_EQUAL() {
  return getToken(sclParser::COMPARATOR_LESS_EQUAL, 0);
}

tree::TerminalNode* sclParser::ComparatorContext::COMPARATOR_GREATER_EQUAL() {
  return getToken(sclParser::COMPARATOR_GREATER_EQUAL, 0);
}


size_t sclParser::ComparatorContext::getRuleIndex() const {
  return sclParser::RuleComparator;
}


antlrcpp::Any sclParser::ComparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitComparator(this);
  else
    return visitor->visitChildren(this);
}

sclParser::ComparatorContext* sclParser::comparator() {
  ComparatorContext *_localctx = _tracker.createInstance<ComparatorContext>(_ctx, getState());
  enterRule(_localctx, 16, sclParser::RuleComparator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::COMPARATOR_EQUAL)
      | (1ULL << sclParser::COMPARATOR_NOT_EQUAL)
      | (1ULL << sclParser::COMPARATOR_GREATER)
      | (1ULL << sclParser::COMPARATOR_GREATER_EQUAL)
      | (1ULL << sclParser::COMPARATOR_LESS)
      | (1ULL << sclParser::COMPARATOR_LESS_EQUAL))) != 0))) {
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
  enterRule(_localctx, 18, sclParser::RuleExpressiontype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
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
  enterRule(_localctx, 20, sclParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    boolean();
   
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
  enterRule(_localctx, 22, sclParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
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
  enterRule(_localctx, 24, sclParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
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
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::BOOLEAN_TRUE

    || _la == sclParser::BOOLEAN_FALSE) {
      setState(86);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(87);
      match(sclParser::COMMA);
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    match(sclParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> sclParser::_decisionToDFA;
atn::PredictionContextCache sclParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sclParser::_atn;
std::vector<uint16_t> sclParser::_serializedATN;

std::vector<std::string> sclParser::_ruleNames = {
  "module", "scope", "variable", "instruction", "print", "assign", "expression", 
  "operand", "comparator", "expressiontype", "type", "boolean", "string", 
  "array"
};

std::vector<std::string> sclParser::_literalNames = {
  "", "'$'", "'print'", "'include'", "'import'", "'if'", "'for'", "'in'", 
  "'end'", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'&&'", "'||'", "'..'", 
  "'['", "']'", "'{'", "'}'", "'('", "')'", "';'", "':'", "','", "'?'", 
  "'!'", "", "", "", "", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'TRUE'", 
  "'FALSE'"
};

std::vector<std::string> sclParser::_symbolicNames = {
  "", "", "KEYWORD_PRINT", "KEYWORD_INCLUDE", "KEYWORD_IMPORT", "CONTROL_IF", 
  "CONTROL_FOR", "CONTROL_IN", "CONTROL_END", "OPERAND_EQUAL", "OPERAND_PLUS", 
  "OPERAND_MINUS", "OPERAND_ASTERISK", "OPERAND_SLASH", "OPERAND_CARET", 
  "OPERAND_AND", "OPERAND_OR", "RANGE", "SQUARED_BRACKET_OPEN", "SQUARED_BRACKET_CLOSE", 
  "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE", 
  "SEMICOLON", "COLON", "COMMA", "QUESTION_MARK", "EXCLAMATION_MARK", "DELIMITER", 
  "NEWLINE", "SPACE", "TAB", "COMPARATOR_EQUAL", "COMPARATOR_NOT_EQUAL", 
  "COMPARATOR_GREATER", "COMPARATOR_GREATER_EQUAL", "COMPARATOR_LESS", "COMPARATOR_LESS_EQUAL", 
  "BOOLEAN_TRUE", "BOOLEAN_FALSE", "INTEGER", "FLOAT", "STRING_DOUBLE_QUOTE", 
  "STRING_SINGLE_QUOTE", "FUNCTION_NAME", "IDENTIFIER", "COMMENT"
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
    0x3, 0x31, 0x63, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x24, 0xa, 0x3, 0x7, 0x3, 0x26, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x29, 
    0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x40, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x5c, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x5f, 0xb, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x2, 0x2, 0x10, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x6, 0x3, 
    0x2, 0xc, 0x12, 0x3, 0x2, 0x23, 0x28, 0x3, 0x2, 0x29, 0x2a, 0x3, 0x2, 
    0x2d, 0x2e, 0x2, 0x5a, 0x2, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x41, 0x3, 0x2, 0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x5, 0x4, 0x3, 
    0x2, 0x1f, 0x20, 0x7, 0x2, 0x2, 0x3, 0x20, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x23, 0x5, 0x8, 0x5, 0x2, 0x22, 0x24, 0x7, 0x1f, 0x2, 0x2, 0x23, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x21, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x30, 0x2, 0x2, 
    0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x40, 0x5, 0xc, 0x7, 0x2, 0x2e, 
    0x40, 0x5, 0xa, 0x6, 0x2, 0x2f, 0x30, 0x7, 0x7, 0x2, 0x2, 0x30, 0x31, 
    0x5, 0xe, 0x8, 0x2, 0x31, 0x32, 0x7, 0x1f, 0x2, 0x2, 0x32, 0x33, 0x5, 
    0x4, 0x3, 0x2, 0x33, 0x34, 0x7, 0x1f, 0x2, 0x2, 0x34, 0x35, 0x7, 0xa, 
    0x2, 0x2, 0x35, 0x40, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x8, 0x2, 
    0x2, 0x37, 0x38, 0x5, 0x6, 0x4, 0x2, 0x38, 0x39, 0x7, 0x9, 0x2, 0x2, 
    0x39, 0x3a, 0x5, 0xe, 0x8, 0x2, 0x3a, 0x3b, 0x7, 0x1f, 0x2, 0x2, 0x3b, 
    0x3c, 0x5, 0x4, 0x3, 0x2, 0x3c, 0x3d, 0x7, 0x1f, 0x2, 0x2, 0x3d, 0x3e, 
    0x7, 0xa, 0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x36, 0x3, 0x2, 0x2, 0x2, 0x40, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x42, 0x7, 0x4, 0x2, 0x2, 0x42, 0x43, 0x7, 0x21, 0x2, 0x2, 
    0x43, 0x44, 0x5, 0x14, 0xb, 0x2, 0x44, 0xb, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x46, 0x5, 0x6, 0x4, 0x2, 0x46, 0x47, 0x7, 0xb, 0x2, 0x2, 0x47, 0x48, 
    0x5, 0xe, 0x8, 0x2, 0x48, 0xd, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x5, 
    0x14, 0xb, 0x2, 0x4a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x9, 0x2, 
    0x2, 0x2, 0x4c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x9, 0x3, 0x2, 
    0x2, 0x4e, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x16, 0xc, 0x2, 
    0x50, 0x15, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0x18, 0xd, 0x2, 0x52, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x9, 0x4, 0x2, 0x2, 0x54, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x9, 0x5, 0x2, 0x2, 0x56, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x5d, 0x7, 0x14, 0x2, 0x2, 0x58, 0x59, 0x5, 0xe, 
    0x8, 0x2, 0x59, 0x5a, 0x7, 0x1c, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x7, 0x15, 0x2, 0x2, 0x61, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x23, 0x27, 
    0x3f, 0x5d, 
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
