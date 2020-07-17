
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Command.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CommandParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CommandParser.
 */
class  CommandVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CommandParser.
   */
    virtual antlrcpp::Any visitSeparator(CommandParser::SeparatorContext *context) = 0;


};

