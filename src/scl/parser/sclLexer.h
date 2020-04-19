
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  sclLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, DELIMITER = 2, NEWLINE = 3, SPACE = 4, TAB = 5, KEYWORD_PRINT = 6, 
    KEYWORD_INCLUDE = 7, KEYWORD_IMPORT = 8, CONTROL_IF = 9, CONTROL_FOR = 10, 
    CONTROL_IN = 11, CONTROL_END = 12, OPERAND_EQUAL = 13, OPERAND_PLUS = 14, 
    OPERAND_MINUS = 15, OPERAND_ASTERISK = 16, OPERAND_SLASH = 17, OPERAND_CARET = 18, 
    OPERAND_AND = 19, OPERAND_OR = 20, RANGE = 21, SQUARED_BRACKET_OPEN = 22, 
    SQUARED_BRACKET_CLOSE = 23, CURLY_BRACKET_OPEN = 24, CURLY_BRACKET_CLOSE = 25, 
    ROUND_BRACKET_OPEN = 26, ROUND_BRACKET_CLOSE = 27, SEMICOLON = 28, COLON = 29, 
    COMMA = 30, QUESTION_MARK = 31, EXCLAMATION_MARK = 32, COMPARATOR_EQUAL = 33, 
    COMPARATOR_NOT_EQUAL = 34, COMPARATOR_GREATER = 35, COMPARATOR_GREATER_EQUAL = 36, 
    COMPARATOR_LESS = 37, COMPARATOR_LESS_EQUAL = 38, BOOLEAN_TRUE = 39, 
    BOOLEAN_FALSE = 40, INTEGER = 41, FLOAT = 42, STRING_DOUBLE_QUOTE = 43, 
    STRING_SINGLE_QUOTE = 44, FUNCTION_NAME = 45, IDENTIFIER = 46, COMMENT = 47
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

