#include "scl/types/functionparameter.hpp"


namespace SCL {
	namespace Types {
		FunctionParameter::FunctionParameter(SCL::AST::Variable* internName) {
			this->internName = internName;
		}
	}
}