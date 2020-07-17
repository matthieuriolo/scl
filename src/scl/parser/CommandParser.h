
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Command.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  CommandParser : public antlr4::Parser {
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

  enum {
    RuleModule = 0, RuleScope = 1, RuleVariable = 2, RuleInstruction = 3, 
    RuleIfControl = 4, RuleForControl = 5, RulePrint = 6, RuleAssign = 7, 
    RuleAssignProperty = 8, RuleExpression = 9, RuleExpressionAccess = 10, 
    RuleAccess = 11, RuleAccessRange = 12, RuleExpressionConcated = 13, 
    RuleExpressionGrouped = 14, RuleExpressionConst = 15, RuleExpressionUnary = 16, 
    RuleArray = 17, RuleDictionary = 18, RuleDictionaryElements = 19, RuleExpressionType = 20, 
    RuleType = 21, RuleBoolean = 22, RuleNumericInt = 23, RuleNumericFloat = 24, 
    RuleString = 25
  };

  CommandParser(antlr4::TokenStream *input);
  ~CommandParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ModuleContext;
  class ScopeContext;
  class VariableContext;
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

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    CommandParser::ScopeContext *content = nullptr;;
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    ScopeContext *scope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    CommandParser::InstructionContext *instructionContext = nullptr;;
    std::vector<InstructionContext *> instructions;;
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DELIMITER();
    antlr4::tree::TerminalNode* DELIMITER(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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
    antlr4::tree::TerminalNode *DELIMITER();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *CONTROL_END();


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
    antlr4::tree::TerminalNode *DELIMITER();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *CONTROL_END();


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
    CommandParser::VariableContext *key = nullptr;;
    CommandParser::ExpressionContext *value = nullptr;;
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
    CommandParser::ExpressionContext *property = nullptr;;
    CommandParser::ExpressionContext *key = nullptr;;
    CommandParser::ExpressionContext *value = nullptr;;
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
    CommandParser::ExpressionConcatedContext *property = nullptr;;
    CommandParser::ExpressionConcatedContext *key = nullptr;;
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
    CommandParser::ExpressionConcatedContext *property = nullptr;;
    CommandParser::ExpressionConcatedContext *start = nullptr;;
    CommandParser::ExpressionConcatedContext *end = nullptr;;
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
    CommandParser::ExpressionConcatedContext *left = nullptr;;
    antlr4::Token *operand = nullptr;;
    CommandParser::ExpressionConcatedContext *right = nullptr;;
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
    CommandParser::ExpressionContext *expressionContext = nullptr;;
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
    CommandParser::DictionaryElementsContext *dictionaryElementsContext = nullptr;;
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
    CommandParser::ExpressionContext *key = nullptr;;
    CommandParser::ExpressionContext *value = nullptr;;
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

