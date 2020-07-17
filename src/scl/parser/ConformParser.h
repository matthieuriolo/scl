
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Conform.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  ConformParser : public antlr4::Parser {
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

  enum {
    RuleInstruction = 0, RuleIfControl = 1, RuleForControl = 2, RulePrint = 3, 
    RuleAssign = 4, RuleAssignProperty = 5, RuleExpression = 6, RuleExpressionAccess = 7, 
    RuleAccess = 8, RuleAccessRange = 9, RuleExpressionConcated = 10, RuleExpressionGrouped = 11, 
    RuleExpressionConst = 12, RuleExpressionUnary = 13, RuleArray = 14, 
    RuleDictionary = 15, RuleDictionaryElements = 16, RuleExpressionType = 17, 
    RuleType = 18, RuleBoolean = 19, RuleNumericInt = 20, RuleNumericFloat = 21, 
    RuleString = 22, RuleVariable = 23
  };

  ConformParser(antlr4::TokenStream *input);
  ~ConformParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InstructionContext;
  class IfControlContext;
  class ForControlContext;
  class PrintContext;
  class AssignContext;
  class AssignPropertyContext;
  class ExpressionContext;
  class ExpressionAccessContext;
  class AccessContext;
  class AccessRangeContext;
  class ExpressionConcatedContext;
  class ExpressionGroupedContext;
  class ExpressionConstContext;
  class ExpressionUnaryContext;
  class ArrayContext;
  class DictionaryContext;
  class DictionaryElementsContext;
  class ExpressionTypeContext;
  class TypeContext;
  class BooleanContext;
  class NumericIntContext;
  class NumericFloatContext;
  class StringContext;
  class VariableContext; 

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    PrintContext *print();
    AssignContext *assign();
    AssignPropertyContext *assignProperty();
    IfControlContext *ifControl();
    ForControlContext *forControl();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  IfControlContext : public antlr4::ParserRuleContext {
  public:
    IfControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTROL_IF();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfControlContext* ifControl();

  class  ForControlContext : public antlr4::ParserRuleContext {
  public:
    ForControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTROL_FOR();
    VariableContext *variable();
    antlr4::tree::TerminalNode *CONTROL_IN();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForControlContext* forControl();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PRINT();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::VariableContext *key = nullptr;;
    ConformParser::ExpressionContext *value = nullptr;;
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERAND_EQUAL();
    VariableContext *variable();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  AssignPropertyContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::ExpressionContext *property = nullptr;;
    ConformParser::ExpressionContext *key = nullptr;;
    ConformParser::ExpressionContext *value = nullptr;;
    AssignPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUARED_BRACKET_OPEN();
    antlr4::tree::TerminalNode *SQUARED_BRACKET_CLOSE();
    antlr4::tree::TerminalNode *OPERAND_EQUAL();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignPropertyContext* assignProperty();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionConcatedContext *expressionConcated();
    ExpressionAccessContext *expressionAccess();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ExpressionAccessContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessContext *access();
    AccessRangeContext *accessRange();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionAccessContext* expressionAccess();

  class  AccessContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::ExpressionConcatedContext *property = nullptr;;
    ConformParser::ExpressionConcatedContext *key = nullptr;;
    AccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUARED_BRACKET_OPEN();
    antlr4::tree::TerminalNode *SQUARED_BRACKET_CLOSE();
    std::vector<ExpressionConcatedContext *> expressionConcated();
    ExpressionConcatedContext* expressionConcated(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessContext* access();

  class  AccessRangeContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::ExpressionConcatedContext *property = nullptr;;
    ConformParser::ExpressionConcatedContext *start = nullptr;;
    ConformParser::ExpressionConcatedContext *end = nullptr;;
    AccessRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUARED_BRACKET_OPEN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SQUARED_BRACKET_CLOSE();
    std::vector<ExpressionConcatedContext *> expressionConcated();
    ExpressionConcatedContext* expressionConcated(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessRangeContext* accessRange();

  class  ExpressionConcatedContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::ExpressionConcatedContext *left = nullptr;;
    antlr4::Token *operand = nullptr;;
    ConformParser::ExpressionConcatedContext *right = nullptr;;
    antlr4::Token *comparator = nullptr;;
    antlr4::Token *range = nullptr;;
    ExpressionConcatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionGroupedContext *expressionGrouped();
    std::vector<ExpressionConcatedContext *> expressionConcated();
    ExpressionConcatedContext* expressionConcated(size_t i);
    antlr4::tree::TerminalNode *OPERAND_PLUS();
    antlr4::tree::TerminalNode *OPERAND_MINUS();
    antlr4::tree::TerminalNode *OPERAND_ASTERISK();
    antlr4::tree::TerminalNode *OPERAND_SLASH();
    antlr4::tree::TerminalNode *OPERAND_CARET();
    antlr4::tree::TerminalNode *OPERAND_AND();
    antlr4::tree::TerminalNode *OPERAND_OR();
    antlr4::tree::TerminalNode *COMPARATOR_EQUAL();
    antlr4::tree::TerminalNode *COMPARATOR_NOT_EQUAL();
    antlr4::tree::TerminalNode *COMPARATOR_LESS();
    antlr4::tree::TerminalNode *COMPARATOR_GREATER();
    antlr4::tree::TerminalNode *COMPARATOR_LESS_EQUAL();
    antlr4::tree::TerminalNode *COMPARATOR_GREATER_EQUAL();
    antlr4::tree::TerminalNode *RANGE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionConcatedContext* expressionConcated();
  ExpressionConcatedContext* expressionConcated(int precedence);
  class  ExpressionGroupedContext : public antlr4::ParserRuleContext {
  public:
    ExpressionGroupedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionConstContext *expressionConst();
    antlr4::tree::TerminalNode *ROUND_BRACKET_OPEN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ROUND_BRACKET_CLOSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionGroupedContext* expressionGrouped();

  class  ExpressionConstContext : public antlr4::ParserRuleContext {
  public:
    ExpressionConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionTypeContext *expressionType();
    ExpressionUnaryContext *expressionUnary();
    VariableContext *variable();
    ArrayContext *array();
    DictionaryContext *dictionary();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionConstContext* expressionConst();

  class  ExpressionUnaryContext : public antlr4::ParserRuleContext {
  public:
    ExpressionUnaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERAND_MINUS();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionUnaryContext* expressionUnary();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::ExpressionContext *expressionContext = nullptr;;
    std::vector<ExpressionContext *> elements;;
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQUARED_BRACKET_OPEN();
    antlr4::tree::TerminalNode *SQUARED_BRACKET_CLOSE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayContext* array();

  class  DictionaryContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::DictionaryElementsContext *dictionaryElementsContext = nullptr;;
    std::vector<DictionaryElementsContext *> elements;;
    DictionaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURLY_BRACKET_OPEN();
    antlr4::tree::TerminalNode *CURLY_BRACKET_CLOSE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<DictionaryElementsContext *> dictionaryElements();
    DictionaryElementsContext* dictionaryElements(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DictionaryContext* dictionary();

  class  DictionaryElementsContext : public antlr4::ParserRuleContext {
  public:
    ConformParser::ExpressionContext *key = nullptr;;
    ConformParser::ExpressionContext *value = nullptr;;
    DictionaryElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DictionaryElementsContext* dictionaryElements();

  class  ExpressionTypeContext : public antlr4::ParserRuleContext {
  public:
    ExpressionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionTypeContext* expressionType();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanContext *boolean();
    NumericIntContext *numericInt();
    NumericFloatContext *numericFloat();
    StringContext *string();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  BooleanContext : public antlr4::ParserRuleContext {
  public:
    BooleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN_TRUE();
    antlr4::tree::TerminalNode *BOOLEAN_FALSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanContext* boolean();

  class  NumericIntContext : public antlr4::ParserRuleContext {
  public:
    NumericIntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericIntContext* numericInt();

  class  NumericFloatContext : public antlr4::ParserRuleContext {
  public:
    NumericFloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericFloatContext* numericFloat();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_SINGLE_QUOTE();
    antlr4::tree::TerminalNode *STRING_DOUBLE_QUOTE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionConcatedSempred(ExpressionConcatedContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

