
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Conform.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  ConformLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, WHITESPACE = 2, KEYWORD_PRINT = 3, KEYWORD_INCLUDE = 4, KEYWORD_IMPORT = 5, 
    CONTROL_IF = 6, CONTROL_FOR = 7, CONTROL_IN = 8, OPERAND_EQUAL = 9, 
    OPERAND_PLUS = 10, OPERAND_MINUS = 11, OPERAND_ASTERISK = 12, OPERAND_SLASH = 13, 
    OPERAND_CARET = 14, OPERAND_AND = 15, OPERAND_OR = 16, RANGE = 17, SQUARED_BRACKET_OPEN = 18, 
    SQUARED_BRACKET_CLOSE = 19, CURLY_BRACKET_OPEN = 20, CURLY_BRACKET_CLOSE = 21, 
    ROUND_BRACKET_OPEN = 22, ROUND_BRACKET_CLOSE = 23, SEMICOLON = 24, COLON = 25, 
    COMMA = 26, QUESTION_MARK = 27, EXCLAMATION_MARK = 28, COMPARATOR_EQUAL = 29, 
    COMPARATOR_NOT_EQUAL = 30, COMPARATOR_GREATER = 31, COMPARATOR_GREATER_EQUAL = 32, 
    COMPARATOR_LESS = 33, COMPARATOR_LESS_EQUAL = 34, BOOLEAN_TRUE = 35, 
    BOOLEAN_FALSE = 36, INTEGER = 37, FLOAT = 38, STRING_DOUBLE_QUOTE = 39, 
    STRING_SINGLE_QUOTE = 40, IDENTIFIER = 41, COMMENT = 42
  };

  ConformLexer(antlr4::CharStream *input);
  ~ConformLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

