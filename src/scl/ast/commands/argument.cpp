#include "scl/ast/commands/argument.hpp"
#include "scl/types/string.hpp"

#include <iostream>
#include <string>

namespace SCL {
	namespace AST {
		namespace Commands {
			Argument::Argument() {
				
			}

			void Argument::addExpression(SCL::AST::Expression* expression) {
				expressions.push_back(expression);
			}

			std::string Argument::stringify(SCL::Context *ctx) {
				std::string str;
				for(auto expr : expressions) {
					auto type = expr->compute(ctx);
					if(
						type->getName() == "array"
						||
						type->getName() == "dictionary"
					) {
						throw new std::logic_error("You cannot use this type in this context");
					}

					str += type->stringify();
				}

				return str;
			}

			void Argument::printAST(int level) {
				std::cout << std::string(level * 2, ' ') << "argument\n";
				for(auto expr : expressions) {
					expr->printAST(level+1);
				}
			}
		}
	}
}