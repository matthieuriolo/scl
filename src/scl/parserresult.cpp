#include "scl/parserresult.hpp"

namespace SCL {
	ParserResult::ParserResult() {
		trace_parsing = false;
		trace_scanning = false;
	}


	int ParserResult::parse(const std::string &f) {
		file = f;
		location.initialize(&file);
		scan_begin ();
		SCL::Parser parser(*this);
		parser.set_debug_level(trace_parsing);
		int res = parser();
		scan_end();
		return res;
	}
}