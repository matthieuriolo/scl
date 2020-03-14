#ifndef __SCL_TYPES_FUNCTIONBODY__
#define __SCL_TYPES_FUNCTIONBODY__

#include <vector>
#include <list>
#include <string>
#include "scl/types/functionparameter.hpp"
#include "scl/scope.hpp"

namespace SCL {
	namespace Types {
		class FunctionBody {
			private:
				std::vector<SCL::Types::FunctionParameter*> parameters;
				SCL::Scope* scope;
			public:
				FunctionBody(std::vector<SCL::Types::FunctionParameter*> parameters, SCL::Scope* scope);

				bool matchingParameters(std::list<std::string> arguments);
				SCL::Type *execute(SCL::Context *ctx, std::list<std::string> arguments);
		};
	}
}

#endif