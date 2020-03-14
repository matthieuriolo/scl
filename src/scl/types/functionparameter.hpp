#ifndef __SCL_TYPES_FUNCTIONPARAMETER__
#define __SCL_TYPES_FUNCTIONPARAMETER__

#include <list>
#include <string>
#include "scl/ast/expression.hpp"
#include "scl/ast/variable.hpp"

namespace SCL {
	namespace Types {
		class FunctionParameter {
			//private:
			public:
				SCL::AST::Variable* internName;
				std::list<std::string> externNames;
				std::list<std::string> types;
				bool isFlag;
				SCL::AST::Expression *defaultValue;
			public:
				FunctionParameter(SCL::AST::Variable* internName);
		};
	}
}

#endif