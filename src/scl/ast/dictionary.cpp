#include "scl/ast/dictionary.hpp"
#include "scl/types/dictionary.hpp"


#include <string>
#include <iostream>
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

		void Dictionary::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "expression.array\n";
			for(auto& pair : values) {
				std::cout << std::string((level+1) * 2, ' ') << "key:\n";
				pair.first->printAST(level+2);

				std::cout << std::string((level+1) * 2, ' ') << "value:\n";
				pair.second->printAST(level+2);
			}
		}
	}
}