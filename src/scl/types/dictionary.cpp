#include "scl/types/dictionary.hpp"
#include <sstream>

namespace SCL {
	namespace Types {
		Dictionary::Dictionary() {}

		void Dictionary::add(SCL::Type* key, SCL::Type* value) {
			values[key] = value;
		}

		std::string Dictionary::getTypeName() {
			return std::string("dictionary");
		}

		std::string Dictionary::getName() {
			return Dictionary::getTypeName();
		}


		std::string Dictionary::stringify() {
			std::stringstream ss;
			ss << "{";

			auto iter = values.begin();
			while(iter != values.end()) {
				ss << iter->first->stringify();
				ss << ": ";
				ss << iter->second->stringify();

				iter++;
				if(iter != values.end()) {
					ss << ", ";
				}
			}

			ss << "}";

			return ss.str();
		}

		int Dictionary::compare(Type *right) {
			return SCL::Type::comparison(this, right);
		}
	}
}