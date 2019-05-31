#include "scl/module.hpp"
#include "scl/context.hpp"

namespace SCL {
	void Module::execute() {
		Context *ctx = new Context(this);
		ctx->execute();
		delete ctx;
	}
}