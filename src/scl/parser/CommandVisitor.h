
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
    virtual antlrcpp::Any visitModule(CommandParser::ModuleContext *context) = 0;

    virtual antlrcpp::Any visitScope(CommandParser::ScopeContext *context) = 0;

    virtual antlrcpp::Any visitVariable(CommandParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(CommandParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitIfControl(CommandParser::IfControlContext *context) = 0;

    virtual antlrcpp::Any visitForControl(CommandParser::ForControlContext *context) = 0;

    virtual antlrcpp::Any visitPrint(CommandParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitAssign(CommandParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitAssignProperty(CommandParser::AssignPropertyContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CommandParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAccess(CommandParser::ExpressionAccessContext *context) = 0;

    virtual antlrcpp::Any visitAccess(CommandParser::AccessContext *context) = 0;

    virtual antlrcpp::Any visitAccessRange(CommandParser::AccessRangeContext *context) = 0;

    virtual antlrcpp::Any visitExpressionConcated(CommandParser::ExpressionConcatedContext *context) = 0;

    virtual antlrcpp::Any visitExpressionGrouped(CommandParser::ExpressionGroupedContext *context) = 0;

    virtual antlrcpp::Any visitExpressionConst(CommandParser::ExpressionConstContext *context) = 0;

    virtual antlrcpp::Any visitExpressionUnary(CommandParser::ExpressionUnaryContext *context) = 0;

    virtual antlrcpp::Any visitArray(CommandParser::ArrayContext *context) = 0;

    virtual antlrcpp::Any visitDictionary(CommandParser::DictionaryContext *context) = 0;

    virtual antlrcpp::Any visitDictionaryElements(CommandParser::DictionaryElementsContext *context) = 0;

    virtual antlrcpp::Any visitExpressionType(CommandParser::ExpressionTypeContext *context) = 0;

    virtual antlrcpp::Any visitType(CommandParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitBoolean(CommandParser::BooleanContext *context) = 0;

    virtual antlrcpp::Any visitNumericInt(CommandParser::NumericIntContext *context) = 0;

    virtual antlrcpp::Any visitNumericFloat(CommandParser::NumericFloatContext *context) = 0;

    virtual antlrcpp::Any visitString(CommandParser::StringContext *context) = 0;


};

