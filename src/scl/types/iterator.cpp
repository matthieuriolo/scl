#include "scl/types/iterator.hpp"
#include <string>

namespace SCL {
	namespace Types {
		std::string Iterator::getTypeName() {
			return std::string("iterator");
		}

		std::string Iterator::getName() {
			return Iterator::getTypeName();
		}
		
		std::string Iterator::stringify() {
			return getName();
		}

		int Iterator::compare(Type *right) {
			return SCL::Type::comparison(this, right);
		}

		SCL::Types::Boolean *Iterator::toBoolean() {
			return SCL::Types::Boolean::getFalse();
		}
	}
}