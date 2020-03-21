#include "scl/ast/array.hpp"
#include "scl/types/array.hpp"

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Array::Array() {}
		
		void Array::add(Expression* value) {
			values.push_back(value);
		}

		SCL::Type *Array::compute(SCL::Context *ctx) {
			auto* arr = new SCL::Types::Array();
			for(auto* expr : values) {
				arr->add(expr->compute(ctx));
			}
			return arr;
		}

		void Array::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "expression.array\n";
			for(auto val : values) {
				val->printAST(level+1);
			}
		}
	}
}