#include "scl/ASTVisitor.hpp"
#include "scl/module.hpp"
#include "scl/scope.hpp"

#include "scl/ast/expressiontype.hpp"
#include "scl/ast/variable.hpp"
#include "scl/ast/assign.hpp"
#include "scl/ast/print.hpp"
#include "scl/ast/operand.hpp"
#include "scl/ast/comparator.hpp"


#include "scl/ast/array.hpp"

#include "scl/types/boolean.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/float.hpp"
#include "scl/types/string.hpp"

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

	/* instructions */
	antlrcpp::Any ASTVisitor::visitAssign(sclParser::AssignContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::Assign(visitExplicitVariable(ctx->key), visitExpression(ctx->value));
	}

	antlrcpp::Any ASTVisitor::visitPrint(sclParser::PrintContext *ctx)  {
		return (SCL::AST::Instruction*)new SCL::AST::Print(visitExpression(ctx->expression()).as<SCL::AST::Expression*>());
	}

	/* expression */
	antlrcpp::Any ASTVisitor::visitExpressiontype(sclParser::ExpressiontypeContext *ctx) {
		return (SCL::AST::Expression*)new SCL::AST::ExpressionType(visitType(ctx->type()).as<SCL::Type*>());
	}

	antlrcpp::Any ASTVisitor::visitExpressiongrouped(sclParser::ExpressiongroupedContext *ctx) {
		if(ctx->expressionconst()) {
			return visitExpressionconst(ctx->expressionconst());
		}else if(ctx->expression()) {
			return visitExpression(ctx->expression());
		}
		throw new std::logic_error("cannot parse tree");
	}

	antlrcpp::Any ASTVisitor::visitExpressionconcated(sclParser::ExpressionconcatedContext *ctx) {
		if(ctx->expressiongrouped()) {
			return visitExpressiongrouped(ctx->expressiongrouped());	
		}else if(ctx->operand) {
			AST::Operand_Type operand;
			
			if(ctx->OPERAND_PLUS()) {
				operand = AST::PLUS;
			}else if(ctx->OPERAND_MINUS()) {
				operand = AST::MINUS;
			}else if(ctx->OPERAND_ASTERISK()) {
				operand = AST::ASTERISK;
			}else if(ctx->OPERAND_SLASH()) {
				operand = AST::SLASH;
			}else if(ctx->OPERAND_CARET()) {
				operand = AST::CARET;
			}else if(ctx->OPERAND_AND()) {
				operand = AST::AND;
			}else if(ctx->OPERAND_OR()) {
				operand = AST::OR;
			}else {
				throw new std::logic_error("Unknown operand");
			}

			return (SCL::AST::Expression*)new SCL::AST::Operand(operand, visitExpressionconcated(ctx->left), visitExpressionconcated(ctx->right));
		}else if(ctx->comparator) {
			AST::Comparator_Type comparator;
			
			if(ctx->COMPARATOR_EQUAL()) {
				comparator = AST::EQUAL;
			}else if(ctx->COMPARATOR_NOT_EQUAL()) {
				comparator = AST::NOT_EQUAL;
			}else if(ctx->COMPARATOR_LESS()) {
				comparator = AST::LESS;
			}else if(ctx->COMPARATOR_GREATER()) {
				comparator = AST::GREATER;
			}else if(ctx->COMPARATOR_LESS_EQUAL()) {
				comparator = AST::LESS_EQUAL;
			}else if(ctx->COMPARATOR_GREATER_EQUAL()) {
				comparator = AST::GREATER_EQUAL;
			}else {
				throw new std::logic_error("Unknown comparator");
			}

			return (SCL::AST::Expression*)new SCL::AST::Comparator(comparator, visitExpressionconcated(ctx->left), visitExpressionconcated(ctx->right));
		}

		throw new std::logic_error("cannot parse tree");
	}




	antlrcpp::Any ASTVisitor::visitVariable(sclParser::VariableContext *ctx) {
		return (SCL::AST::Expression*)visitExplicitVariable(ctx);
	}

	SCL::AST::Variable* ASTVisitor::visitExplicitVariable(sclParser::VariableContext *ctx) {
		return new SCL::AST::Variable(ctx->IDENTIFIER()->getText().substr(1));
	}

	antlrcpp::Any ASTVisitor::visitArray(sclParser::ArrayContext *ctx) {
		auto arr = new SCL::AST::Array();
		for(auto val : ctx->elements) {
			arr->add(visitExpression(val));
		}
		return (SCL::AST::Expression*)arr;
	}

	/* types */
	antlrcpp::Any ASTVisitor::visitBoolean(sclParser::BooleanContext *ctx) {
		if(ctx->BOOLEAN_TRUE()) {
			return (SCL::Type*)SCL::Types::Boolean::getTrue();
		}

		return (SCL::Type*)SCL::Types::Boolean::getFalse();
	}

	antlrcpp::Any ASTVisitor::visitNumericInt(sclParser::NumericIntContext *ctx) {
		return (SCL::Type*)new SCL::Types::Integer(ctx->INTEGER()->getText());
	}

	antlrcpp::Any ASTVisitor::visitNumericFloat(sclParser::NumericFloatContext *ctx) {
		return (SCL::Type*)new SCL::Types::Float(ctx->FLOAT()->getText());
	}

	antlrcpp::Any ASTVisitor::visitString(sclParser::StringContext *ctx) {
		std::string s;

		if(ctx->STRING_SINGLE_QUOTE()) {
			s = ctx->STRING_SINGLE_QUOTE()->getText();
		}else if(ctx->STRING_DOUBLE_QUOTE()) {
			s = ctx->STRING_DOUBLE_QUOTE()->getText();
		}else {
			throw new std::logic_error("cannot parse tree");
		}

		return (SCL::Type*)new SCL::Types::String(s.substr(1, s.length() - 2));
	}
}