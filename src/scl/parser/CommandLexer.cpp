
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Command.g4 by ANTLR 4.8


#include "CommandLexer.h"


using namespace antlr4;


CommandLexer::CommandLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CommandLexer::~CommandLexer() {
  delete _interpreter;
}

std::string CommandLexer::getGrammarFileName() const {
  return "Command.g4";
}

const std::vector<std::string>& CommandLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& CommandLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& CommandLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& CommandLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& CommandLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> CommandLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& CommandLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> CommandLexer::_decisionToDFA;
atn::PredictionContextCache CommandLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CommandLexer::_atn;
std::vector<uint16_t> CommandLexer::_serializedATN;

std::vector<std::string> CommandLexer::_ruleNames = {
  u8"DELIMITER"
};

std::vector<std::string> CommandLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> CommandLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> CommandLexer::_literalNames = {
  "", u8"' '"
};

std::vector<std::string> CommandLexer::_symbolicNames = {
  "", u8"DELIMITER"
};

dfa::Vocabulary CommandLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CommandLexer::_tokenNames;

CommandLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x3, 0x7, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 0x6, 0x7, 0x22, 0x2, 0x2, 0x6, 
    0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CommandLexer::Initializer CommandLexer::_init;
