
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

std::vector<tree::TerminalNode *> sclParser::ScopeContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::ScopeContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(66);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case sclParser::DELIMITER: {
            setState(55);
            match(sclParser::DELIMITER);
            break;
          }

          case sclParser::SPACE: {
            setState(56);
            match(sclParser::SPACE);
            break;
          }

          case sclParser::T__0:
          case sclParser::KEYWORD_PRINT:
          case sclParser::CONTROL_IF:
          case sclParser::CONTROL_FOR:
          case sclParser::OPERAND_MINUS:
          case sclParser::SQUARED_BRACKET_OPEN:
          case sclParser::CURLY_BRACKET_OPEN:
          case sclParser::ROUND_BRACKET_OPEN:
          case sclParser::BOOLEAN_TRUE:
          case sclParser::BOOLEAN_FALSE:
          case sclParser::INTEGER:
          case sclParser::FLOAT:
          case sclParser::STRING_DOUBLE_QUOTE:
          case sclParser::STRING_SINGLE_QUOTE: {
            setState(57);
            dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
            dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
            setState(61);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == sclParser::SPACE) {
              setState(58);
              match(sclParser::SPACE);
              setState(63);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(64);
            match(sclParser::DELIMITER);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(72);
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
      setState(71);
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
    setState(74);
    match(sclParser::T__0);
    setState(75);
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

sclParser::PrintContext* sclParser::InstructionContext::print() {
  return getRuleContext<sclParser::PrintContext>(0);
}

sclParser::AssignContext* sclParser::InstructionContext::assign() {
  return getRuleContext<sclParser::AssignContext>(0);
}

sclParser::AssignPropertyContext* sclParser::InstructionContext::assignProperty() {
  return getRuleContext<sclParser::AssignPropertyContext>(0);
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
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      print();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(79);
      assignProperty();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(80);
      ifControl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(81);
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

std::vector<tree::TerminalNode *> sclParser::IfControlContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::IfControlContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(sclParser::CONTROL_IF);
    setState(86); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(85);
      match(sclParser::SPACE);
      setState(88); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(90);
    expression();
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(91);
      match(sclParser::SPACE);
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(97);
    match(sclParser::DELIMITER);
    setState(98);
    scope();
    setState(99);
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

std::vector<tree::TerminalNode *> sclParser::ForControlContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::ForControlContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(sclParser::CONTROL_FOR);
    setState(103); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(102);
      match(sclParser::SPACE);
      setState(105); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(107);
    variable();
    setState(109); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(108);
      match(sclParser::SPACE);
      setState(111); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(113);
    match(sclParser::CONTROL_IN);
    setState(115); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(114);
      match(sclParser::SPACE);
      setState(117); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(119);
    expression();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(120);
      match(sclParser::SPACE);
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    match(sclParser::DELIMITER);
    setState(127);
    scope();
    setState(128);
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

std::vector<tree::TerminalNode *> sclParser::PrintContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::PrintContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(sclParser::KEYWORD_PRINT);
    setState(132); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(131);
      match(sclParser::SPACE);
      setState(134); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(136);
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

std::vector<tree::TerminalNode *> sclParser::AssignContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::AssignContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(139);
      match(sclParser::SPACE);
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(145);
    match(sclParser::OPERAND_EQUAL);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(146);
      match(sclParser::SPACE);
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
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

std::vector<tree::TerminalNode *> sclParser::AssignPropertyContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::AssignPropertyContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    dynamic_cast<AssignPropertyContext *>(_localctx)->property = expression();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(155);
      match(sclParser::SPACE);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(162);
      match(sclParser::SPACE);
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(168);
    dynamic_cast<AssignPropertyContext *>(_localctx)->key = expression();
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(169);
      match(sclParser::SPACE);
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(175);
    match(sclParser::SQUARED_BRACKET_CLOSE);
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(176);
      match(sclParser::SPACE);
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(182);
    match(sclParser::OPERAND_EQUAL);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(183);
      match(sclParser::SPACE);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
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
    setState(193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      expressionConcated(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
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
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      access();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
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

std::vector<tree::TerminalNode *> sclParser::AccessContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::AccessContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    dynamic_cast<AccessContext *>(_localctx)->property = expressionConcated(0);
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(200);
      match(sclParser::SPACE);
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(206);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(207);
      match(sclParser::SPACE);
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    dynamic_cast<AccessContext *>(_localctx)->key = expressionConcated(0);
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(214);
      match(sclParser::SPACE);
      setState(219);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(220);
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

std::vector<tree::TerminalNode *> sclParser::AccessRangeContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::AccessRangeContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(319);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(222);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(223);
        match(sclParser::SPACE);
        setState(228);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(229);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(233);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(230);
        match(sclParser::SPACE);
        setState(235);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(236);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(240);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(237);
        match(sclParser::SPACE);
        setState(242);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(243);
      match(sclParser::COLON);
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(244);
        match(sclParser::SPACE);
        setState(249);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(250);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(252);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(256);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(253);
        match(sclParser::SPACE);
        setState(258);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(259);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(260);
        match(sclParser::SPACE);
        setState(265);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(266);
      match(sclParser::COLON);
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(267);
        match(sclParser::SPACE);
        setState(272);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(273);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(274);
        match(sclParser::SPACE);
        setState(279);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(280);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(282);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(286);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(283);
        match(sclParser::SPACE);
        setState(288);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(289);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(290);
        match(sclParser::SPACE);
        setState(295);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(296);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(297);
        match(sclParser::SPACE);
        setState(302);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(303);
      match(sclParser::COLON);
      setState(307);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(304);
        match(sclParser::SPACE);
        setState(309);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(310);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(314);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(311);
        match(sclParser::SPACE);
        setState(316);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(317);
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

std::vector<tree::TerminalNode *> sclParser::ExpressionConcatedContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::ExpressionConcatedContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
    setState(322);
    expressionGrouped();
    _ctx->stop = _input->LT(-1);
    setState(371);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(369);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(324);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(328);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(325);
            match(sclParser::SPACE);
            setState(330);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(331);
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
          setState(335);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(332);
            match(sclParser::SPACE);
            setState(337);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(338);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(339);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(343);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(340);
            match(sclParser::SPACE);
            setState(345);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(346);
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
          setState(350);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(347);
            match(sclParser::SPACE);
            setState(352);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(353);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(354);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(358);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(355);
            match(sclParser::SPACE);
            setState(360);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(361);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->range = match(sclParser::RANGE);
          setState(365);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(362);
            match(sclParser::SPACE);
            setState(367);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(368);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(2);
          break;
        }

        } 
      }
      setState(373);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
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

std::vector<tree::TerminalNode *> sclParser::ExpressionGroupedContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::ExpressionGroupedContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(391);
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
        setState(374);
        expressionConst();
        break;
      }

      case sclParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(375);
        match(sclParser::ROUND_BRACKET_OPEN);
        setState(379);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(376);
          match(sclParser::SPACE);
          setState(381);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(382);
        expression();
        setState(386);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(383);
          match(sclParser::SPACE);
          setState(388);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(389);
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
    setState(398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE:
      case sclParser::INTEGER:
      case sclParser::FLOAT:
      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(393);
        expressionType();
        break;
      }

      case sclParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(394);
        expressionUnary();
        break;
      }

      case sclParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(395);
        variable();
        break;
      }

      case sclParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(396);
        array();
        break;
      }

      case sclParser::CURLY_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 5);
        setState(397);
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
    setState(400);
    match(sclParser::OPERAND_MINUS);
    setState(401);
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

std::vector<tree::TerminalNode *> sclParser::ArrayContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::ArrayContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
    setState(403);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(407);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(404);
        match(sclParser::SPACE); 
      }
      setState(409);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
    setState(426);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(410);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(414);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(411);
          match(sclParser::SPACE);
          setState(416);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(417);
        match(sclParser::COMMA);
        setState(421);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(418);
            match(sclParser::SPACE); 
          }
          setState(423);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        } 
      }
      setState(428);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(439);
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
      setState(429);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(433);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(430);
          match(sclParser::SPACE); 
        }
        setState(435);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
      }
      setState(437);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(436);
        match(sclParser::COMMA);
      }
    }
    setState(444);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(441);
      match(sclParser::SPACE);
      setState(446);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(447);
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

std::vector<tree::TerminalNode *> sclParser::DictionaryContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::DictionaryContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
    setState(449);
    match(sclParser::CURLY_BRACKET_OPEN);
    setState(453);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(450);
        match(sclParser::SPACE); 
      }
      setState(455);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
    setState(472);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(456);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(460);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(457);
          match(sclParser::SPACE);
          setState(462);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(463);
        match(sclParser::COMMA);
        setState(467);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(464);
            match(sclParser::SPACE); 
          }
          setState(469);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
        } 
      }
      setState(474);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
    setState(485);
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
      setState(475);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(479);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(476);
          match(sclParser::SPACE); 
        }
        setState(481);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
      }
      setState(483);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(482);
        match(sclParser::COMMA);
      }
    }
    setState(490);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(487);
      match(sclParser::SPACE);
      setState(492);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(493);
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

std::vector<tree::TerminalNode *> sclParser::DictionaryElementsContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::DictionaryElementsContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(499);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(496);
      match(sclParser::SPACE);
      setState(501);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(502);
    match(sclParser::COLON);
    setState(506);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(503);
      match(sclParser::SPACE);
      setState(508);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(509);
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
    setState(511);
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
    setState(517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(513);
        boolean();
        break;
      }

      case sclParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        numericInt();
        break;
      }

      case sclParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(515);
        numericFloat();
        break;
      }

      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 4);
        setState(516);
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
    setState(519);
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
    setState(521);
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
    setState(523);
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
    setState(525);
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
  "", "'$'", "", "", "", "'print'", "'include'", "'import'", "'if'", "'for'", 
  "'in'", "'end'", "'='", "'+'", "'-'", "'*'", "'/'", "'^'", "'&&'", "'||'", 
  "'..'", "'['", "']'", "'{'", "'}'", "'('", "')'", "';'", "':'", "','", 
  "'?'", "'!'", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'TRUE'", 
  "'FALSE'"
};

std::vector<std::string> sclParser::_symbolicNames = {
  "", "", "DELIMITER", "NEWLINE", "SPACE", "KEYWORD_PRINT", "KEYWORD_INCLUDE", 
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
    0x3, 0x30, 0x212, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x7, 0x3, 0x3e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x41, 0xb, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x45, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x48, 0xb, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x4b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x55, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x59, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x5a, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x5f, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x62, 
    0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x6, 0x7, 0x6a, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x6b, 0x3, 0x7, 0x3, 0x7, 
    0x6, 0x7, 0x70, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x71, 0x3, 0x7, 0x3, 0x7, 
    0x6, 0x7, 0x76, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x77, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x7c, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x7f, 0xb, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x87, 0xa, 
    0x8, 0xd, 0x8, 0xe, 0x8, 0x88, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x8f, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x92, 0xb, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x96, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x99, 0xb, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x9f, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0xa2, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xa6, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0xa9, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0xad, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xb0, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x7, 0xa, 0xb4, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xb7, 0xb, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0xbb, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xbe, 0xb, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xc4, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0xc8, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0xcc, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xcf, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x7, 0xd, 0xd3, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xd6, 0xb, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x7, 0xd, 0xda, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xdd, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xe3, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0xe6, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xea, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0xed, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
    0xf1, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xf4, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0xf8, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xfb, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x101, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x104, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x108, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x10b, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x10f, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x112, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x116, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x119, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x11f, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x122, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x126, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x129, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x12d, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x130, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x134, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x137, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x13b, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x13e, 0xb, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x142, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x149, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x14c, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x150, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0x153, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x158, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x15b, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0x15f, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x162, 0xb, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x167, 0xa, 0xf, 0xc, 0xf, 
    0xe, 0xf, 0x16a, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x16e, 0xa, 
    0xf, 0xc, 0xf, 0xe, 0xf, 0x171, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x174, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x177, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x17c, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x17f, 
    0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x183, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0x186, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x18a, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x191, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0x198, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x19b, 
    0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x19f, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x1a2, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x1a6, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1a9, 0xb, 0x13, 0x7, 0x13, 0x1ab, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1ae, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x7, 0x13, 0x1b2, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1b5, 0xb, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x1b8, 0xa, 0x13, 0x5, 0x13, 0x1ba, 0xa, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0x1bd, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1c0, 
    0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1c6, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1c9, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x7, 0x14, 0x1cd, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1d0, 0xb, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1d4, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x1d7, 0xb, 0x14, 0x7, 0x14, 0x1d9, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x1dc, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1e0, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0x1e3, 0xb, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1e6, 
    0xa, 0x14, 0x5, 0x14, 0x1e8, 0xa, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1eb, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1ee, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x1f4, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x1f7, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x1fb, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x1fe, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x208, 
    0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x2, 0x3, 0x1c, 0x1c, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x2, 
    0x6, 0x3, 0x2, 0xf, 0x15, 0x3, 0x2, 0x22, 0x27, 0x3, 0x2, 0x28, 0x29, 
    0x3, 0x2, 0x2c, 0x2d, 0x2, 0x247, 0x2, 0x36, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x56, 0x3, 0x2, 0x2, 0x2, 0xc, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x84, 0x3, 0x2, 0x2, 0x2, 0x10, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x14, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x143, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x189, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x190, 0x3, 0x2, 0x2, 0x2, 0x22, 0x192, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x195, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x201, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x207, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x20f, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x5, 0x4, 0x3, 0x2, 0x37, 0x38, 
    0x7, 0x2, 0x2, 0x3, 0x38, 0x3, 0x3, 0x2, 0x2, 0x2, 0x39, 0x45, 0x7, 
    0x4, 0x2, 0x2, 0x3a, 0x45, 0x7, 0x6, 0x2, 0x2, 0x3b, 0x3f, 0x5, 0x8, 
    0x5, 0x2, 0x3c, 0x3e, 0x7, 0x6, 0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x4, 0x2, 0x2, 0x43, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x39, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x49, 0x4b, 0x5, 0x8, 0x5, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
    0x7, 0x3, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x2f, 0x2, 0x2, 0x4e, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x55, 0x5, 0xe, 0x8, 0x2, 0x50, 0x55, 0x5, 0x10, 
    0x9, 0x2, 0x51, 0x55, 0x5, 0x12, 0xa, 0x2, 0x52, 0x55, 0x5, 0xa, 0x6, 
    0x2, 0x53, 0x55, 0x5, 0xc, 0x7, 0x2, 0x54, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x50, 0x3, 0x2, 0x2, 0x2, 0x54, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x7, 0xa, 0x2, 0x2, 0x57, 0x59, 0x7, 
    0x6, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x60, 0x5, 0x14, 0xb, 0x2, 
    0x5d, 0x5f, 0x7, 0x6, 0x2, 0x2, 0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x4, 0x2, 0x2, 0x64, 0x65, 0x5, 0x4, 
    0x3, 0x2, 0x65, 0x66, 0x7, 0xd, 0x2, 0x2, 0x66, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x69, 0x7, 0xb, 0x2, 0x2, 0x68, 0x6a, 0x7, 0x6, 0x2, 0x2, 
    0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x6, 0x4, 0x2, 0x6e, 0x70, 0x7, 
    0x6, 0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x7, 0xc, 0x2, 0x2, 
    0x74, 0x76, 0x7, 0x6, 0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7d, 0x5, 
    0x14, 0xb, 0x2, 0x7a, 0x7c, 0x7, 0x6, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x4, 0x2, 0x2, 0x81, 
    0x82, 0x5, 0x4, 0x3, 0x2, 0x82, 0x83, 0x7, 0xd, 0x2, 0x2, 0x83, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x7, 0x7, 0x2, 0x2, 0x85, 0x87, 0x7, 
    0x6, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x14, 0xb, 0x2, 
    0x8b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x90, 0x5, 0x6, 0x4, 0x2, 0x8d, 
    0x8f, 0x7, 0x6, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x97, 0x7, 0xe, 0x2, 0x2, 0x94, 0x96, 0x7, 0x6, 0x2, 
    0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x5, 0x14, 0xb, 0x2, 0x9b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x9c, 0xa0, 0x5, 
    0x14, 0xb, 0x2, 0x9d, 0x9f, 0x7, 0x6, 0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa7, 0x7, 0x17, 0x2, 0x2, 0xa4, 
    0xa6, 0x7, 0x6, 0x2, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xae, 0x5, 0x14, 0xb, 0x2, 0xab, 0xad, 0x7, 0x6, 0x2, 
    0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb5, 
    0x7, 0x18, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x6, 0x2, 0x2, 0xb3, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbc, 0x7, 0xe, 0x2, 0x2, 
    0xb9, 0xbb, 0x7, 0x6, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x14, 0xb, 0x2, 0xc0, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc4, 0x5, 0x1c, 0xf, 0x2, 0xc2, 0xc4, 0x5, 0x16, 0xc, 
    0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x5, 0x18, 0xd, 0x2, 0xc6, 
    0xc8, 0x5, 0x1a, 0xe, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcd, 0x5, 
    0x1c, 0xf, 0x2, 0xca, 0xcc, 0x7, 0x6, 0x2, 0x2, 0xcb, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd4, 0x7, 0x17, 0x2, 0x2, 0xd1, 
    0xd3, 0x7, 0x6, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xdb, 0x5, 0x1c, 0xf, 0x2, 0xd8, 0xda, 0x7, 0x6, 0x2, 
    0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 
    0x7, 0x18, 0x2, 0x2, 0xdf, 0x19, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe4, 0x5, 
    0x1c, 0xf, 0x2, 0xe1, 0xe3, 0x7, 0x6, 0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xeb, 0x7, 0x17, 0x2, 0x2, 0xe8, 
    0xea, 0x7, 0x6, 0x2, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xf2, 0x5, 0x1c, 0xf, 0x2, 0xef, 0xf1, 0x7, 0x6, 0x2, 
    0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf9, 
    0x7, 0x1e, 0x2, 0x2, 0xf6, 0xf8, 0x7, 0x6, 0x2, 0x2, 0xf7, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x18, 0x2, 0x2, 
    0xfd, 0x142, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x102, 0x5, 0x1c, 0xf, 0x2, 0xff, 
    0x101, 0x7, 0x6, 0x2, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x109, 0x7, 0x17, 0x2, 0x2, 0x106, 0x108, 
    0x7, 0x6, 0x2, 0x2, 0x107, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x110, 0x7, 0x1e, 0x2, 0x2, 0x10d, 0x10f, 
    0x7, 0x6, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x117, 0x5, 0x1c, 0xf, 0x2, 0x114, 0x116, 
    0x7, 0x6, 0x2, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x18, 0x2, 0x2, 0x11b, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x120, 0x5, 0x1c, 0xf, 0x2, 0x11d, 0x11f, 
    0x7, 0x6, 0x2, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x127, 0x7, 0x17, 0x2, 0x2, 0x124, 0x126, 
    0x7, 0x6, 0x2, 0x2, 0x125, 0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12e, 0x5, 0x1c, 0xf, 0x2, 0x12b, 0x12d, 
    0x7, 0x6, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x135, 0x7, 0x1e, 0x2, 0x2, 0x132, 0x134, 
    0x7, 0x6, 0x2, 0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x13c, 0x5, 0x1c, 0xf, 0x2, 0x139, 0x13b, 
    0x7, 0x6, 0x2, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13e, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x18, 0x2, 0x2, 0x140, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x141, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x141, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0x141, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x142, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x144, 0x8, 0xf, 0x1, 0x2, 0x144, 0x145, 0x5, 0x1e, 
    0x10, 0x2, 0x145, 0x175, 0x3, 0x2, 0x2, 0x2, 0x146, 0x14a, 0xc, 0x5, 
    0x2, 0x2, 0x147, 0x149, 0x7, 0x6, 0x2, 0x2, 0x148, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x151, 0x9, 0x2, 
    0x2, 0x2, 0x14e, 0x150, 0x7, 0x6, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x174, 0x5, 0x1c, 
    0xf, 0x6, 0x155, 0x159, 0xc, 0x4, 0x2, 0x2, 0x156, 0x158, 0x7, 0x6, 
    0x2, 0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x160, 0x9, 0x3, 0x2, 0x2, 0x15d, 0x15f, 0x7, 0x6, 
    0x2, 0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x163, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x174, 0x5, 0x1c, 0xf, 0x5, 0x164, 0x168, 0xc, 0x3, 
    0x2, 0x2, 0x165, 0x167, 0x7, 0x6, 0x2, 0x2, 0x166, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16f, 0x7, 0x16, 
    0x2, 0x2, 0x16c, 0x16e, 0x7, 0x6, 0x2, 0x2, 0x16d, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x16e, 0x171, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x174, 0x5, 0x1c, 
    0xf, 0x4, 0x173, 0x146, 0x3, 0x2, 0x2, 0x2, 0x173, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x164, 0x3, 0x2, 0x2, 0x2, 0x174, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x18a, 0x5, 0x20, 0x11, 0x2, 0x179, 0x17d, 0x7, 0x1b, 0x2, 
    0x2, 0x17a, 0x17c, 0x7, 0x6, 0x2, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 0x2, 
    0x2, 0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x180, 0x184, 0x5, 0x14, 0xb, 
    0x2, 0x181, 0x183, 0x7, 0x6, 0x2, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x186, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x187, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x1c, 0x2, 
    0x2, 0x188, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x189, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x179, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x18b, 0x191, 0x5, 0x2a, 0x16, 0x2, 0x18c, 0x191, 0x5, 0x22, 0x12, 0x2, 
    0x18d, 0x191, 0x5, 0x6, 0x4, 0x2, 0x18e, 0x191, 0x5, 0x24, 0x13, 0x2, 
    0x18f, 0x191, 0x5, 0x26, 0x14, 0x2, 0x190, 0x18b, 0x3, 0x2, 0x2, 0x2, 
    0x190, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18d, 0x3, 0x2, 0x2, 0x2, 
    0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x21, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x7, 0x10, 0x2, 0x2, 
    0x193, 0x194, 0x5, 0x14, 0xb, 0x2, 0x194, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x199, 0x7, 0x17, 0x2, 0x2, 0x196, 0x198, 0x7, 0x6, 0x2, 0x2, 
    0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x1a0, 0x5, 0x14, 0xb, 0x2, 0x19d, 0x19f, 0x7, 0x6, 0x2, 0x2, 
    0x19e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a7, 0x7, 0x1f, 0x2, 0x2, 0x1a4, 0x1a6, 0x7, 0x6, 0x2, 0x2, 
    0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1a8, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1b3, 0x5, 0x14, 0xb, 0x2, 0x1b0, 0x1b2, 0x7, 0x6, 0x2, 0x2, 
    0x1b1, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b8, 0x7, 0x1f, 0x2, 0x2, 0x1b7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1ba, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bd, 0x7, 0x6, 0x2, 0x2, 
    0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c2, 0x7, 0x18, 0x2, 0x2, 0x1c2, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c7, 0x7, 0x19, 0x2, 0x2, 0x1c4, 0x1c6, 0x7, 0x6, 0x2, 0x2, 
    0x1c5, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 
    0x1c8, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
    0x1ca, 0x1ce, 0x5, 0x28, 0x15, 0x2, 0x1cb, 0x1cd, 0x7, 0x6, 0x2, 0x2, 
    0x1cc, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d5, 0x7, 0x1f, 0x2, 0x2, 0x1d2, 0x1d4, 0x7, 0x6, 0x2, 0x2, 
    0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1db, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1e1, 0x5, 0x28, 0x15, 0x2, 0x1de, 0x1e0, 0x7, 0x6, 0x2, 0x2, 
    0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1e6, 0x7, 0x1f, 0x2, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1eb, 0x7, 0x6, 0x2, 0x2, 
    0x1ea, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 
    0x1ed, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 
    0x1ef, 0x1f0, 0x7, 0x1a, 0x2, 0x2, 0x1f0, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x1f1, 0x1f5, 0x5, 0x14, 0xb, 0x2, 0x1f2, 0x1f4, 0x7, 0x6, 0x2, 0x2, 
    0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f7, 0x3, 0x2, 0x2, 0x2, 
    0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x1f6, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x1fc, 0x7, 0x1e, 0x2, 0x2, 0x1f9, 0x1fb, 0x7, 0x6, 0x2, 0x2, 
    0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
    0x1ff, 0x200, 0x5, 0x14, 0xb, 0x2, 0x200, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x201, 0x202, 0x5, 0x2c, 0x17, 0x2, 0x202, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x208, 0x5, 0x2e, 0x18, 0x2, 0x204, 0x208, 0x5, 0x30, 0x19, 0x2, 
    0x205, 0x208, 0x5, 0x32, 0x1a, 0x2, 0x206, 0x208, 0x5, 0x34, 0x1b, 0x2, 
    0x207, 0x203, 0x3, 0x2, 0x2, 0x2, 0x207, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x208, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x9, 0x4, 0x2, 0x2, 0x20a, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x2a, 0x2, 0x2, 0x20c, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x2b, 0x2, 0x2, 0x20e, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x9, 0x5, 0x2, 0x2, 0x210, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x3f, 0x44, 0x46, 0x4a, 0x54, 0x5a, 0x60, 
    0x6b, 0x71, 0x77, 0x7d, 0x88, 0x90, 0x97, 0xa0, 0xa7, 0xae, 0xb5, 0xbc, 
    0xc3, 0xc7, 0xcd, 0xd4, 0xdb, 0xe4, 0xeb, 0xf2, 0xf9, 0x102, 0x109, 
    0x110, 0x117, 0x120, 0x127, 0x12e, 0x135, 0x13c, 0x141, 0x14a, 0x151, 
    0x159, 0x160, 0x168, 0x16f, 0x173, 0x175, 0x17d, 0x184, 0x189, 0x190, 
    0x199, 0x1a0, 0x1a7, 0x1ac, 0x1b3, 0x1b7, 0x1b9, 0x1be, 0x1c7, 0x1ce, 
    0x1d5, 0x1da, 0x1e1, 0x1e5, 0x1e7, 0x1ec, 0x1f5, 0x1fc, 0x207, 
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
