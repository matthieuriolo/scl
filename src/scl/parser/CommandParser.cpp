
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


//----------------- SeparatorContext ------------------------------------------------------------------

CommandParser::SeparatorContext::SeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CommandParser::SeparatorContext::DELIMITER() {
  return getToken(CommandParser::DELIMITER, 0);
}


size_t CommandParser::SeparatorContext::getRuleIndex() const {
  return CommandParser::RuleSeparator;
}


antlrcpp::Any CommandParser::SeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandVisitor*>(visitor))
    return parserVisitor->visitSeparator(this);
  else
    return visitor->visitChildren(this);
}

CommandParser::SeparatorContext* CommandParser::separator() {
  SeparatorContext *_localctx = _tracker.createInstance<SeparatorContext>(_ctx, getState());
  enterRule(_localctx, 0, CommandParser::RuleSeparator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(CommandParser::DELIMITER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> CommandParser::_decisionToDFA;
atn::PredictionContextCache CommandParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CommandParser::_atn;
std::vector<uint16_t> CommandParser::_serializedATN;

std::vector<std::string> CommandParser::_ruleNames = {
  "separator"
};

std::vector<std::string> CommandParser::_literalNames = {
  "", "' '"
};

std::vector<std::string> CommandParser::_symbolicNames = {
  "", "DELIMITER"
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
    0x3, 0x3, 0x7, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x2, 0x4, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x5, 0x7, 0x3, 0x2, 0x2, 0x5, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 
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
