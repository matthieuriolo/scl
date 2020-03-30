/*
example how c/c++ code can be injected into scl
*/

#include <math.h>
#include "scl/context.hpp"
#include "scl/types/float.hpp"

extern "C"
{
	//essentially the same as SCL::Scope.execute()
	void module_import(SCL::Context *ctx) {
		ctx->setValue("PI", new SCL::Types::Float(M_PI));
	}
}