
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

  virtual antlrcpp::Any visitSeparator(CommandParser::SeparatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

