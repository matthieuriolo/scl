#include "scl/ast/import.hpp"
#include "scl/context.hpp"

#include <dlfcn.h>

#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		Import::Import(std::string path) {
			this->path = path;
		}

		void Import::execute(SCL::Context * ctx) {
			void *handle = dlopen(path.c_str(), RTLD_GLOBAL | RTLD_NOW);
			if(handle == NULL) {
				throw new std::logic_error("file '" + path + "' not found");
			}

			typedef void (*importer_t)(SCL::Context*);
			importer_t importer = (importer_t)dlsym(handle, "module_import");

			if(importer == NULL) {
				dlclose(handle);
				throw new std::logic_error("could not find 'module_import' in '" + path + "'");
			}

			importer(ctx);

			dlclose(handle);
		}

		void Import::printAST(int level) {
			std::cout << std::string(level*2, ' ') << "instruction.import\n";
			std::cout << std::string((level+1)*2, ' ') << "path: " << path << "\n";
		}
	}
}