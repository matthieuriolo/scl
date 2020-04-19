
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

  virtual antlrcpp::Any visitPrint(sclParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(sclParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(sclParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(sclParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparator(sclParser::ComparatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressiontype(sclParser::ExpressiontypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(sclParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean(sclParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(sclParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray(sclParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }


};

