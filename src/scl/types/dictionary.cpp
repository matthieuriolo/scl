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

		SCL::Types::Boolean *Dictionary::toBoolean() {
			return values.size() > 0 ? SCL::Types::Boolean::getTrue() : SCL::Types::Boolean::getFalse();
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
			if(right->getName() == "dictionary") {
				SCL::Types::Dictionary* dict = (SCL::Types::Dictionary*)right;

				if(values.size() != dict->values.size()) {
					return values.size() - dict->values.size();
				}

				for(auto lPair : values) {
					auto rPair = dict->values.find(lPair.first);
					if(rPair == dict->values.end()) {
						return -1;
					}

					int ret = lPair.second->compare(rPair->second);
					if(ret != 0) {
						return ret;
					}
				}
			}

			return SCL::Type::comparison(this, right);
		}
	}
}