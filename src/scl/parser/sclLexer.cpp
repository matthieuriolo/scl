
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8


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
  u8"T__0", u8"DELIMITER", u8"NEWLINE", u8"SPACE", u8"TAB", u8"KEYWORD_PRINT", 
  u8"KEYWORD_INCLUDE", u8"KEYWORD_IMPORT", u8"CONTROL_IF", u8"CONTROL_FOR", 
  u8"CONTROL_IN", u8"CONTROL_END", u8"OPERAND_EQUAL", u8"OPERAND_PLUS", 
  u8"OPERAND_MINUS", u8"OPERAND_ASTERISK", u8"OPERAND_SLASH", u8"OPERAND_CARET", 
  u8"OPERAND_AND", u8"OPERAND_OR", u8"RANGE", u8"SQUARED_BRACKET_OPEN", 
  u8"SQUARED_BRACKET_CLOSE", u8"CURLY_BRACKET_OPEN", u8"CURLY_BRACKET_CLOSE", 
  u8"ROUND_BRACKET_OPEN", u8"ROUND_BRACKET_CLOSE", u8"SEMICOLON", u8"COLON", 
  u8"COMMA", u8"QUESTION_MARK", u8"EXCLAMATION_MARK", u8"COMPARATOR_EQUAL", 
  u8"COMPARATOR_NOT_EQUAL", u8"COMPARATOR_GREATER", u8"COMPARATOR_GREATER_EQUAL", 
  u8"COMPARATOR_LESS", u8"COMPARATOR_LESS_EQUAL", u8"BOOLEAN_TRUE", u8"BOOLEAN_FALSE", 
  u8"INTEGER", u8"FLOAT", u8"STRING_DOUBLE_QUOTE", u8"STRING_SINGLE_QUOTE", 
  u8"FUNCTION_NAME", u8"IDENTIFIER", u8"COMMENT"
};

std::vector<std::string> sclLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> sclLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> sclLexer::_literalNames = {
  "", u8"'$'", "", "", "", "", u8"'print'", u8"'include'", u8"'import'", 
  u8"'if'", u8"'for'", u8"'in'", u8"'end'", u8"'='", u8"'+'", u8"'-'", u8"'*'", 
  u8"'/'", u8"'^'", u8"'&&'", u8"'||'", u8"'..'", u8"'['", u8"']'", u8"'{'", 
  u8"'}'", u8"'('", u8"')'", u8"';'", u8"':'", u8"','", u8"'?'", u8"'!'", 
  u8"'=='", u8"'!='", u8"'>'", u8"'>='", u8"'<'", u8"'<='", u8"'TRUE'", 
  u8"'FALSE'"
};

std::vector<std::string> sclLexer::_symbolicNames = {
  "", "", u8"DELIMITER", u8"NEWLINE", u8"SPACE", u8"TAB", u8"KEYWORD_PRINT", 
  u8"KEYWORD_INCLUDE", u8"KEYWORD_IMPORT", u8"CONTROL_IF", u8"CONTROL_FOR", 
  u8"CONTROL_IN", u8"CONTROL_END", u8"OPERAND_EQUAL", u8"OPERAND_PLUS", 
  u8"OPERAND_MINUS", u8"OPERAND_ASTERISK", u8"OPERAND_SLASH", u8"OPERAND_CARET", 
  u8"OPERAND_AND", u8"OPERAND_OR", u8"RANGE", u8"SQUARED_BRACKET_OPEN", 
  u8"SQUARED_BRACKET_CLOSE", u8"CURLY_BRACKET_OPEN", u8"CURLY_BRACKET_CLOSE", 
  u8"ROUND_BRACKET_OPEN", u8"ROUND_BRACKET_CLOSE", u8"SEMICOLON", u8"COLON", 
  u8"COMMA", u8"QUESTION_MARK", u8"EXCLAMATION_MARK", u8"COMPARATOR_EQUAL", 
  u8"COMPARATOR_NOT_EQUAL", u8"COMPARATOR_GREATER", u8"COMPARATOR_GREATER_EQUAL", 
  u8"COMPARATOR_LESS", u8"COMPARATOR_LESS_EQUAL", u8"BOOLEAN_TRUE", u8"BOOLEAN_FALSE", 
  u8"INTEGER", u8"FLOAT", u8"STRING_DOUBLE_QUOTE", u8"STRING_SINGLE_QUOTE", 
  u8"FUNCTION_NAME", u8"IDENTIFIER", u8"COMMENT"
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
    0x2, 0x31, 0x11e, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
    0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 
    0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
    0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 
    0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 
    0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 
    0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 
    0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 
    0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 
    0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 
    0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 
    0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 
    0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 
    0x2b, 0x4, 0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 
    0x4, 0x2f, 0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x6, 0x3, 0x66, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x67, 0x3, 
    0x4, 0x6, 0x4, 0x6b, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x6c, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x73, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 
    0x74, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0x7a, 0xa, 0x6, 0xd, 0x6, 
    0xe, 0x6, 0x7b, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x2a, 0x6, 0x2a, 0xea, 0xa, 0x2a, 0xd, 0x2a, 0xe, 
    0x2a, 0xeb, 0x3, 0x2b, 0x6, 0x2b, 0xef, 0xa, 0x2b, 0xd, 0x2b, 0xe, 0x2b, 
    0xf0, 0x3, 0x2b, 0x3, 0x2b, 0x6, 0x2b, 0xf5, 0xa, 0x2b, 0xd, 0x2b, 0xe, 
    0x2b, 0xf6, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0xfb, 0xa, 0x2c, 0xc, 0x2c, 
    0xe, 0x2c, 0xfe, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
    0x7, 0x2d, 0x104, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x107, 0xb, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x6, 0x2e, 0x10d, 0xa, 0x2e, 
    0xd, 0x2e, 0xe, 0x2e, 0x10e, 0x3, 0x2f, 0x6, 0x2f, 0x112, 0xa, 0x2f, 
    0xd, 0x2f, 0xe, 0x2f, 0x113, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x118, 
    0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x11b, 0xb, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x5, 0xfc, 0x105, 0x119, 0x2, 0x31, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 
    0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 
    0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 
    0x23, 0x13, 0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 0x18, 
    0x2f, 0x19, 0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 0x37, 0x1d, 0x39, 0x1e, 
    0x3b, 0x1f, 0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 0x43, 0x23, 0x45, 0x24, 
    0x47, 0x25, 0x49, 0x26, 0x4b, 0x27, 0x4d, 0x28, 0x4f, 0x29, 0x51, 0x2a, 
    0x53, 0x2b, 0x55, 0x2c, 0x57, 0x2d, 0x59, 0x2e, 0x5b, 0x2f, 0x5d, 0x30, 
    0x5f, 0x31, 0x3, 0x2, 0x7, 0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0x3, 0x2, 0x32, 
    0x3b, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x5, 0x2, 0x32, 0x3b, 0x43, 
    0x5c, 0x63, 0x7c, 0x3, 0x2, 0xc, 0xc, 0x2, 0x12b, 0x2, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x55, 0x3, 0x2, 0x2, 0x2, 0x2, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x59, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x3, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x65, 0x3, 0x2, 0x2, 0x2, 0x7, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x72, 0x3, 0x2, 0x2, 0x2, 0xb, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x7f, 0x3, 0x2, 0x2, 0x2, 0xf, 0x85, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x13, 0x94, 0x3, 0x2, 0x2, 0x2, 0x15, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x19, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x1d, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x21, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0x23, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x25, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0xae, 0x3, 0x2, 0x2, 0x2, 0x29, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x2f, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x33, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x37, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x3b, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x3f, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x43, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0x47, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x49, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x51, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x55, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x59, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x111, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x26, 0x2, 0x2, 0x62, 0x4, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x5, 0x7, 0x4, 0x2, 0x64, 0x66, 0x5, 
    0x39, 0x1d, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6b, 0x9, 0x2, 0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x8, 
    0x4, 0x2, 0x2, 0x6f, 0x8, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x7, 0x22, 
    0x2, 0x2, 0x71, 0x73, 0x5, 0xb, 0x6, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x8, 0x5, 0x2, 0x2, 0x77, 0xa, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x7, 0xb, 0x2, 0x2, 0x79, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x8, 0x6, 0x2, 0x2, 0x7e, 0xc, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x80, 0x7, 0x72, 0x2, 0x2, 0x80, 0x81, 0x7, 0x74, 0x2, 0x2, 0x81, 
    0x82, 0x7, 0x6b, 0x2, 0x2, 0x82, 0x83, 0x7, 0x70, 0x2, 0x2, 0x83, 0x84, 
    0x7, 0x76, 0x2, 0x2, 0x84, 0xe, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 
    0x6b, 0x2, 0x2, 0x86, 0x87, 0x7, 0x70, 0x2, 0x2, 0x87, 0x88, 0x7, 0x65, 
    0x2, 0x2, 0x88, 0x89, 0x7, 0x6e, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x77, 0x2, 
    0x2, 0x8a, 0x8b, 0x7, 0x66, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x67, 0x2, 0x2, 
    0x8c, 0x10, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x6b, 0x2, 0x2, 0x8e, 
    0x8f, 0x7, 0x6f, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x72, 0x2, 0x2, 0x90, 0x91, 
    0x7, 0x71, 0x2, 0x2, 0x91, 0x92, 0x7, 0x74, 0x2, 0x2, 0x92, 0x93, 0x7, 
    0x76, 0x2, 0x2, 0x93, 0x12, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x6b, 
    0x2, 0x2, 0x95, 0x96, 0x7, 0x68, 0x2, 0x2, 0x96, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0x68, 0x2, 0x2, 0x98, 0x99, 0x7, 0x71, 0x2, 0x2, 
    0x99, 0x9a, 0x7, 0x74, 0x2, 0x2, 0x9a, 0x16, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9c, 0x7, 0x6b, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x70, 0x2, 0x2, 0x9d, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x67, 0x2, 0x2, 0x9f, 0xa0, 0x7, 
    0x70, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x66, 0x2, 0x2, 0xa1, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x7, 0x3f, 0x2, 0x2, 0xa3, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0xa5, 0x7, 0x2d, 0x2, 0x2, 0xa5, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x7, 0x2f, 0x2, 0x2, 0xa7, 0x20, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xa9, 0x7, 0x2c, 0x2, 0x2, 0xa9, 0x22, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 
    0x7, 0x31, 0x2, 0x2, 0xab, 0x24, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 
    0x60, 0x2, 0x2, 0xad, 0x26, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x28, 
    0x2, 0x2, 0xaf, 0xb0, 0x7, 0x28, 0x2, 0x2, 0xb0, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb2, 0x7, 0x7e, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x7e, 0x2, 0x2, 
    0xb3, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x30, 0x2, 0x2, 0xb5, 
    0xb6, 0x7, 0x30, 0x2, 0x2, 0xb6, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
    0x7, 0x5d, 0x2, 0x2, 0xb8, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 
    0x5f, 0x2, 0x2, 0xba, 0x30, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x7d, 
    0x2, 0x2, 0xbc, 0x32, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x7f, 0x2, 
    0x2, 0xbe, 0x34, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x2a, 0x2, 0x2, 
    0xc0, 0x36, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x2b, 0x2, 0x2, 0xc2, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x3d, 0x2, 0x2, 0xc4, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x3c, 0x2, 0x2, 0xc6, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x2e, 0x2, 0x2, 0xc8, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xca, 0x7, 0x41, 0x2, 0x2, 0xca, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xcc, 0x7, 0x23, 0x2, 0x2, 0xcc, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xce, 0x7, 0x3f, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x3f, 0x2, 0x2, 0xcf, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x23, 0x2, 0x2, 0xd1, 0xd2, 
    0x7, 0x3f, 0x2, 0x2, 0xd2, 0x46, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 
    0x40, 0x2, 0x2, 0xd4, 0x48, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x40, 
    0x2, 0x2, 0xd6, 0xd7, 0x7, 0x3f, 0x2, 0x2, 0xd7, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd9, 0x7, 0x3e, 0x2, 0x2, 0xd9, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xdb, 0x7, 0x3e, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x3f, 0x2, 0x2, 0xdc, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x56, 0x2, 0x2, 0xde, 0xdf, 
    0x7, 0x54, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x57, 0x2, 0x2, 0xe0, 0xe1, 0x7, 
    0x47, 0x2, 0x2, 0xe1, 0x50, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x48, 
    0x2, 0x2, 0xe3, 0xe4, 0x7, 0x43, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x4e, 0x2, 
    0x2, 0xe5, 0xe6, 0x7, 0x55, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x47, 0x2, 0x2, 
    0xe7, 0x52, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x9, 0x3, 0x2, 0x2, 0xe9, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xef, 0x9, 0x3, 0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf4, 0x7, 0x30, 0x2, 0x2, 0xf3, 0xf5, 0x9, 0x3, 0x2, 0x2, 0xf4, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xfc, 0x7, 0x24, 0x2, 0x2, 0xf9, 0xfb, 0xb, 0x2, 
    0x2, 0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x100, 0x7, 0x24, 0x2, 0x2, 0x100, 0x58, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x105, 0x7, 0x29, 0x2, 0x2, 0x102, 0x104, 0xb, 0x2, 0x2, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x107, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x109, 0x7, 0x29, 0x2, 0x2, 0x109, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10c, 0x7, 0x3c, 0x2, 0x2, 0x10b, 0x10d, 0x9, 0x4, 0x2, 0x2, 0x10c, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 0x9, 0x5, 0x2, 0x2, 0x111, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x119, 0x7, 0x25, 0x2, 0x2, 0x116, 0x118, 0xa, 
    0x6, 0x2, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11d, 0x8, 0x30, 0x2, 0x2, 0x11d, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x11, 0x2, 0x65, 0x67, 0x6c, 0x72, 0x74, 0x7b, 0xeb, 
    0xf0, 0xf6, 0xfc, 0x105, 0x10e, 0x113, 0x119, 0x3, 0x8, 0x2, 0x2, 
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
