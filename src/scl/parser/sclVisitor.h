
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/scl.g4 by ANTLR 4.8

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

    virtual antlrcpp::Any visitScope(sclParser::ScopeContext *context) = 0;

    virtual antlrcpp::Any visitVariable(sclParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(sclParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitPrint(sclParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitAssign(sclParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitExpression(sclParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionconcated(sclParser::ExpressionconcatedContext *context) = 0;

    virtual antlrcpp::Any visitExpressiongrouped(sclParser::ExpressiongroupedContext *context) = 0;

    virtual antlrcpp::Any visitExpressionconst(sclParser::ExpressionconstContext *context) = 0;

    virtual antlrcpp::Any visitExpressionunary(sclParser::ExpressionunaryContext *context) = 0;

    virtual antlrcpp::Any visitArray(sclParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitDictionary(sclParser::DictionaryContext *context) = 0;

    virtual antlrcpp::Any visitDictionaryElements(sclParser::DictionaryElementsContext *context) = 0;

    virtual antlrcpp::Any visitExpressiontype(sclParser::ExpressiontypeContext *context) = 0;

    virtual antlrcpp::Any visitType(sclParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitBoolean(sclParser::BooleanContext *context) = 0;

    virtual antlrcpp::Any visitNumericInt(sclParser::NumericIntContext *context) = 0;

    virtual antlrcpp::Any visitNumericFloat(sclParser::NumericFloatContext *context) = 0;

    virtual antlrcpp::Any visitString(sclParser::StringContext *context) = 0;


};

