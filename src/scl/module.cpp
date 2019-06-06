#include "scl/module.hpp"
#include "scl/context.hpp"

namespace SCL {
	void Module::launch() {
		//Context *ctx = new Context(this);
		Context *ctx = new Context();
		execute(ctx);
		delete ctx;
	}
}