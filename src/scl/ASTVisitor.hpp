#ifndef __SCL_ASTVISITOR__
#define __SCL_ASTVISITOR__

#include "scl/parser/sclBaseVisitor.h"
#include "scl/ast/variable.hpp"

namespace SCL {
	class ASTVisitor : public sclBaseVisitor {
		public:
			antlrcpp::Any visitModule(sclParser::ModuleContext *ctx) override;
			antlrcpp::Any visitScope(sclParser::ScopeContext *ctx) override;
			antlrcpp::Any visitVariable(sclParser::VariableContext *ctx) override;
			SCL::AST::Variable* visitExplicitVariable(sclParser::VariableContext *ctx);

			antlrcpp::Any visitExpressiongrouped(sclParser::ExpressiongroupedContext *ctx) override;
			antlrcpp::Any visitExpressionconcated(sclParser::ExpressionconcatedContext *ctx) override;
			antlrcpp::Any visitExpressiontype(sclParser::ExpressiontypeContext *ctx) override;
			antlrcpp::Any visitAssign(sclParser::AssignContext *ctx) override;

			antlrcpp::Any visitPrint(sclParser::PrintContext *ctx) override;


			antlrcpp::Any visitBoolean(sclParser::BooleanContext *ctx) override;
			antlrcpp::Any visitNumericInt(sclParser::NumericIntContext *ctx) override;
			antlrcpp::Any visitNumericFloat(sclParser::NumericFloatContext *ctx) override;
	};
}

#endif