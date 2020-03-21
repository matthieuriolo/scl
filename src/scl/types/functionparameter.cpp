#include "scl/types/functionparameter.hpp"

#include <iostream>
#include <string>
namespace SCL {
	namespace Types {
		FunctionParameter::FunctionParameter(SCL::AST::Variable* internName) {
			this->internName = internName;
			isFlag = false;
			defaultValue = NULL;
		}


		void FunctionParameter::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "type.functionParameter\n";
			level++;
			std::cout << std::string(level * 2, ' ') << "internName:\n";
			internName->printAST(level+1);

			std::cout << std::string(level * 2, ' ') << "externNames:\n";
			for(auto name : externNames) {
				std::cout << std::string((level+1) * 2, ' ') << name << "\n";
			}

			//std::cout << std::string(level * 2, ' ') << "types:\n";
			//for(auto type : types) {
			//	std::cout << std::string((level+1) * 2, ' ') << type << "\n";
			//}

			std::cout << std::string(level * 2, ' ') << "isFlag: " << (isFlag ? "YES" : "NO") << "\n";
			
			//#std::cout << std::string(level * 2, ' ') << "defaultValue:\n";
			//defaultValue->printAST(level+1);
		}
	}
}