
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/parser/scl.g4 by ANTLR 4.8


#include "sclLexer.h"


using namespace antlr4;


sclLexer::sclLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

sclLexer::~sclLexer() {
  delete _interpreter;
}

std::string sclLexer::getGrammarFileName() const {
  return "scl.g4";
}

const std::vector<std::string>& sclLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& sclLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& sclLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& sclLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& sclLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> sclLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& sclLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> sclLexer::_decisionToDFA;
atn::PredictionContextCache sclLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sclLexer::_atn;
std::vector<uint16_t> sclLexer::_serializedATN;

std::vector<std::string> sclLexer::_ruleNames = {
  u8"T__0"
};

std::vector<std::string> sclLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> sclLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> sclLexer::_literalNames = {
  "", u8"'print test'"
};

std::vector<std::string> sclLexer::_symbolicNames = {
};

dfa::Vocabulary sclLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> sclLexer::_tokenNames;

sclLexer::Initializer::Initializer() {
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
    0x2, 0x3, 0x10, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x2, 0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x2, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 0x6, 0x7, 
    0x72, 0x2, 0x2, 0x6, 0x7, 0x7, 0x74, 0x2, 0x2, 0x7, 0x8, 0x7, 0x6b, 
    0x2, 0x2, 0x8, 0x9, 0x7, 0x70, 0x2, 0x2, 0x9, 0xa, 0x7, 0x76, 0x2, 0x2, 
    0xa, 0xb, 0x7, 0x22, 0x2, 0x2, 0xb, 0xc, 0x7, 0x76, 0x2, 0x2, 0xc, 0xd, 
    0x7, 0x67, 0x2, 0x2, 0xd, 0xe, 0x7, 0x75, 0x2, 0x2, 0xe, 0xf, 0x7, 0x76, 
    0x2, 0x2, 0xf, 0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

sclLexer::Initializer sclLexer::_init;
