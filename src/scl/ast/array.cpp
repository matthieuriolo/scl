#include "scl/ast/array.hpp"
#include "scl/types/array.hpp"

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
	}
}