
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Command.g4 by ANTLR 4.8


#include "CommandVisitor.h"

#include "CommandParser.h"


using namespace antlrcpp;
using namespace antlr4;

CommandParser::CommandParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CommandParser::~CommandParser() {
  delete _interpreter;
}

std::string CommandParser::getGrammarFileName() const {
  return "Command.g4";
}

const std::vector<std::string>& CommandParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CommandParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ModuleContext ------------------------------------------------------------------

CommandParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::ModuleContext::EOF() {
  return getToken(CommandParser::EOF, 0);
}

CommandParser::ScopeContext* CommandParser::ModuleContext::scope() {
  return getRuleContext<CommandParser::ScopeContext>(0);
}


size_t CommandParser::ModuleContext::getRuleIndex() const {
  return CommandParser::RuleModule;
}


antlrcpp::Any CommandParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ModuleContext* CommandParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, CommandParser::RuleModule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
    setState(53);
    match(CommandParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

CommandParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CommandParser::ScopeContext::DELIMITER() {
  return getTokens(CommandParser::DELIMITER);
}

tree::TerminalNode* CommandParser::ScopeContext::DELIMITER(size_t i) {
  return getToken(CommandParser::DELIMITER, i);
}

std::vector<CommandParser::InstructionContext *> CommandParser::ScopeContext::instruction() {
  return getRuleContexts<CommandParser::InstructionContext>();
}

CommandParser::InstructionContext* CommandParser::ScopeContext::instruction(size_t i) {
  return getRuleContext<CommandParser::InstructionContext>(i);
}


size_t CommandParser::ScopeContext::getRuleIndex() const {
  return CommandParser::RuleScope;
}


antlrcpp::Any CommandParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ScopeContext* CommandParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 2, CommandParser::RuleScope);
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
          case CommandParser::DELIMITER: {
            setState(55);
            match(CommandParser::DELIMITER);
            break;
          }

          case CommandParser::T__0:
          case CommandParser::KEYWORD_PRINT:
          case CommandParser::CONTROL_IF:
          case CommandParser::CONTROL_FOR:
          case CommandParser::OPERAND_MINUS:
          case CommandParser::SQUARED_BRACKET_OPEN:
          case CommandParser::CURLY_BRACKET_OPEN:
          case CommandParser::ROUND_BRACKET_OPEN:
          case CommandParser::BOOLEAN_TRUE:
          case CommandParser::BOOLEAN_FALSE:
          case CommandParser::INTEGER:
          case CommandParser::FLOAT:
          case CommandParser::STRING_DOUBLE_QUOTE:
          case CommandParser::STRING_SINGLE_QUOTE: {
            setState(56);
            dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
            dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
            setState(57);
            match(CommandParser::DELIMITER);
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
      ((1ULL << _la) & ((1ULL << CommandParser::T__0)
      | (1ULL << CommandParser::KEYWORD_PRINT)
      | (1ULL << CommandParser::CONTROL_IF)
      | (1ULL << CommandParser::CONTROL_FOR)
      | (1ULL << CommandParser::OPERAND_MINUS)
      | (1ULL << CommandParser::SQUARED_BRACKET_OPEN)
      | (1ULL << CommandParser::CURLY_BRACKET_OPEN)
      | (1ULL << CommandParser::ROUND_BRACKET_OPEN)
      | (1ULL << CommandParser::BOOLEAN_TRUE)
      | (1ULL << CommandParser::BOOLEAN_FALSE)
      | (1ULL << CommandParser::INTEGER)
      | (1ULL << CommandParser::FLOAT)
      | (1ULL << CommandParser::STRING_DOUBLE_QUOTE)
      | (1ULL << CommandParser::STRING_SINGLE_QUOTE))) != 0)) {
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

CommandParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::VariableContext::IDENTIFIER() {
  return getToken(CommandParser::IDENTIFIER, 0);
}


size_t CommandParser::VariableContext::getRuleIndex() const {
  return CommandParser::RuleVariable;
}


antlrcpp::Any CommandParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::VariableContext* CommandParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, CommandParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(CommandParser::T__0);
    setState(68);
    match(CommandParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

CommandParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::PrintContext* CommandParser::InstructionContext::print() {
  return getRuleContext<CommandParser::PrintContext>(0);
}

CommandParser::AssignContext* CommandParser::InstructionContext::assign() {
  return getRuleContext<CommandParser::AssignContext>(0);
}

CommandParser::AssignPropertyContext* CommandParser::InstructionContext::assignProperty() {
  return getRuleContext<CommandParser::AssignPropertyContext>(0);
}

CommandParser::IfControlContext* CommandParser::InstructionContext::ifControl() {
  return getRuleContext<CommandParser::IfControlContext>(0);
}

CommandParser::ForControlContext* CommandParser::InstructionContext::forControl() {
  return getRuleContext<CommandParser::ForControlContext>(0);
}


size_t CommandParser::InstructionContext::getRuleIndex() const {
  return CommandParser::RuleInstruction;
}


antlrcpp::Any CommandParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::InstructionContext* CommandParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, CommandParser::RuleInstruction);

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

CommandParser::IfControlContext::IfControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::IfControlContext::CONTROL_IF() {
  return getToken(CommandParser::CONTROL_IF, 0);
}

CommandParser::ExpressionContext* CommandParser::IfControlContext::expression() {
  return getRuleContext<CommandParser::ExpressionContext>(0);
}

tree::TerminalNode* CommandParser::IfControlContext::DELIMITER() {
  return getToken(CommandParser::DELIMITER, 0);
}

CommandParser::ScopeContext* CommandParser::IfControlContext::scope() {
  return getRuleContext<CommandParser::ScopeContext>(0);
}

tree::TerminalNode* CommandParser::IfControlContext::CONTROL_END() {
  return getToken(CommandParser::CONTROL_END, 0);
}


size_t CommandParser::IfControlContext::getRuleIndex() const {
  return CommandParser::RuleIfControl;
}


antlrcpp::Any CommandParser::IfControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitIfControl(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::IfControlContext* CommandParser::ifControl() {
  IfControlContext *_localctx = _tracker.createInstance<IfControlContext>(_ctx, getState());
  enterRule(_localctx, 8, CommandParser::RuleIfControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(CommandParser::CONTROL_IF);
    setState(78);
    expression();
    setState(79);
    match(CommandParser::DELIMITER);
    setState(80);
    scope();
    setState(81);
    match(CommandParser::CONTROL_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForControlContext ------------------------------------------------------------------

CommandParser::ForControlContext::ForControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::ForControlContext::CONTROL_FOR() {
  return getToken(CommandParser::CONTROL_FOR, 0);
}

CommandParser::VariableContext* CommandParser::ForControlContext::variable() {
  return getRuleContext<CommandParser::VariableContext>(0);
}

tree::TerminalNode* CommandParser::ForControlContext::CONTROL_IN() {
  return getToken(CommandParser::CONTROL_IN, 0);
}

CommandParser::ExpressionContext* CommandParser::ForControlContext::expression() {
  return getRuleContext<CommandParser::ExpressionContext>(0);
}

tree::TerminalNode* CommandParser::ForControlContext::DELIMITER() {
  return getToken(CommandParser::DELIMITER, 0);
}

CommandParser::ScopeContext* CommandParser::ForControlContext::scope() {
  return getRuleContext<CommandParser::ScopeContext>(0);
}

tree::TerminalNode* CommandParser::ForControlContext::CONTROL_END() {
  return getToken(CommandParser::CONTROL_END, 0);
}


size_t CommandParser::ForControlContext::getRuleIndex() const {
  return CommandParser::RuleForControl;
}


antlrcpp::Any CommandParser::ForControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitForControl(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ForControlContext* CommandParser::forControl() {
  ForControlContext *_localctx = _tracker.createInstance<ForControlContext>(_ctx, getState());
  enterRule(_localctx, 10, CommandParser::RuleForControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(CommandParser::CONTROL_FOR);
    setState(84);
    variable();
    setState(85);
    match(CommandParser::CONTROL_IN);
    setState(86);
    expression();
    setState(87);
    match(CommandParser::DELIMITER);
    setState(88);
    scope();
    setState(89);
    match(CommandParser::CONTROL_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

CommandParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::PrintContext::KEYWORD_PRINT() {
  return getToken(CommandParser::KEYWORD_PRINT, 0);
}

CommandParser::ExpressionContext* CommandParser::PrintContext::expression() {
  return getRuleContext<CommandParser::ExpressionContext>(0);
}


size_t CommandParser::PrintContext::getRuleIndex() const {
  return CommandParser::RulePrint;
}


antlrcpp::Any CommandParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::PrintContext* CommandParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 12, CommandParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(CommandParser::KEYWORD_PRINT);
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

CommandParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::AssignContext::OPERAND_EQUAL() {
  return getToken(CommandParser::OPERAND_EQUAL, 0);
}

CommandParser::VariableContext* CommandParser::AssignContext::variable() {
  return getRuleContext<CommandParser::VariableContext>(0);
}

CommandParser::ExpressionContext* CommandParser::AssignContext::expression() {
  return getRuleContext<CommandParser::ExpressionContext>(0);
}


size_t CommandParser::AssignContext::getRuleIndex() const {
  return CommandParser::RuleAssign;
}


antlrcpp::Any CommandParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::AssignContext* CommandParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 14, CommandParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(95);
    match(CommandParser::OPERAND_EQUAL);
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

CommandParser::AssignPropertyContext::AssignPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::AssignPropertyContext::SQUARED_BRACKET_OPEN() {
  return getToken(CommandParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* CommandParser::AssignPropertyContext::SQUARED_BRACKET_CLOSE() {
  return getToken(CommandParser::SQUARED_BRACKET_CLOSE, 0);
}

tree::TerminalNode* CommandParser::AssignPropertyContext::OPERAND_EQUAL() {
  return getToken(CommandParser::OPERAND_EQUAL, 0);
}

std::vector<CommandParser::ExpressionContext *> CommandParser::AssignPropertyContext::expression() {
  return getRuleContexts<CommandParser::ExpressionContext>();
}

CommandParser::ExpressionContext* CommandParser::AssignPropertyContext::expression(size_t i) {
  return getRuleContext<CommandParser::ExpressionContext>(i);
}


size_t CommandParser::AssignPropertyContext::getRuleIndex() const {
  return CommandParser::RuleAssignProperty;
}


antlrcpp::Any CommandParser::AssignPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitAssignProperty(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::AssignPropertyContext* CommandParser::assignProperty() {
  AssignPropertyContext *_localctx = _tracker.createInstance<AssignPropertyContext>(_ctx, getState());
  enterRule(_localctx, 16, CommandParser::RuleAssignProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    dynamic_cast<AssignPropertyContext *>(_localctx)->property = expression();
    setState(99);
    match(CommandParser::SQUARED_BRACKET_OPEN);
    setState(100);
    dynamic_cast<AssignPropertyContext *>(_localctx)->key = expression();
    setState(101);
    match(CommandParser::SQUARED_BRACKET_CLOSE);
    setState(102);
    match(CommandParser::OPERAND_EQUAL);
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

CommandParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::ExpressionConcatedContext* CommandParser::ExpressionContext::expressionConcated() {
  return getRuleContext<CommandParser::ExpressionConcatedContext>(0);
}

CommandParser::ExpressionAccessContext* CommandParser::ExpressionContext::expressionAccess() {
  return getRuleContext<CommandParser::ExpressionAccessContext>(0);
}


size_t CommandParser::ExpressionContext::getRuleIndex() const {
  return CommandParser::RuleExpression;
}


antlrcpp::Any CommandParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ExpressionContext* CommandParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CommandParser::RuleExpression);

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

CommandParser::ExpressionAccessContext::ExpressionAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::AccessContext* CommandParser::ExpressionAccessContext::access() {
  return getRuleContext<CommandParser::AccessContext>(0);
}

CommandParser::AccessRangeContext* CommandParser::ExpressionAccessContext::accessRange() {
  return getRuleContext<CommandParser::AccessRangeContext>(0);
}


size_t CommandParser::ExpressionAccessContext::getRuleIndex() const {
  return CommandParser::RuleExpressionAccess;
}


antlrcpp::Any CommandParser::ExpressionAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpressionAccess(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ExpressionAccessContext* CommandParser::expressionAccess() {
  ExpressionAccessContext *_localctx = _tracker.createInstance<ExpressionAccessContext>(_ctx, getState());
  enterRule(_localctx, 20, CommandParser::RuleExpressionAccess);

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

CommandParser::AccessContext::AccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::AccessContext::SQUARED_BRACKET_OPEN() {
  return getToken(CommandParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* CommandParser::AccessContext::SQUARED_BRACKET_CLOSE() {
  return getToken(CommandParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<CommandParser::ExpressionConcatedContext *> CommandParser::AccessContext::expressionConcated() {
  return getRuleContexts<CommandParser::ExpressionConcatedContext>();
}

CommandParser::ExpressionConcatedContext* CommandParser::AccessContext::expressionConcated(size_t i) {
  return getRuleContext<CommandParser::ExpressionConcatedContext>(i);
}


size_t CommandParser::AccessContext::getRuleIndex() const {
  return CommandParser::RuleAccess;
}


antlrcpp::Any CommandParser::AccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitAccess(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::AccessContext* CommandParser::access() {
  AccessContext *_localctx = _tracker.createInstance<AccessContext>(_ctx, getState());
  enterRule(_localctx, 22, CommandParser::RuleAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    dynamic_cast<AccessContext *>(_localctx)->property = expressionConcated(0);
    setState(114);
    match(CommandParser::SQUARED_BRACKET_OPEN);
    setState(115);
    dynamic_cast<AccessContext *>(_localctx)->key = expressionConcated(0);
    setState(116);
    match(CommandParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessRangeContext ------------------------------------------------------------------

CommandParser::AccessRangeContext::AccessRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::AccessRangeContext::SQUARED_BRACKET_OPEN() {
  return getToken(CommandParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* CommandParser::AccessRangeContext::COLON() {
  return getToken(CommandParser::COLON, 0);
}

tree::TerminalNode* CommandParser::AccessRangeContext::SQUARED_BRACKET_CLOSE() {
  return getToken(CommandParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<CommandParser::ExpressionConcatedContext *> CommandParser::AccessRangeContext::expressionConcated() {
  return getRuleContexts<CommandParser::ExpressionConcatedContext>();
}

CommandParser::ExpressionConcatedContext* CommandParser::AccessRangeContext::expressionConcated(size_t i) {
  return getRuleContext<CommandParser::ExpressionConcatedContext>(i);
}


size_t CommandParser::AccessRangeContext::getRuleIndex() const {
  return CommandParser::RuleAccessRange;
}


antlrcpp::Any CommandParser::AccessRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitAccessRange(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::AccessRangeContext* CommandParser::accessRange() {
  AccessRangeContext *_localctx = _tracker.createInstance<AccessRangeContext>(_ctx, getState());
  enterRule(_localctx, 24, CommandParser::RuleAccessRange);

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
      match(CommandParser::SQUARED_BRACKET_OPEN);
      setState(120);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(121);
      match(CommandParser::COLON);
      setState(122);
      match(CommandParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(124);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(125);
      match(CommandParser::SQUARED_BRACKET_OPEN);
      setState(126);
      match(CommandParser::COLON);
      setState(127);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(128);
      match(CommandParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(130);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(131);
      match(CommandParser::SQUARED_BRACKET_OPEN);
      setState(132);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(133);
      match(CommandParser::COLON);
      setState(134);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(135);
      match(CommandParser::SQUARED_BRACKET_CLOSE);
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

CommandParser::ExpressionConcatedContext::ExpressionConcatedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::ExpressionGroupedContext* CommandParser::ExpressionConcatedContext::expressionGrouped() {
  return getRuleContext<CommandParser::ExpressionGroupedContext>(0);
}

std::vector<CommandParser::ExpressionConcatedContext *> CommandParser::ExpressionConcatedContext::expressionConcated() {
  return getRuleContexts<CommandParser::ExpressionConcatedContext>();
}

CommandParser::ExpressionConcatedContext* CommandParser::ExpressionConcatedContext::expressionConcated(size_t i) {
  return getRuleContext<CommandParser::ExpressionConcatedContext>(i);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_PLUS() {
  return getToken(CommandParser::OPERAND_PLUS, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_MINUS() {
  return getToken(CommandParser::OPERAND_MINUS, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_ASTERISK() {
  return getToken(CommandParser::OPERAND_ASTERISK, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_SLASH() {
  return getToken(CommandParser::OPERAND_SLASH, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_CARET() {
  return getToken(CommandParser::OPERAND_CARET, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_AND() {
  return getToken(CommandParser::OPERAND_AND, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::OPERAND_OR() {
  return getToken(CommandParser::OPERAND_OR, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::COMPARATOR_EQUAL() {
  return getToken(CommandParser::COMPARATOR_EQUAL, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::COMPARATOR_NOT_EQUAL() {
  return getToken(CommandParser::COMPARATOR_NOT_EQUAL, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::COMPARATOR_LESS() {
  return getToken(CommandParser::COMPARATOR_LESS, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::COMPARATOR_GREATER() {
  return getToken(CommandParser::COMPARATOR_GREATER, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::COMPARATOR_LESS_EQUAL() {
  return getToken(CommandParser::COMPARATOR_LESS_EQUAL, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::COMPARATOR_GREATER_EQUAL() {
  return getToken(CommandParser::COMPARATOR_GREATER_EQUAL, 0);
}

tree::TerminalNode* CommandParser::ExpressionConcatedContext::RANGE() {
  return getToken(CommandParser::RANGE, 0);
}


size_t CommandParser::ExpressionConcatedContext::getRuleIndex() const {
  return CommandParser::RuleExpressionConcated;
}


antlrcpp::Any CommandParser::ExpressionConcatedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpressionConcated(this);
  else
    return visitor->visitChildren(this);
}


CommandParser::ExpressionConcatedContext* CommandParser::expressionConcated() {
   return expressionConcated(0);
}

CommandParser::ExpressionConcatedContext* CommandParser::expressionConcated(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CommandParser::ExpressionConcatedContext *_localctx = _tracker.createInstance<ExpressionConcatedContext>(_ctx, parentState);
  CommandParser::ExpressionConcatedContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, CommandParser::RuleExpressionConcated, precedence);

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
            ((1ULL << _la) & ((1ULL << CommandParser::OPERAND_PLUS)
            | (1ULL << CommandParser::OPERAND_MINUS)
            | (1ULL << CommandParser::OPERAND_ASTERISK)
            | (1ULL << CommandParser::OPERAND_SLASH)
            | (1ULL << CommandParser::OPERAND_CARET)
            | (1ULL << CommandParser::OPERAND_AND)
            | (1ULL << CommandParser::OPERAND_OR))) != 0))) {
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
            ((1ULL << _la) & ((1ULL << CommandParser::COMPARATOR_EQUAL)
            | (1ULL << CommandParser::COMPARATOR_NOT_EQUAL)
            | (1ULL << CommandParser::COMPARATOR_GREATER)
            | (1ULL << CommandParser::COMPARATOR_GREATER_EQUAL)
            | (1ULL << CommandParser::COMPARATOR_LESS)
            | (1ULL << CommandParser::COMPARATOR_LESS_EQUAL))) != 0))) {
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
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->range = match(CommandParser::RANGE);
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

CommandParser::ExpressionGroupedContext::ExpressionGroupedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::ExpressionConstContext* CommandParser::ExpressionGroupedContext::expressionConst() {
  return getRuleContext<CommandParser::ExpressionConstContext>(0);
}

tree::TerminalNode* CommandParser::ExpressionGroupedContext::ROUND_BRACKET_OPEN() {
  return getToken(CommandParser::ROUND_BRACKET_OPEN, 0);
}

CommandParser::ExpressionContext* CommandParser::ExpressionGroupedContext::expression() {
  return getRuleContext<CommandParser::ExpressionContext>(0);
}

tree::TerminalNode* CommandParser::ExpressionGroupedContext::ROUND_BRACKET_CLOSE() {
  return getToken(CommandParser::ROUND_BRACKET_CLOSE, 0);
}


size_t CommandParser::ExpressionGroupedContext::getRuleIndex() const {
  return CommandParser::RuleExpressionGrouped;
}


antlrcpp::Any CommandParser::ExpressionGroupedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpressionGrouped(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ExpressionGroupedContext* CommandParser::expressionGrouped() {
  ExpressionGroupedContext *_localctx = _tracker.createInstance<ExpressionGroupedContext>(_ctx, getState());
  enterRule(_localctx, 28, CommandParser::RuleExpressionGrouped);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandParser::T__0:
      case CommandParser::OPERAND_MINUS:
      case CommandParser::SQUARED_BRACKET_OPEN:
      case CommandParser::CURLY_BRACKET_OPEN:
      case CommandParser::BOOLEAN_TRUE:
      case CommandParser::BOOLEAN_FALSE:
      case CommandParser::INTEGER:
      case CommandParser::FLOAT:
      case CommandParser::STRING_DOUBLE_QUOTE:
      case CommandParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        expressionConst();
        break;
      }

      case CommandParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(157);
        match(CommandParser::ROUND_BRACKET_OPEN);
        setState(158);
        expression();
        setState(159);
        match(CommandParser::ROUND_BRACKET_CLOSE);
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

CommandParser::ExpressionConstContext::ExpressionConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::ExpressionTypeContext* CommandParser::ExpressionConstContext::expressionType() {
  return getRuleContext<CommandParser::ExpressionTypeContext>(0);
}

CommandParser::ExpressionUnaryContext* CommandParser::ExpressionConstContext::expressionUnary() {
  return getRuleContext<CommandParser::ExpressionUnaryContext>(0);
}

CommandParser::VariableContext* CommandParser::ExpressionConstContext::variable() {
  return getRuleContext<CommandParser::VariableContext>(0);
}

CommandParser::ArrayContext* CommandParser::ExpressionConstContext::array() {
  return getRuleContext<CommandParser::ArrayContext>(0);
}

CommandParser::DictionaryContext* CommandParser::ExpressionConstContext::dictionary() {
  return getRuleContext<CommandParser::DictionaryContext>(0);
}


size_t CommandParser::ExpressionConstContext::getRuleIndex() const {
  return CommandParser::RuleExpressionConst;
}


antlrcpp::Any CommandParser::ExpressionConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpressionConst(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ExpressionConstContext* CommandParser::expressionConst() {
  ExpressionConstContext *_localctx = _tracker.createInstance<ExpressionConstContext>(_ctx, getState());
  enterRule(_localctx, 30, CommandParser::RuleExpressionConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandParser::BOOLEAN_TRUE:
      case CommandParser::BOOLEAN_FALSE:
      case CommandParser::INTEGER:
      case CommandParser::FLOAT:
      case CommandParser::STRING_DOUBLE_QUOTE:
      case CommandParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(163);
        expressionType();
        break;
      }

      case CommandParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        expressionUnary();
        break;
      }

      case CommandParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(165);
        variable();
        break;
      }

      case CommandParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(166);
        array();
        break;
      }

      case CommandParser::CURLY_BRACKET_OPEN: {
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

CommandParser::ExpressionUnaryContext::ExpressionUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::ExpressionUnaryContext::OPERAND_MINUS() {
  return getToken(CommandParser::OPERAND_MINUS, 0);
}

CommandParser::ExpressionContext* CommandParser::ExpressionUnaryContext::expression() {
  return getRuleContext<CommandParser::ExpressionContext>(0);
}


size_t CommandParser::ExpressionUnaryContext::getRuleIndex() const {
  return CommandParser::RuleExpressionUnary;
}


antlrcpp::Any CommandParser::ExpressionUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpressionUnary(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ExpressionUnaryContext* CommandParser::expressionUnary() {
  ExpressionUnaryContext *_localctx = _tracker.createInstance<ExpressionUnaryContext>(_ctx, getState());
  enterRule(_localctx, 32, CommandParser::RuleExpressionUnary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(CommandParser::OPERAND_MINUS);
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

CommandParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::ArrayContext::SQUARED_BRACKET_OPEN() {
  return getToken(CommandParser::SQUARED_BRACKET_OPEN, 0);
}

tree::TerminalNode* CommandParser::ArrayContext::SQUARED_BRACKET_CLOSE() {
  return getToken(CommandParser::SQUARED_BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> CommandParser::ArrayContext::COMMA() {
  return getTokens(CommandParser::COMMA);
}

tree::TerminalNode* CommandParser::ArrayContext::COMMA(size_t i) {
  return getToken(CommandParser::COMMA, i);
}

std::vector<CommandParser::ExpressionContext *> CommandParser::ArrayContext::expression() {
  return getRuleContexts<CommandParser::ExpressionContext>();
}

CommandParser::ExpressionContext* CommandParser::ArrayContext::expression(size_t i) {
  return getRuleContext<CommandParser::ExpressionContext>(i);
}


size_t CommandParser::ArrayContext::getRuleIndex() const {
  return CommandParser::RuleArray;
}


antlrcpp::Any CommandParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ArrayContext* CommandParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 34, CommandParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(CommandParser::SQUARED_BRACKET_OPEN);
    setState(179);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(174);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(175);
        match(CommandParser::COMMA); 
      }
      setState(181);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CommandParser::T__0)
      | (1ULL << CommandParser::OPERAND_MINUS)
      | (1ULL << CommandParser::SQUARED_BRACKET_OPEN)
      | (1ULL << CommandParser::CURLY_BRACKET_OPEN)
      | (1ULL << CommandParser::ROUND_BRACKET_OPEN)
      | (1ULL << CommandParser::BOOLEAN_TRUE)
      | (1ULL << CommandParser::BOOLEAN_FALSE)
      | (1ULL << CommandParser::INTEGER)
      | (1ULL << CommandParser::FLOAT)
      | (1ULL << CommandParser::STRING_DOUBLE_QUOTE)
      | (1ULL << CommandParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(182);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CommandParser::COMMA) {
        setState(183);
        match(CommandParser::COMMA);
      }
    }
    setState(188);
    match(CommandParser::SQUARED_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryContext ------------------------------------------------------------------

CommandParser::DictionaryContext::DictionaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::DictionaryContext::CURLY_BRACKET_OPEN() {
  return getToken(CommandParser::CURLY_BRACKET_OPEN, 0);
}

tree::TerminalNode* CommandParser::DictionaryContext::CURLY_BRACKET_CLOSE() {
  return getToken(CommandParser::CURLY_BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> CommandParser::DictionaryContext::COMMA() {
  return getTokens(CommandParser::COMMA);
}

tree::TerminalNode* CommandParser::DictionaryContext::COMMA(size_t i) {
  return getToken(CommandParser::COMMA, i);
}

std::vector<CommandParser::DictionaryElementsContext *> CommandParser::DictionaryContext::dictionaryElements() {
  return getRuleContexts<CommandParser::DictionaryElementsContext>();
}

CommandParser::DictionaryElementsContext* CommandParser::DictionaryContext::dictionaryElements(size_t i) {
  return getRuleContext<CommandParser::DictionaryElementsContext>(i);
}


size_t CommandParser::DictionaryContext::getRuleIndex() const {
  return CommandParser::RuleDictionary;
}


antlrcpp::Any CommandParser::DictionaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitDictionary(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::DictionaryContext* CommandParser::dictionary() {
  DictionaryContext *_localctx = _tracker.createInstance<DictionaryContext>(_ctx, getState());
  enterRule(_localctx, 36, CommandParser::RuleDictionary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(CommandParser::CURLY_BRACKET_OPEN);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(191);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(192);
        match(CommandParser::COMMA); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CommandParser::T__0)
      | (1ULL << CommandParser::OPERAND_MINUS)
      | (1ULL << CommandParser::SQUARED_BRACKET_OPEN)
      | (1ULL << CommandParser::CURLY_BRACKET_OPEN)
      | (1ULL << CommandParser::ROUND_BRACKET_OPEN)
      | (1ULL << CommandParser::BOOLEAN_TRUE)
      | (1ULL << CommandParser::BOOLEAN_FALSE)
      | (1ULL << CommandParser::INTEGER)
      | (1ULL << CommandParser::FLOAT)
      | (1ULL << CommandParser::STRING_DOUBLE_QUOTE)
      | (1ULL << CommandParser::STRING_SINGLE_QUOTE))) != 0)) {
      setState(199);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(201);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CommandParser::COMMA) {
        setState(200);
        match(CommandParser::COMMA);
      }
    }
    setState(205);
    match(CommandParser::CURLY_BRACKET_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryElementsContext ------------------------------------------------------------------

CommandParser::DictionaryElementsContext::DictionaryElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::DictionaryElementsContext::COLON() {
  return getToken(CommandParser::COLON, 0);
}

std::vector<CommandParser::ExpressionContext *> CommandParser::DictionaryElementsContext::expression() {
  return getRuleContexts<CommandParser::ExpressionContext>();
}

CommandParser::ExpressionContext* CommandParser::DictionaryElementsContext::expression(size_t i) {
  return getRuleContext<CommandParser::ExpressionContext>(i);
}


size_t CommandParser::DictionaryElementsContext::getRuleIndex() const {
  return CommandParser::RuleDictionaryElements;
}


antlrcpp::Any CommandParser::DictionaryElementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitDictionaryElements(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::DictionaryElementsContext* CommandParser::dictionaryElements() {
  DictionaryElementsContext *_localctx = _tracker.createInstance<DictionaryElementsContext>(_ctx, getState());
  enterRule(_localctx, 38, CommandParser::RuleDictionaryElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(208);
    match(CommandParser::COLON);
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

CommandParser::ExpressionTypeContext::ExpressionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::TypeContext* CommandParser::ExpressionTypeContext::type() {
  return getRuleContext<CommandParser::TypeContext>(0);
}


size_t CommandParser::ExpressionTypeContext::getRuleIndex() const {
  return CommandParser::RuleExpressionType;
}


antlrcpp::Any CommandParser::ExpressionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitExpressionType(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::ExpressionTypeContext* CommandParser::expressionType() {
  ExpressionTypeContext *_localctx = _tracker.createInstance<ExpressionTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, CommandParser::RuleExpressionType);

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

CommandParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandParser::BooleanContext* CommandParser::TypeContext::boolean() {
  return getRuleContext<CommandParser::BooleanContext>(0);
}

CommandParser::NumericIntContext* CommandParser::TypeContext::numericInt() {
  return getRuleContext<CommandParser::NumericIntContext>(0);
}

CommandParser::NumericFloatContext* CommandParser::TypeContext::numericFloat() {
  return getRuleContext<CommandParser::NumericFloatContext>(0);
}

CommandParser::StringContext* CommandParser::TypeContext::string() {
  return getRuleContext<CommandParser::StringContext>(0);
}


size_t CommandParser::TypeContext::getRuleIndex() const {
  return CommandParser::RuleType;
}


antlrcpp::Any CommandParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::TypeContext* CommandParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 42, CommandParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandParser::BOOLEAN_TRUE:
      case CommandParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(213);
        boolean();
        break;
      }

      case CommandParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(214);
        numericInt();
        break;
      }

      case CommandParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(215);
        numericFloat();
        break;
      }

      case CommandParser::STRING_DOUBLE_QUOTE:
      case CommandParser::STRING_SINGLE_QUOTE: {
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

CommandParser::BooleanContext::BooleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::BooleanContext::BOOLEAN_TRUE() {
  return getToken(CommandParser::BOOLEAN_TRUE, 0);
}

tree::TerminalNode* CommandParser::BooleanContext::BOOLEAN_FALSE() {
  return getToken(CommandParser::BOOLEAN_FALSE, 0);
}


size_t CommandParser::BooleanContext::getRuleIndex() const {
  return CommandParser::RuleBoolean;
}


antlrcpp::Any CommandParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::BooleanContext* CommandParser::boolean() {
  BooleanContext *_localctx = _tracker.createInstance<BooleanContext>(_ctx, getState());
  enterRule(_localctx, 44, CommandParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    _la = _input->LA(1);
    if (!(_la == CommandParser::BOOLEAN_TRUE

    || _la == CommandParser::BOOLEAN_FALSE)) {
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

CommandParser::NumericIntContext::NumericIntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::NumericIntContext::INTEGER() {
  return getToken(CommandParser::INTEGER, 0);
}


size_t CommandParser::NumericIntContext::getRuleIndex() const {
  return CommandParser::RuleNumericInt;
}


antlrcpp::Any CommandParser::NumericIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitNumericInt(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::NumericIntContext* CommandParser::numericInt() {
  NumericIntContext *_localctx = _tracker.createInstance<NumericIntContext>(_ctx, getState());
  enterRule(_localctx, 46, CommandParser::RuleNumericInt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(CommandParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericFloatContext ------------------------------------------------------------------

CommandParser::NumericFloatContext::NumericFloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::NumericFloatContext::FLOAT() {
  return getToken(CommandParser::FLOAT, 0);
}


size_t CommandParser::NumericFloatContext::getRuleIndex() const {
  return CommandParser::RuleNumericFloat;
}


antlrcpp::Any CommandParser::NumericFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitNumericFloat(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::NumericFloatContext* CommandParser::numericFloat() {
  NumericFloatContext *_localctx = _tracker.createInstance<NumericFloatContext>(_ctx, getState());
  enterRule(_localctx, 48, CommandParser::RuleNumericFloat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(CommandParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

CommandParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::StringContext::STRING_SINGLE_QUOTE() {
  return getToken(CommandParser::STRING_SINGLE_QUOTE, 0);
}

tree::TerminalNode* CommandParser::StringContext::STRING_DOUBLE_QUOTE() {
  return getToken(CommandParser::STRING_DOUBLE_QUOTE, 0);
}


size_t CommandParser::StringContext::getRuleIndex() const {
  return CommandParser::RuleString;
}


antlrcpp::Any CommandParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::StringContext* CommandParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 50, CommandParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _la = _input->LA(1);
    if (!(_la == CommandParser::STRING_DOUBLE_QUOTE

    || _la == CommandParser::STRING_SINGLE_QUOTE)) {
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

bool CommandParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return expressionConcatedSempred(dynamic_cast<ExpressionConcatedContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CommandParser::expressionConcatedSempred(ExpressionConcatedContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> CommandParser::_decisionToDFA;
atn::PredictionContextCache CommandParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CommandParser::_atn;
std::vector<uint16_t> CommandParser::_serializedATN;

std::vector<std::string> CommandParser::_ruleNames = {
  "module", "scope", "variable", "instruction", "ifControl", "forControl", 
  "print", "assign", "assignProperty", "expression", "expressionAccess", 
  "access", "accessRange", "expressionConcated", "expressionGrouped", "expressionConst", 
  "expressionUnary", "array", "dictionary", "dictionaryElements", "expressionType", 
  "type", "boolean", "numericInt", "numericFloat", "string"
};

std::vector<std::string> CommandParser::_literalNames = {
  "", "'$'", "", "", "", "'print'", "'include'", "'import'", "'if'", "'for'", 
  "'in'", "'end'", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'&&'", "'||'", 
  "'..'", "'['", "']'", "'{'", "'}'", "'('", "')'", "';'", "':'", "','", 
  "'?'", "'!'", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'TRUE'", 
  "'FALSE'"
};

std::vector<std::string> CommandParser::_symbolicNames = {
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

dfa::Vocabulary CommandParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CommandParser::_tokenNames;

CommandParser::Initializer::Initializer() {
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

CommandParser::Initializer CommandParser::_init;