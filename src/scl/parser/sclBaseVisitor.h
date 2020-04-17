
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/parser/scl.g4 by ANTLR 4.8

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

  virtual antlrcpp::Any visitInstruction(sclParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(sclParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }


};

