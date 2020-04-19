#include "scl/ASTVisitor.hpp"
#include "scl/module.hpp"
#include "scl/scope.hpp"

#include "scl/ast/expressiontype.hpp"
#include "scl/ast/variable.hpp"
#include "scl/ast/assign.hpp"
#include "scl/types/boolean.hpp"
#include "scl/ast/print.hpp"


namespace SCL {
	antlrcpp::Any ASTVisitor::visitModule(sclParser::ModuleContext *ctx) {
		return new SCL::Module(visitScope(ctx->content).as<SCL::Scope*>());
	}

	antlrcpp::Any ASTVisitor::visitScope(sclParser::ScopeContext *ctx) {
		std::list<SCL::AST::Instruction*> instructions;
		for(auto instruction : ctx->instructions) {
			instructions.push_back(visitInstruction(instruction));
		}
		return new SCL::Scope(instructions);
	}

	antlrcpp::Any ASTVisitor::visitVariable(sclParser::VariableContext *ctx) {
		return (SCL::AST::Expression*)visitExplicitVariable(ctx);
	}

	SCL::AST::Variable* ASTVisitor::visitExplicitVariable(sclParser::VariableContext *ctx) {
		return new SCL::AST::Variable(ctx->IDENTIFIER()->getText().substr(1));
	}

	antlrcpp::Any ASTVisitor::visitExpressiontype(sclParser::ExpressiontypeContext *ctx) {
		return (SCL::AST::Expression*)new SCL::AST::ExpressionType(visitType(ctx->type()).as<SCL::Type*>());
	}

	antlrcpp::Any ASTVisitor::visitAssign(sclParser::AssignContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::Assign(visitExplicitVariable(ctx->key), visitExpression(ctx->value));
	}

	antlrcpp::Any ASTVisitor::visitBoolean(sclParser::BooleanContext *ctx) {
		if(ctx->BOOLEAN_TRUE()) {
			return (SCL::Type*)SCL::Types::Boolean::getTrue();
		}

		return (SCL::Type*)SCL::Types::Boolean::getFalse();
	}

	antlrcpp::Any ASTVisitor::visitPrint(sclParser::PrintContext *ctx)  {
		return (SCL::AST::Instruction*)new SCL::AST::Print(visitExpression(ctx->expression()).as<SCL::AST::Expression*>());
	}
}