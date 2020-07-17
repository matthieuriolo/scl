
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Conform.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ConformVisitor.h"


/**
 * This class provides an empty implementation of ConformVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ConformBaseVisitor : public ConformVisitor {
public:

  virtual antlrcpp::Any visitInstruction(ConformParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfControl(ConformParser::IfControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForControl(ConformParser::ForControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(ConformParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(ConformParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignProperty(ConformParser::AssignPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(ConformParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAccess(ConformParser::ExpressionAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccess(ConformParser::AccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessRange(ConformParser::AccessRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionConcated(ConformParser::ExpressionConcatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionGrouped(ConformParser::ExpressionGroupedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionConst(ConformParser::ExpressionConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionUnary(ConformParser::ExpressionUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(ConformParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictionary(ConformParser::DictionaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictionaryElements(ConformParser::DictionaryElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionType(ConformParser::ExpressionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(ConformParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean(ConformParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericInt(ConformParser::NumericIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericFloat(ConformParser::NumericFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(ConformParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(ConformParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }


};

