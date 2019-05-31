#ifndef __SCL_MODUL__
#define __SCL_MODUL__

#include "scl/scope.hpp"

namespace SCL {
	class Module : public SCL::Scope {
		/*
		a module has a location
		*/
		public:
			void execute();
			//void execute(Context *parent);
	};
}

#endif