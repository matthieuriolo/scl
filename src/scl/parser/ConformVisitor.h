
// Generated from /Users/matthieuriolo/Documents/Sourcecode/scl/src/scl/Conform.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ConformParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ConformParser.
 */
class  ConformVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ConformParser.
   */
    virtual antlrcpp::Any visitInstruction(ConformParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitIfControl(ConformParser::IfControlContext *context) = 0;

    virtual antlrcpp::Any visitForControl(ConformParser::ForControlContext *context) = 0;

    virtual antlrcpp::Any visitPrint(ConformParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitAssign(ConformParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitAssignProperty(ConformParser::AssignPropertyContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ConformParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAccess(ConformParser::ExpressionAccessContext *context) = 0;

    virtual antlrcpp::Any visitAccess(ConformParser::AccessContext *context) = 0;

    virtual antlrcpp::Any visitAccessRange(ConformParser::AccessRangeContext *context) = 0;

    virtual antlrcpp::Any visitExpressionConcated(ConformParser::ExpressionConcatedContext *context) = 0;

    virtual antlrcpp::Any visitExpressionGrouped(ConformParser::ExpressionGroupedContext *context) = 0;

    virtual antlrcpp::Any visitExpressionConst(ConformParser::ExpressionConstContext *context) = 0;

    virtual antlrcpp::Any visitExpressionUnary(ConformParser::ExpressionUnaryContext *context) = 0;

    virtual antlrcpp::Any visitArray(ConformParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitDictionary(ConformParser::DictionaryContext *context) = 0;

    virtual antlrcpp::Any visitDictionaryElements(ConformParser::DictionaryElementsContext *context) = 0;

    virtual antlrcpp::Any visitExpressionType(ConformParser::ExpressionTypeContext *context) = 0;

    virtual antlrcpp::Any visitType(ConformParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitBoolean(ConformParser::BooleanContext *context) = 0;

    virtual antlrcpp::Any visitNumericInt(ConformParser::NumericIntContext *context) = 0;

    virtual antlrcpp::Any visitNumericFloat(ConformParser::NumericFloatContext *context) = 0;

    virtual antlrcpp::Any visitString(ConformParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitVariable(ConformParser::VariableContext *context) = 0;


};

