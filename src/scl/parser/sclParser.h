
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  sclParser : public antlr4::Parser {
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

  enum {
    RuleModule = 0, RuleScope = 1, RuleVariable = 2, RuleInstruction = 3, 
    RulePrint = 4, RuleAssign = 5, RuleExpression = 6, RuleExpressionoperand = 7, 
    RuleExpressionconst = 8, RuleComparator = 9, RuleExpressiontype = 10, 
    RuleType = 11, RuleBoolean = 12, RuleString = 13, RuleArray = 14
  };

  sclParser(antlr4::TokenStream *input);
  ~sclParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ModuleContext;
  class ScopeContext;
  class VariableContext;
  class InstructionContext;
  class PrintContext;
  class AssignContext;
  class ExpressionContext;
  class ExpressionoperandContext;
  class ExpressionconstContext;
  class ComparatorContext;
  class ExpressiontypeContext;
  class TypeContext;
  class BooleanContext;
  class StringContext;
  class ArrayContext; 

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    sclParser::ScopeContext *content = nullptr;;
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeContext *scope();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    sclParser::InstructionContext *instructionContext = nullptr;;
    std::vector<InstructionContext *> instructions;;
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
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
    AssignContext *assign();
    PrintContext *print();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

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
    sclParser::VariableContext *key = nullptr;;
    sclParser::ExpressionContext *value = nullptr;;
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERAND_EQUAL();
    VariableContext *variable();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionoperandContext *expressionoperand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ExpressionoperandContext : public antlr4::ParserRuleContext {
  public:
    sclParser::ExpressionoperandContext *left = nullptr;;
    antlr4::Token *operand = nullptr;;
    sclParser::ExpressionoperandContext *right = nullptr;;
    ExpressionoperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionconstContext *expressionconst();
    std::vector<ExpressionoperandContext *> expressionoperand();
    ExpressionoperandContext* expressionoperand(size_t i);
    antlr4::tree::TerminalNode *OPERAND_PLUS();
    antlr4::tree::TerminalNode *OPERAND_MINUS();
    antlr4::tree::TerminalNode *OPERAND_ASTERISK();
    antlr4::tree::TerminalNode *OPERAND_SLASH();
    antlr4::tree::TerminalNode *OPERAND_CARET();
    antlr4::tree::TerminalNode *OPERAND_AND();
    antlr4::tree::TerminalNode *OPERAND_OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionoperandContext* expressionoperand();
  ExpressionoperandContext* expressionoperand(int precedence);
  class  ExpressionconstContext : public antlr4::ParserRuleContext {
  public:
    ExpressionconstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressiontypeContext *expressiontype();
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionconstContext* expressionconst();

  class  ComparatorContext : public antlr4::ParserRuleContext {
  public:
    ComparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPARATOR_EQUAL();
    antlr4::tree::TerminalNode *COMPARATOR_NOT_EQUAL();
    antlr4::tree::TerminalNode *COMPARATOR_LESS();
    antlr4::tree::TerminalNode *COMPARATOR_GREATER();
    antlr4::tree::TerminalNode *COMPARATOR_LESS_EQUAL();
    antlr4::tree::TerminalNode *COMPARATOR_GREATER_EQUAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparatorContext* comparator();

  class  ExpressiontypeContext : public antlr4::ParserRuleContext {
  public:
    ExpressiontypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressiontypeContext* expressiontype();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanContext *boolean();


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

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_SINGLE_QUOTE();
    antlr4::tree::TerminalNode *STRING_DOUBLE_QUOTE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    sclParser::ExpressionContext *expressionContext = nullptr;;
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


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionoperandSempred(ExpressionoperandContext *_localctx, size_t predicateIndex);

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

