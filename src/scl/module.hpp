#ifndef __SCL_MODUL__
#define __SCL_MODUL__

#include "scl/scope.hpp"

namespace SCL {
	class Module {
		private:
			SCL::Scope* scope;
		public:
			Module(SCL::Scope* scope);

			void launch();
			void printAST();
	};
}

#endif