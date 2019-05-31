#include "scl/type.hpp"


namespace SCL {
	int Type::comparison(Type *left, Type *right) {
		std::string types[] = {
			"undefined",
			"null",
			"integer"
		};

		return
			std::find(std::begin(types), std::end(types), left->getName())
			-
			std::find(std::begin(types), std::end(types), right->getName());
	}
}