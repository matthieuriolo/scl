
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/parser/scl.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "sclParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by sclParser.
 */
class  sclVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sclParser.
   */
    virtual antlrcpp::Any visitModule(sclParser::ModuleContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(sclParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitPrint(sclParser::PrintContext *context) = 0;


};

