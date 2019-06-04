#include "scl/ast/dictionary.hpp"
#include "scl/types/dictionary.hpp"

namespace SCL {
	namespace AST {
		Dictionary::Dictionary() {}
		
		void Dictionary::add(Expression *key, Expression *value) {
			values[key] = value;
		}

		SCL::Type *Dictionary::compute(SCL::Context *ctx) {
			auto* arr = new SCL::Types::Dictionary();
			for(auto& pair : values) {
				arr->add(pair.first->compute(ctx), pair.second->compute(ctx));
			}
			return arr;
		}
	}
}