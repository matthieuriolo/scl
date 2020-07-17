#include "scl/ConformVisitor.hpp"

#include "scl/ast/if.hpp"
#include "scl/ast/for.hpp"
#include "scl/ast/variable.hpp"
#include "scl/ast/assign.hpp"
#include "scl/ast/assignattribute.hpp"
#include "scl/ast/print.hpp"
#include "scl/ast/include.hpp"
#include "scl/ast/import.hpp"

#include "scl/ast/expressiontype.hpp"
#include "scl/ast/access.hpp"
#include "scl/ast/range.hpp"
#include "scl/ast/operand.hpp"
#include "scl/ast/comparator.hpp"
#include "scl/ast/unaryminus.hpp"
#include "scl/ast/rangeiterator.hpp"

#include "scl/ast/array.hpp"
#include "scl/ast/dictionary.hpp"

#include "scl/types/boolean.hpp"
#include "scl/types/integer.hpp"
#include "scl/types/float.hpp"
#include "scl/types/string.hpp"

namespace SCL {
	/* instructions */
	antlrcpp::Any ConformVisitor::visitIfControl(ConformParser::IfControlContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::If(visitExpression(ctx->expression()));
	}

	antlrcpp::Any ConformVisitor::visitForControl(ConformParser::ForControlContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::For(visitExplicitVariable(ctx->variable()), visitExpression(ctx->expression()));
	}

	antlrcpp::Any ConformVisitor::visitAssign(ConformParser::AssignContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::Assign(visitExplicitVariable(ctx->key), visitExpression(ctx->value));
	}
	
	antlrcpp::Any ConformVisitor::visitAssignProperty(ConformParser::AssignPropertyContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::AssignAttribute(
			visitExpression(ctx->property),
			visitExpression(ctx->key),
			visitExpression(ctx->value)
		);
	}
	
	antlrcpp::Any ConformVisitor::visitPrint(ConformParser::PrintContext *ctx)  {
		return (SCL::AST::Instruction*)new SCL::AST::Print(visitExpression(ctx->expression()).as<SCL::AST::Expression*>());
	}

/*	antlrcpp::Any ConformVisitor::visitIncludeFile(ConformParser::IncludeFileContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::Include(ctx->path->getText());
	}*/

/*	antlrcpp::Any ConformVisitor::visitIncludeCModule(ConformParser::IncludeCModuleContext *ctx) {
		return (SCL::AST::Instruction*)new SCL::AST::Import(ctx->path->getText());
	}*/

	/* expression */
	antlrcpp::Any ConformVisitor::visitExpressionType(ConformParser::ExpressionTypeContext *ctx) {
		return (SCL::AST::Expression*)new SCL::AST::ExpressionType(visitType(ctx->type()).as<SCL::Type*>());
	}

	antlrcpp::Any ConformVisitor::visitExpressionGrouped(ConformParser::ExpressionGroupedContext *ctx) {
		if(ctx->expressionConst()) {
			return visitExpressionConst(ctx->expressionConst());
		}else if(ctx->expression()) {
			return visitExpression(ctx->expression());
		}
		throw new std::logic_error("cannot parse tree");
	}

	antlrcpp::Any ConformVisitor::visitExpressionConcated(ConformParser::ExpressionConcatedContext *ctx) {
		if(ctx->expressionGrouped()) {
			return visitExpressionGrouped(ctx->expressionGrouped());	
		}else if(ctx->range) {
			return (SCL::AST::Expression*)new SCL::AST::RangeIterator(visitExpressionConcated(ctx->left), visitExpressionConcated(ctx->right));
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

			return (SCL::AST::Expression*)new SCL::AST::Operand(operand, visitExpressionConcated(ctx->left), visitExpressionConcated(ctx->right));
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

			return (SCL::AST::Expression*)new SCL::AST::Comparator(comparator, visitExpressionConcated(ctx->left), visitExpressionConcated(ctx->right));
		}

		throw new std::logic_error("cannot parse tree");
	}

	antlrcpp::Any ConformVisitor::visitExpressionUnary(ConformParser::ExpressionUnaryContext *ctx) {
		return (SCL::AST::Expression*)new SCL::AST::UnaryMinus(visitExpression(ctx->expression()).as<SCL::AST::Expression*>());
	}




	antlrcpp::Any ConformVisitor::visitAccess(ConformParser::AccessContext *ctx) {
		return (SCL::AST::Expression*)new SCL::AST::Access(visitExpressionConcated(ctx->property), visitExpressionConcated(ctx->key));
	}

	antlrcpp::Any ConformVisitor::visitAccessRange(ConformParser::AccessRangeContext *ctx) {
		return (SCL::AST::Expression*)new SCL::AST::Range(
			visitExpressionConcated(ctx->property),
			ctx->start ? visitExpressionConcated(ctx->start).as<SCL::AST::Expression*>() : NULL,
			ctx->end ? visitExpressionConcated(ctx->end).as<SCL::AST::Expression*>() : NULL
		);
	}

	antlrcpp::Any ConformVisitor::visitVariable(ConformParser::VariableContext *ctx) {
		return (SCL::AST::Expression*)visitExplicitVariable(ctx);
	}

	SCL::AST::Variable* ConformVisitor::visitExplicitVariable(ConformParser::VariableContext *ctx) {
		return new SCL::AST::Variable(ctx->IDENTIFIER()->getText());
	}

	antlrcpp::Any ConformVisitor::visitArray(ConformParser::ArrayContext *ctx) {
		auto arr = new SCL::AST::Array();
		for(auto val : ctx->elements) {
			arr->add(visitExpression(val));
		}
		return (SCL::AST::Expression*)arr;
	}

	antlrcpp::Any ConformVisitor::visitDictionary(ConformParser::DictionaryContext *ctx) {
		auto dict = new SCL::AST::Dictionary();
		for(auto val : ctx->elements) {
			dict->add(visitExpression(val->key), visitExpression(val->value));
		}
		return (SCL::AST::Expression*)dict;
	}


	/* types */
	antlrcpp::Any ConformVisitor::visitBoolean(ConformParser::BooleanContext *ctx) {
		if(ctx->BOOLEAN_TRUE()) {
			return (SCL::Type*)SCL::Types::Boolean::getTrue();
		}

		return (SCL::Type*)SCL::Types::Boolean::getFalse();
	}

	antlrcpp::Any ConformVisitor::visitNumericInt(ConformParser::NumericIntContext *ctx) {
		return (SCL::Type*)new SCL::Types::Integer(ctx->INTEGER()->getText());
	}

	antlrcpp::Any ConformVisitor::visitNumericFloat(ConformParser::NumericFloatContext *ctx) {
		return (SCL::Type*)new SCL::Types::Float(ctx->FLOAT()->getText());
	}

	antlrcpp::Any ConformVisitor::visitString(ConformParser::StringContext *ctx) {
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