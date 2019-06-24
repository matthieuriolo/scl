#include "scl/types/function.hpp"


namespace SCL {
	namespace Types {
		Function::Function() {}

		std::string Function::getTypeName() {
			return std::string("function");
		}

		std::string Function::getName() {
			return Function::getTypeName();
		}


		std::string Function::stringify() {
			return this->getName();
		}

		int Function::compare(Type *right) {
			return SCL::Type::comparison(this, right);
		}

		void Function::execute(SCL::Context *ctx, std::list<std::string> arguments) {

		}
	}
}