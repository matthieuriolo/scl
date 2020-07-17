
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Conform.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  ConformLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, DELIMITER = 2, NEWLINE = 3, WHITESPACE = 4, KEYWORD_PRINT = 5, 
    KEYWORD_INCLUDE = 6, KEYWORD_IMPORT = 7, CONTROL_IF = 8, CONTROL_FOR = 9, 
    CONTROL_IN = 10, CONTROL_END = 11, OPERAND_EQUAL = 12, OPERAND_PLUS = 13, 
    OPERAND_MINUS = 14, OPERAND_ASTERISK = 15, OPERAND_SLASH = 16, OPERAND_CARET = 17, 
    OPERAND_AND = 18, OPERAND_OR = 19, RANGE = 20, SQUARED_BRACKET_OPEN = 21, 
    SQUARED_BRACKET_CLOSE = 22, CURLY_BRACKET_OPEN = 23, CURLY_BRACKET_CLOSE = 24, 
    ROUND_BRACKET_OPEN = 25, ROUND_BRACKET_CLOSE = 26, SEMICOLON = 27, COLON = 28, 
    COMMA = 29, QUESTION_MARK = 30, EXCLAMATION_MARK = 31, COMPARATOR_EQUAL = 32, 
    COMPARATOR_NOT_EQUAL = 33, COMPARATOR_GREATER = 34, COMPARATOR_GREATER_EQUAL = 35, 
    COMPARATOR_LESS = 36, COMPARATOR_LESS_EQUAL = 37, BOOLEAN_TRUE = 38, 
    BOOLEAN_FALSE = 39, INTEGER = 40, FLOAT = 41, STRING_DOUBLE_QUOTE = 42, 
    STRING_SINGLE_QUOTE = 43, IDENTIFIER = 44, COMMENT = 45
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

