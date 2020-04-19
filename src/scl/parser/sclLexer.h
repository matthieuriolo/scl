
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  sclLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, KEYWORD_PRINT = 2, KEYWORD_INCLUDE = 3, KEYWORD_IMPORT = 4, 
    CONTROL_IF = 5, CONTROL_FOR = 6, CONTROL_IN = 7, CONTROL_END = 8, OPERAND_EQUAL = 9, 
    OPERAND_PLUS = 10, OPERAND_MINUS = 11, OPERAND_ASTERISK = 12, OPERAND_SLASH = 13, 
    OPERAND_CARET = 14, OPERAND_AND = 15, OPERAND_OR = 16, RANGE = 17, SQUARED_BRACKET_OPEN = 18, 
    SQUARED_BRACKET_CLOSE = 19, CURLY_BRACKET_OPEN = 20, CURLY_BRACKET_CLOSE = 21, 
    ROUND_BRACKET_OPEN = 22, ROUND_BRACKET_CLOSE = 23, SEMICOLON = 24, COLON = 25, 
    COMMA = 26, QUESTION_MARK = 27, EXCLAMATION_MARK = 28, DELIMITER = 29, 
    NEWLINE = 30, SPACE = 31, TAB = 32, COMPARATOR_EQUAL = 33, COMPARATOR_NOT_EQUAL = 34, 
    COMPARATOR_GREATER = 35, COMPARATOR_GREATER_EQUAL = 36, COMPARATOR_LESS = 37, 
    COMPARATOR_LESS_EQUAL = 38, BOOLEAN_TRUE = 39, BOOLEAN_FALSE = 40, INTEGER = 41, 
    FLOAT = 42, STRING_DOUBLE_QUOTE = 43, STRING_SINGLE_QUOTE = 44, FUNCTION_NAME = 45, 
    IDENTIFIER = 46
  };

  sclLexer(antlr4::CharStream *input);
  ~sclLexer();

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

