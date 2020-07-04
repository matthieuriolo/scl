
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
    setState(54);
    dynamic_cast<ModuleContext *>(_localctx)->content = scope();
    setState(55);
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
    setState(70);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(68);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case sclParser::DELIMITER: {
            setState(57);
            match(sclParser::DELIMITER);
            break;
          }

          case sclParser::SPACE: {
            setState(58);
            match(sclParser::SPACE);
            break;
          }

          case sclParser::T__0:
          case sclParser::KEYWORD_PRINT:
          case sclParser::KEYWORD_INCLUDE:
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
            setState(59);
            dynamic_cast<ScopeContext *>(_localctx)->instructionContext = instruction();
            dynamic_cast<ScopeContext *>(_localctx)->instructions.push_back(dynamic_cast<ScopeContext *>(_localctx)->instructionContext);
            setState(63);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == sclParser::SPACE) {
              setState(60);
              match(sclParser::SPACE);
              setState(65);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(66);
            match(sclParser::DELIMITER);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(72);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sclParser::T__0)
      | (1ULL << sclParser::KEYWORD_PRINT)
      | (1ULL << sclParser::KEYWORD_INCLUDE)
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
      setState(73);
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
    setState(76);
    match(sclParser::T__0);
    setState(77);
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

sclParser::IncludeFileContext* sclParser::InstructionContext::includeFile() {
  return getRuleContext<sclParser::IncludeFileContext>(0);
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
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      print();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      includeFile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
      assign();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(82);
      assignProperty();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(83);
      ifControl();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
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
    setState(87);
    match(sclParser::CONTROL_IF);
    setState(89); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(88);
      match(sclParser::SPACE);
      setState(91); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(93);
    expression();
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(94);
      match(sclParser::SPACE);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(100);
    match(sclParser::DELIMITER);
    setState(101);
    scope();
    setState(102);
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
    setState(104);
    match(sclParser::CONTROL_FOR);
    setState(106); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(105);
      match(sclParser::SPACE);
      setState(108); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(110);
    variable();
    setState(112); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(111);
      match(sclParser::SPACE);
      setState(114); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(116);
    match(sclParser::CONTROL_IN);
    setState(118); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(117);
      match(sclParser::SPACE);
      setState(120); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(122);
    expression();
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(123);
      match(sclParser::SPACE);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(sclParser::DELIMITER);
    setState(130);
    scope();
    setState(131);
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
    setState(133);
    match(sclParser::KEYWORD_PRINT);
    setState(135); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(134);
      match(sclParser::SPACE);
      setState(137); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(139);
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
    setState(141);
    dynamic_cast<AssignContext *>(_localctx)->key = variable();
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(142);
      match(sclParser::SPACE);
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    match(sclParser::OPERAND_EQUAL);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(149);
      match(sclParser::SPACE);
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(155);
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
    setState(157);
    dynamic_cast<AssignPropertyContext *>(_localctx)->property = expression();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(158);
      match(sclParser::SPACE);
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(164);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(165);
      match(sclParser::SPACE);
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(171);
    dynamic_cast<AssignPropertyContext *>(_localctx)->key = expression();
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(172);
      match(sclParser::SPACE);
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(178);
    match(sclParser::SQUARED_BRACKET_CLOSE);
    setState(182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(179);
      match(sclParser::SPACE);
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(185);
    match(sclParser::OPERAND_EQUAL);
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(186);
      match(sclParser::SPACE);
      setState(191);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    dynamic_cast<AssignPropertyContext *>(_localctx)->value = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeFileContext ------------------------------------------------------------------

sclParser::IncludeFileContext::IncludeFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sclParser::IncludeFileContext::KEYWORD_INCLUDE() {
  return getToken(sclParser::KEYWORD_INCLUDE, 0);
}

tree::TerminalNode* sclParser::IncludeFileContext::ARGUMENT() {
  return getToken(sclParser::ARGUMENT, 0);
}

std::vector<tree::TerminalNode *> sclParser::IncludeFileContext::SPACE() {
  return getTokens(sclParser::SPACE);
}

tree::TerminalNode* sclParser::IncludeFileContext::SPACE(size_t i) {
  return getToken(sclParser::SPACE, i);
}


size_t sclParser::IncludeFileContext::getRuleIndex() const {
  return sclParser::RuleIncludeFile;
}


antlrcpp::Any sclParser::IncludeFileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sclVisitor*>(visitor))
    return parserVisitor->visitIncludeFile(this);
  else
    return visitor->visitChildren(this);
}

sclParser::IncludeFileContext* sclParser::includeFile() {
  IncludeFileContext *_localctx = _tracker.createInstance<IncludeFileContext>(_ctx, getState());
  enterRule(_localctx, 18, sclParser::RuleIncludeFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(sclParser::KEYWORD_INCLUDE);
    setState(196); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(195);
      match(sclParser::SPACE);
      setState(198); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sclParser::SPACE);
    setState(200);
    dynamic_cast<IncludeFileContext *>(_localctx)->path = match(sclParser::ARGUMENT);
   
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
  enterRule(_localctx, 20, sclParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(202);
      expressionConcated(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(203);
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
  enterRule(_localctx, 22, sclParser::RuleExpressionAccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(206);
      access();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(207);
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
  enterRule(_localctx, 24, sclParser::RuleAccess);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    dynamic_cast<AccessContext *>(_localctx)->property = expressionConcated(0);
    setState(214);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(211);
      match(sclParser::SPACE);
      setState(216);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(217);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(221);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(218);
      match(sclParser::SPACE);
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(224);
    dynamic_cast<AccessContext *>(_localctx)->key = expressionConcated(0);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(225);
      match(sclParser::SPACE);
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
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
  enterRule(_localctx, 26, sclParser::RuleAccessRange);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(233);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(234);
        match(sclParser::SPACE);
        setState(239);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(240);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(244);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(241);
        match(sclParser::SPACE);
        setState(246);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(247);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(251);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(248);
        match(sclParser::SPACE);
        setState(253);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(254);
      match(sclParser::COLON);
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(255);
        match(sclParser::SPACE);
        setState(260);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(261);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(263);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(264);
        match(sclParser::SPACE);
        setState(269);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(270);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(271);
        match(sclParser::SPACE);
        setState(276);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(277);
      match(sclParser::COLON);
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(278);
        match(sclParser::SPACE);
        setState(283);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(284);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(285);
        match(sclParser::SPACE);
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(291);
      match(sclParser::SQUARED_BRACKET_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(293);
      dynamic_cast<AccessRangeContext *>(_localctx)->property = expressionConcated(0);
      setState(297);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(294);
        match(sclParser::SPACE);
        setState(299);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(300);
      match(sclParser::SQUARED_BRACKET_OPEN);
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(301);
        match(sclParser::SPACE);
        setState(306);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(307);
      dynamic_cast<AccessRangeContext *>(_localctx)->start = expressionConcated(0);
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(308);
        match(sclParser::SPACE);
        setState(313);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(314);
      match(sclParser::COLON);
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(315);
        match(sclParser::SPACE);
        setState(320);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(321);
      dynamic_cast<AccessRangeContext *>(_localctx)->end = expressionConcated(0);
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == sclParser::SPACE) {
        setState(322);
        match(sclParser::SPACE);
        setState(327);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(328);
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
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, sclParser::RuleExpressionConcated, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(333);
    expressionGrouped();
    _ctx->stop = _input->LT(-1);
    setState(382);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(380);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(335);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(339);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(336);
            match(sclParser::SPACE);
            setState(341);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(342);
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
          setState(346);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(343);
            match(sclParser::SPACE);
            setState(348);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(349);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(350);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(354);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(351);
            match(sclParser::SPACE);
            setState(356);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(357);
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
          setState(361);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(358);
            match(sclParser::SPACE);
            setState(363);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(364);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionConcatedContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpressionConcated);
          setState(365);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(369);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(366);
            match(sclParser::SPACE);
            setState(371);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(372);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->range = match(sclParser::RANGE);
          setState(376);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == sclParser::SPACE) {
            setState(373);
            match(sclParser::SPACE);
            setState(378);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(379);
          dynamic_cast<ExpressionConcatedContext *>(_localctx)->right = expressionConcated(2);
          break;
        }

        } 
      }
      setState(384);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
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
  enterRule(_localctx, 30, sclParser::RuleExpressionGrouped);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(402);
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
        setState(385);
        expressionConst();
        break;
      }

      case sclParser::ROUND_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(386);
        match(sclParser::ROUND_BRACKET_OPEN);
        setState(390);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(387);
          match(sclParser::SPACE);
          setState(392);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(393);
        expression();
        setState(397);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(394);
          match(sclParser::SPACE);
          setState(399);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(400);
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
  enterRule(_localctx, 32, sclParser::RuleExpressionConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(409);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE:
      case sclParser::INTEGER:
      case sclParser::FLOAT:
      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(404);
        expressionType();
        break;
      }

      case sclParser::OPERAND_MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(405);
        expressionUnary();
        break;
      }

      case sclParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(406);
        variable();
        break;
      }

      case sclParser::SQUARED_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 4);
        setState(407);
        array();
        break;
      }

      case sclParser::CURLY_BRACKET_OPEN: {
        enterOuterAlt(_localctx, 5);
        setState(408);
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
  enterRule(_localctx, 34, sclParser::RuleExpressionUnary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(sclParser::OPERAND_MINUS);
    setState(412);
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
  enterRule(_localctx, 36, sclParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(sclParser::SQUARED_BRACKET_OPEN);
    setState(418);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(415);
        match(sclParser::SPACE); 
      }
      setState(420);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
    setState(437);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(421);
        dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
        dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
        setState(425);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(422);
          match(sclParser::SPACE);
          setState(427);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(428);
        match(sclParser::COMMA);
        setState(432);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(429);
            match(sclParser::SPACE); 
          }
          setState(434);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
        } 
      }
      setState(439);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(450);
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
      setState(440);
      dynamic_cast<ArrayContext *>(_localctx)->expressionContext = expression();
      dynamic_cast<ArrayContext *>(_localctx)->elements.push_back(dynamic_cast<ArrayContext *>(_localctx)->expressionContext);
      setState(444);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(441);
          match(sclParser::SPACE); 
        }
        setState(446);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      }
      setState(448);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(447);
        match(sclParser::COMMA);
      }
    }
    setState(455);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(452);
      match(sclParser::SPACE);
      setState(457);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(458);
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
  enterRule(_localctx, 38, sclParser::RuleDictionary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(sclParser::CURLY_BRACKET_OPEN);
    setState(464);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(461);
        match(sclParser::SPACE); 
      }
      setState(466);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
    setState(483);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(467);
        dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
        dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
        setState(471);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sclParser::SPACE) {
          setState(468);
          match(sclParser::SPACE);
          setState(473);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(474);
        match(sclParser::COMMA);
        setState(478);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(475);
            match(sclParser::SPACE); 
          }
          setState(480);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
        } 
      }
      setState(485);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
    setState(496);
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
      setState(486);
      dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext = dictionaryElements();
      dynamic_cast<DictionaryContext *>(_localctx)->elements.push_back(dynamic_cast<DictionaryContext *>(_localctx)->dictionaryElementsContext);
      setState(490);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(487);
          match(sclParser::SPACE); 
        }
        setState(492);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
      }
      setState(494);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sclParser::COMMA) {
        setState(493);
        match(sclParser::COMMA);
      }
    }
    setState(501);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(498);
      match(sclParser::SPACE);
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(504);
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
  enterRule(_localctx, 40, sclParser::RuleDictionaryElements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    dynamic_cast<DictionaryElementsContext *>(_localctx)->key = expression();
    setState(510);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(507);
      match(sclParser::SPACE);
      setState(512);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(513);
    match(sclParser::COLON);
    setState(517);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sclParser::SPACE) {
      setState(514);
      match(sclParser::SPACE);
      setState(519);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(520);
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
  enterRule(_localctx, 42, sclParser::RuleExpressionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
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
  enterRule(_localctx, 44, sclParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(528);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sclParser::BOOLEAN_TRUE:
      case sclParser::BOOLEAN_FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(524);
        boolean();
        break;
      }

      case sclParser::INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(525);
        numericInt();
        break;
      }

      case sclParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(526);
        numericFloat();
        break;
      }

      case sclParser::STRING_DOUBLE_QUOTE:
      case sclParser::STRING_SINGLE_QUOTE: {
        enterOuterAlt(_localctx, 4);
        setState(527);
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
  enterRule(_localctx, 46, sclParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
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
  enterRule(_localctx, 48, sclParser::RuleNumericInt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(532);
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
  enterRule(_localctx, 50, sclParser::RuleNumericFloat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
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
  enterRule(_localctx, 52, sclParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
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
    case 14: return expressionConcatedSempred(dynamic_cast<ExpressionConcatedContext *>(context), predicateIndex);

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
  "print", "assign", "assignProperty", "includeFile", "expression", "expressionAccess", 
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
  "IDENTIFIER", "COMMENT", "ARGUMENT"
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
    0x3, 0x31, 0x21d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x40, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x43, 
    0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x47, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x4a, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4d, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x58, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x5c, 0xa, 
    0x6, 0xd, 0x6, 0xe, 0x6, 0x5d, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x62, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0x65, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x6d, 0xa, 0x7, 0xd, 0x7, 0xe, 
    0x7, 0x6e, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x73, 0xa, 0x7, 0xd, 0x7, 0xe, 
    0x7, 0x74, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x79, 0xa, 0x7, 0xd, 0x7, 0xe, 
    0x7, 0x7a, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x7f, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0x82, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x6, 0x8, 0x8a, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x8b, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x92, 0xa, 0x9, 0xc, 0x9, 0xe, 
    0x9, 0x95, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x99, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x9c, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x7, 0xa, 0xa2, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xa5, 0xb, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0xa9, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xac, 0xb, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xb0, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xb3, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xb7, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0xba, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xbe, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0xc1, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x6, 0xb, 0xc7, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xc8, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xcf, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0xd3, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xd7, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0xda, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xde, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0xe1, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
    0xe5, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xe8, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xee, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xf1, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xf5, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xf8, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xfc, 0xa, 0xf, 0xc, 
    0xf, 0xe, 0xf, 0xff, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x103, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x106, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x10c, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x10f, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x113, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x116, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x11a, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0x11d, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x121, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x124, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x12a, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x12d, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x131, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x134, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x138, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0x13b, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x13f, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x142, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x146, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x149, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x14d, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x154, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x157, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x15b, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0x15e, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0x163, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x166, 0xb, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x16a, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x16d, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x172, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x175, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0x179, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x17c, 0xb, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x17f, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x182, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x187, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x18a, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0x18e, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x191, 0xb, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x195, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x19c, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1a3, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x1a6, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1aa, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1ad, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x7, 0x14, 0x1b1, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1b4, 0xb, 0x14, 
    0x7, 0x14, 0x1b6, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x1b9, 0xb, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1bd, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x1c0, 0xb, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1c3, 0xa, 0x14, 0x5, 0x14, 
    0x1c5, 0xa, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1c8, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x1cb, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0x1d1, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1d4, 0xb, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x1d8, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x1db, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x1df, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x1e2, 0xb, 0x15, 0x7, 0x15, 0x1e4, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x1e7, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 
    0x1eb, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1ee, 0xb, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x1f1, 0xa, 0x15, 0x5, 0x15, 0x1f3, 0xa, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0x1f6, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1f9, 0xb, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x1ff, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0x202, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x206, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x209, 0xb, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x5, 0x18, 0x213, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x2, 
    0x3, 0x1e, 0x1d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x2, 0x6, 0x3, 0x2, 0xf, 0x15, 0x3, 0x2, 
    0x22, 0x27, 0x3, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2c, 0x2d, 0x2, 0x253, 
    0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4, 0x48, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x57, 0x3, 0x2, 0x2, 0x2, 0xa, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xce, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x24, 0x19d, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x30, 0x214, 0x3, 0x2, 0x2, 0x2, 0x32, 0x216, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x218, 0x3, 0x2, 0x2, 0x2, 0x36, 0x21a, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x4, 0x3, 0x2, 0x39, 0x3a, 0x7, 0x2, 
    0x2, 0x3, 0x3a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x47, 0x7, 0x4, 0x2, 
    0x2, 0x3c, 0x47, 0x7, 0x6, 0x2, 0x2, 0x3d, 0x41, 0x5, 0x8, 0x5, 0x2, 
    0x3e, 0x40, 0x7, 0x6, 0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x46, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4d, 
    0x5, 0x8, 0x5, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x3, 
    0x2, 0x2, 0x4f, 0x50, 0x7, 0x2f, 0x2, 0x2, 0x50, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x58, 0x5, 0xe, 0x8, 0x2, 0x52, 0x58, 0x5, 0x14, 0xb, 0x2, 
    0x53, 0x58, 0x5, 0x10, 0x9, 0x2, 0x54, 0x58, 0x5, 0x12, 0xa, 0x2, 0x55, 
    0x58, 0x5, 0xa, 0x6, 0x2, 0x56, 0x58, 0x5, 0xc, 0x7, 0x2, 0x57, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x52, 0x3, 0x2, 0x2, 0x2, 0x57, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5b, 0x7, 0xa, 0x2, 0x2, 0x5a, 0x5c, 0x7, 0x6, 0x2, 0x2, 
    0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x63, 0x5, 0x16, 0xc, 0x2, 0x60, 0x62, 0x7, 
    0x6, 0x2, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x7, 0x4, 0x2, 0x2, 0x67, 0x68, 0x5, 0x4, 0x3, 0x2, 0x68, 
    0x69, 0x7, 0xd, 0x2, 0x2, 0x69, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 
    0x7, 0xb, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x6, 0x2, 0x2, 0x6c, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x72, 0x5, 0x6, 0x4, 0x2, 0x71, 0x73, 0x7, 0x6, 0x2, 0x2, 
    0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x7, 0xc, 0x2, 0x2, 0x77, 0x79, 0x7, 
    0x6, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x80, 0x5, 0x16, 0xc, 0x2, 
    0x7d, 0x7f, 0x7, 0x6, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x4, 0x2, 0x2, 0x84, 0x85, 0x5, 0x4, 
    0x3, 0x2, 0x85, 0x86, 0x7, 0xd, 0x2, 0x2, 0x86, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x89, 0x7, 0x7, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x6, 0x2, 0x2, 
    0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x16, 0xc, 0x2, 0x8e, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x93, 0x5, 0x6, 0x4, 0x2, 0x90, 0x92, 0x7, 0x6, 
    0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x9a, 0x7, 0xe, 0x2, 0x2, 0x97, 0x99, 0x7, 0x6, 0x2, 0x2, 0x98, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x16, 0xc, 
    0x2, 0x9e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa3, 0x5, 0x16, 0xc, 0x2, 
    0xa0, 0xa2, 0x7, 0x6, 0x2, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xaa, 0x7, 0x17, 0x2, 0x2, 0xa7, 0xa9, 0x7, 0x6, 
    0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xad, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xb1, 0x5, 0x16, 0xc, 0x2, 0xae, 0xb0, 0x7, 0x6, 0x2, 0x2, 0xaf, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb8, 0x7, 0x18, 0x2, 
    0x2, 0xb5, 0xb7, 0x7, 0x6, 0x2, 0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbf, 0x7, 0xe, 0x2, 0x2, 0xbc, 0xbe, 0x7, 
    0x6, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc3, 0x5, 0x16, 0xc, 0x2, 0xc3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc6, 0x7, 0x8, 0x2, 0x2, 0xc5, 0xc7, 0x7, 0x6, 0x2, 0x2, 0xc6, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcb, 0x7, 0x31, 0x2, 0x2, 0xcb, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xcf, 0x5, 0x1e, 0x10, 0x2, 0xcd, 0xcf, 0x5, 0x18, 0xd, 0x2, 
    0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x5, 0x1a, 0xe, 0x2, 0xd1, 0xd3, 
    0x5, 0x1c, 0xf, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd8, 0x5, 0x1e, 
    0x10, 0x2, 0xd5, 0xd7, 0x7, 0x6, 0x2, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdf, 0x7, 0x17, 0x2, 0x2, 0xdc, 0xde, 
    0x7, 0x6, 0x2, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe6, 0x5, 0x1e, 0x10, 0x2, 0xe3, 0xe5, 0x7, 0x6, 0x2, 0x2, 
    0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 
    0x18, 0x2, 0x2, 0xea, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xef, 0x5, 0x1e, 
    0x10, 0x2, 0xec, 0xee, 0x7, 0x6, 0x2, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf6, 0x7, 0x17, 0x2, 0x2, 0xf3, 0xf5, 
    0x7, 0x6, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfd, 0x5, 0x1e, 0x10, 0x2, 0xfa, 0xfc, 0x7, 0x6, 0x2, 0x2, 
    0xfb, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x104, 0x7, 
    0x1e, 0x2, 0x2, 0x101, 0x103, 0x7, 0x6, 0x2, 0x2, 0x102, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 
    0x18, 0x2, 0x2, 0x108, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10d, 0x5, 
    0x1e, 0x10, 0x2, 0x10a, 0x10c, 0x7, 0x6, 0x2, 0x2, 0x10b, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x114, 0x7, 
    0x17, 0x2, 0x2, 0x111, 0x113, 0x7, 0x6, 0x2, 0x2, 0x112, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x116, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11b, 0x7, 
    0x1e, 0x2, 0x2, 0x118, 0x11a, 0x7, 0x6, 0x2, 0x2, 0x119, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x122, 0x5, 
    0x1e, 0x10, 0x2, 0x11f, 0x121, 0x7, 0x6, 0x2, 0x2, 0x120, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x124, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 
    0x18, 0x2, 0x2, 0x126, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12b, 0x5, 
    0x1e, 0x10, 0x2, 0x128, 0x12a, 0x7, 0x6, 0x2, 0x2, 0x129, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x132, 0x7, 
    0x17, 0x2, 0x2, 0x12f, 0x131, 0x7, 0x6, 0x2, 0x2, 0x130, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x139, 0x5, 
    0x1e, 0x10, 0x2, 0x136, 0x138, 0x7, 0x6, 0x2, 0x2, 0x137, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x140, 0x7, 
    0x1e, 0x2, 0x2, 0x13d, 0x13f, 0x7, 0x6, 0x2, 0x2, 0x13e, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x143, 0x147, 0x5, 
    0x1e, 0x10, 0x2, 0x144, 0x146, 0x7, 0x6, 0x2, 0x2, 0x145, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 
    0x18, 0x2, 0x2, 0x14b, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14c, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0x14c, 0x109, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x14d, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x8, 0x10, 
    0x1, 0x2, 0x14f, 0x150, 0x5, 0x20, 0x11, 0x2, 0x150, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x151, 0x155, 0xc, 0x5, 0x2, 0x2, 0x152, 0x154, 0x7, 0x6, 
    0x2, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x158, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x15c, 0x9, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x7, 0x6, 
    0x2, 0x2, 0x15a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x17f, 0x5, 0x1e, 0x10, 0x6, 0x160, 0x164, 0xc, 0x4, 
    0x2, 0x2, 0x161, 0x163, 0x7, 0x6, 0x2, 0x2, 0x162, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x166, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16b, 0x9, 0x3, 
    0x2, 0x2, 0x168, 0x16a, 0x7, 0x6, 0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x17f, 0x5, 0x1e, 
    0x10, 0x5, 0x16f, 0x173, 0xc, 0x3, 0x2, 0x2, 0x170, 0x172, 0x7, 0x6, 
    0x2, 0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x174, 0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x17a, 0x7, 0x16, 0x2, 0x2, 0x177, 0x179, 0x7, 0x6, 
    0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17f, 0x5, 0x1e, 0x10, 0x4, 0x17e, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x160, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x182, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x183, 0x195, 0x5, 0x22, 0x12, 
    0x2, 0x184, 0x188, 0x7, 0x1b, 0x2, 0x2, 0x185, 0x187, 0x7, 0x6, 0x2, 
    0x2, 0x186, 0x185, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18f, 0x5, 0x16, 0xc, 0x2, 0x18c, 0x18e, 0x7, 0x6, 0x2, 
    0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x192, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x193, 0x7, 0x1c, 0x2, 0x2, 0x193, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x194, 0x183, 0x3, 0x2, 0x2, 0x2, 0x194, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x21, 0x3, 0x2, 0x2, 0x2, 0x196, 0x19c, 0x5, 0x2c, 0x17, 
    0x2, 0x197, 0x19c, 0x5, 0x24, 0x13, 0x2, 0x198, 0x19c, 0x5, 0x6, 0x4, 
    0x2, 0x199, 0x19c, 0x5, 0x26, 0x14, 0x2, 0x19a, 0x19c, 0x5, 0x28, 0x15, 
    0x2, 0x19b, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x19b, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x19b, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x19d, 0x19e, 0x7, 0x10, 0x2, 0x2, 0x19e, 0x19f, 0x5, 0x16, 0xc, 0x2, 
    0x19f, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a4, 0x7, 0x17, 0x2, 0x2, 
    0x1a1, 0x1a3, 0x7, 0x6, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1ab, 0x5, 0x16, 0xc, 0x2, 
    0x1a8, 0x1aa, 0x7, 0x6, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b2, 0x7, 0x1f, 0x2, 0x2, 
    0x1af, 0x1b1, 0x7, 0x6, 0x2, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1c4, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1be, 0x5, 0x16, 0xc, 0x2, 
    0x1bb, 0x1bd, 0x7, 0x6, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 
    0x1bd, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c3, 0x7, 0x1f, 0x2, 0x2, 
    0x1c2, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x1c6, 0x1c8, 0x7, 0x6, 0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c8, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x18, 0x2, 0x2, 
    0x1cd, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d2, 0x7, 0x19, 0x2, 0x2, 
    0x1cf, 0x1d1, 0x7, 0x6, 0x2, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d9, 0x5, 0x2a, 0x16, 0x2, 
    0x1d6, 0x1d8, 0x7, 0x6, 0x2, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1e0, 0x7, 0x1f, 0x2, 0x2, 
    0x1dd, 0x1df, 0x7, 0x6, 0x2, 0x2, 0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1f2, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ec, 0x5, 0x2a, 0x16, 0x2, 
    0x1e9, 0x1eb, 0x7, 0x6, 0x2, 0x2, 0x1ea, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 
    0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f1, 0x7, 0x1f, 0x2, 0x2, 
    0x1f0, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 
    0x1f1, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f7, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f6, 0x7, 0x6, 0x2, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 
    0x1f6, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1f9, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x1a, 0x2, 0x2, 
    0x1fb, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x200, 0x5, 0x16, 0xc, 0x2, 
    0x1fd, 0x1ff, 0x7, 0x6, 0x2, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 
    0x1ff, 0x202, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 0x203, 0x207, 0x7, 0x1e, 0x2, 0x2, 
    0x204, 0x206, 0x7, 0x6, 0x2, 0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x209, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x5, 0x16, 0xc, 0x2, 
    0x20b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x5, 0x2e, 0x18, 0x2, 
    0x20d, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x213, 0x5, 0x30, 0x19, 0x2, 
    0x20f, 0x213, 0x5, 0x32, 0x1a, 0x2, 0x210, 0x213, 0x5, 0x34, 0x1b, 0x2, 
    0x211, 0x213, 0x5, 0x36, 0x1c, 0x2, 0x212, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x214, 
    0x215, 0x9, 0x4, 0x2, 0x2, 0x215, 0x31, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 
    0x7, 0x2a, 0x2, 0x2, 0x217, 0x33, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 
    0x7, 0x2b, 0x2, 0x2, 0x219, 0x35, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 
    0x9, 0x5, 0x2, 0x2, 0x21b, 0x37, 0x3, 0x2, 0x2, 0x2, 0x48, 0x41, 0x46, 
    0x48, 0x4c, 0x57, 0x5d, 0x63, 0x6e, 0x74, 0x7a, 0x80, 0x8b, 0x93, 0x9a, 
    0xa3, 0xaa, 0xb1, 0xb8, 0xbf, 0xc8, 0xce, 0xd2, 0xd8, 0xdf, 0xe6, 0xef, 
    0xf6, 0xfd, 0x104, 0x10d, 0x114, 0x11b, 0x122, 0x12b, 0x132, 0x139, 
    0x140, 0x147, 0x14c, 0x155, 0x15c, 0x164, 0x16b, 0x173, 0x17a, 0x17e, 
    0x180, 0x188, 0x18f, 0x194, 0x19b, 0x1a4, 0x1ab, 0x1b2, 0x1b7, 0x1be, 
    0x1c2, 0x1c4, 0x1c9, 0x1d2, 0x1d9, 0x1e0, 0x1e5, 0x1ec, 0x1f0, 0x1f2, 
    0x1f7, 0x200, 0x207, 0x212, 
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
