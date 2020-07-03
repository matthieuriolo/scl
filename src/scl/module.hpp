#ifndef __SCL_MODUL__
#define __SCL_MODUL__

#include "scl/scope.hpp"
#include "scl/context.hpp"

namespace SCL {
	class Module {
		private:
			SCL::Scope* scope;
		public:
			Module(SCL::Scope* scope);

			void execute(SCL::Context* parentCtx);
			void launch();
			void printAST();

			static Module* fromFile(std::string path);
			static Module* fromFile(bool showTrace, std::string path);
	};
}

#endif