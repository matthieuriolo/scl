
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Command.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CommandVisitor.h"


/**
 * This class provides an empty implementation of CommandVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CommandBaseVisitor : public CommandVisitor {
public:

  virtual antlrcpp::Any visitModule(CommandParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope(CommandParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(CommandParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(CommandParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfControl(CommandParser::IfControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForControl(CommandParser::ForControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(CommandParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(CommandParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignProperty(CommandParser::AssignPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CommandParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAccess(CommandParser::ExpressionAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccess(CommandParser::AccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessRange(CommandParser::AccessRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionConcated(CommandParser::ExpressionConcatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionGrouped(CommandParser::ExpressionGroupedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionConst(CommandParser::ExpressionConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionUnary(CommandParser::ExpressionUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(CommandParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictionary(CommandParser::DictionaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictionaryElements(CommandParser::DictionaryElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionType(CommandParser::ExpressionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(CommandParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean(CommandParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericInt(CommandParser::NumericIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericFloat(CommandParser::NumericFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(CommandParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }


};

