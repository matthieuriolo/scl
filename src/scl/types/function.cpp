#include "scl/types/function.hpp"

#include <iostream>
#include <string>
namespace SCL {
	namespace Types {
		Function::Function(std::list<SCL::Types::FunctionBody*> bodies) {
			this->bodies = bodies;
		}

		std::string Function::getTypeName() {
			return std::string("function");
		}

		std::string Function::getName() {
			return Function::getTypeName();
		}


		std::string Function::stringify() {
			return this->getName();
		}

		SCL::Types::Boolean *Function::toBoolean() {
			return SCL::Types::Boolean::getTrue();
		}

		int Function::compare(Type *right) {
			return SCL::Type::comparison(this, right);
		}

		SCL::Type* Function::execute(SCL::Context *ctx, std::list<SCL::AST::Commands::Argument*> arguments) {
			/*for (auto arg : arguments)
			{
				std::cout << "\"" << arg << "\"" << "\n";
			}*/

			for(auto body : bodies) {
				if(body->matchingParameters(arguments)) {
					return body->execute(ctx, arguments);
				}
			}

			throw new std::logic_error("Invalid parameters");
		}

		void Function::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "type.function\n";
			for(auto body : bodies) {
				body->printAST(level+1);
			}
		}
	}
}