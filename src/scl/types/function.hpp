#ifndef __SCL_TYPES_FUNCTION__
#define __SCL_TYPES_FUNCTION__

#include <list>
#include "scl/type.hpp"
#include "scl/types/boolean.hpp"
#include "scl/types/functionbody.hpp"
#include "scl/ast/commands/argument.hpp"

namespace SCL {
	namespace Types {
		class Function : public SCL::Type {
			private:
				std::list<SCL::Types::FunctionBody*> bodies;
				
			public:
				Function(std::list<SCL::Types::FunctionBody*> bodies);
				std::string getName();
				static std::string getTypeName();
				std::string stringify();
				
				SCL::Types::Boolean *toBoolean();

				int compare(SCL::Type *right);

				SCL::Type *execute(SCL::Context *ctx, std::list<SCL::AST::Commands::Argument*> arguments);
				void printAST(int level);
		};
	}
}

#endif