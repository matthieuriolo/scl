#ifndef __SCL_CONFORMVISITOR__
#define __SCL_CONFORMVISITOR__

#include "scl/parser/ConformBaseVisitor.h"
#include "scl/ast/variable.hpp"

namespace SCL {
	class ConformVisitor : public ConformBaseVisitor {
		public:
			/* instructions */
			antlrcpp::Any visitIfControl(ConformParser::IfControlContext *ctx) override;
			antlrcpp::Any visitForControl(ConformParser::ForControlContext *ctx) override;
			antlrcpp::Any visitAssign(ConformParser::AssignContext *ctx) override;
			antlrcpp::Any visitAssignProperty(ConformParser::AssignPropertyContext *ctx) override;
			antlrcpp::Any visitPrint(ConformParser::PrintContext *ctx) override;
			//antlrcpp::Any visitIncludeFile(ConformParser::IncludeFileContext *ctx) override;
			//antlrcpp::Any visitIncludeCModule(ConformParser::IncludeCModuleContext *ctx) override;

			/* expression */
			antlrcpp::Any visitExpressionGrouped(ConformParser::ExpressionGroupedContext *ctx) override;
			antlrcpp::Any visitExpressionConcated(ConformParser::ExpressionConcatedContext *ctx) override;
			antlrcpp::Any visitExpressionType(ConformParser::ExpressionTypeContext *ctx) override;
			antlrcpp::Any visitExpressionUnary(ConformParser::ExpressionUnaryContext *ctx) override;

			antlrcpp::Any visitAccess(ConformParser::AccessContext *ctx) override;
			antlrcpp::Any visitAccessRange(ConformParser::AccessRangeContext *ctx) override;
			antlrcpp::Any visitVariable(ConformParser::VariableContext *ctx) override;
			SCL::AST::Variable* visitExplicitVariable(ConformParser::VariableContext *ctx);
			antlrcpp::Any visitArray(ConformParser::ArrayContext *ctx) override;
			antlrcpp::Any visitDictionary(ConformParser::DictionaryContext *ctx) override;

			/* types */
			antlrcpp::Any visitBoolean(ConformParser::BooleanContext *ctx) override;
			antlrcpp::Any visitNumericInt(ConformParser::NumericIntContext *ctx) override;
			antlrcpp::Any visitNumericFloat(ConformParser::NumericFloatContext *ctx) override;
			antlrcpp::Any visitString(ConformParser::StringContext *ctx) override;
	};
}

#endif