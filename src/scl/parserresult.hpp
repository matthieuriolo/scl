#ifndef __SCL_PARSERRESULT__
#define __SCL_PARSERRESULT__

#include <string>
#include <map>
#include <list>

#include "scl/module.hpp"

#include "parser.hh"

#define YY_DECL SCL::Parser::symbol_type yylex (SCL::ParserResult& result)
YY_DECL;


namespace SCL {
	class ParserResult {
		private:
			std::string file;
		public:
			ParserResult();
			SCL::Module module;

			int parse(const std::string& f);

			void scan_begin();
			void scan_end();
			
			bool trace_parsing;
			bool trace_scanning;
			SCL::location location;
	};
}

#endif