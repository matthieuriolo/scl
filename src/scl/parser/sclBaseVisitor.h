
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "sclVisitor.h"


/**
 * This class provides an empty implementation of sclVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sclBaseVisitor : public sclVisitor {
public:

  virtual antlrcpp::Any visitModule(sclParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope(sclParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(sclParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(sclParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfControl(sclParser::IfControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForControl(sclParser::ForControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(sclParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(sclParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignProperty(sclParser::AssignPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncludeFile(sclParser::IncludeFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(sclParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAccess(sclParser::ExpressionAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccess(sclParser::AccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessRange(sclParser::AccessRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionConcated(sclParser::ExpressionConcatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionGrouped(sclParser::ExpressionGroupedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionConst(sclParser::ExpressionConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionUnary(sclParser::ExpressionUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(sclParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictionary(sclParser::DictionaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictionaryElements(sclParser::DictionaryElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionType(sclParser::ExpressionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(sclParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean(sclParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericInt(sclParser::NumericIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumericFloat(sclParser::NumericFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(sclParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }


};

