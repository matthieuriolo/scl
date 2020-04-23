#include "scl/ast/rangeiterator.hpp"
#include "scl/types/iteratorfloat.hpp"
#include "scl/types/iteratorinteger.hpp"

#include "scl/types/float.hpp"
#include "scl/types/integer.hpp"


#include <string>
#include <iostream>
namespace SCL {
	namespace AST {
		RangeIterator::RangeIterator(SCL::AST::Expression *start, SCL::AST::Expression *end) {
			this->start = start;
			this->end = end;
		}

		SCL::Type *RangeIterator::compute(SCL::Context * ctx) {
			SCL::Type *startT = start->compute(ctx);
			SCL::Type *endT = end->compute(ctx);

			if(!(startT->getName() == "integer" || startT->getName() == "float")) {
				throw new std::logic_error("start must be an integer or a float");
			}

			if(!(endT->getName() == "integer" || endT->getName() == "float")) {
				throw new std::logic_error("end must be an integer or a float");
			}

			if(startT->getName() == "float" || endT->getName() == "float") {
				return new SCL::Types::IteratorFloat(
					startT->getName() == "float" ? ((SCL::Types::Float *)startT)->getValue() : ((SCL::Types::Integer *)startT)->getValue(),
					endT->getName() == "float" ? ((SCL::Types::Float *)endT)->getValue() : ((SCL::Types::Integer *)endT)->getValue()
				);
			}

			return new SCL::Types::IteratorInteger(
				((SCL::Types::Integer *)startT)->getValue(),
				((SCL::Types::Integer *)endT)->getValue()
			);
		}

		void RangeIterator::printAST(int level) {
			std::cout << std::string(level * 2, ' ') << "expression.rangeIterator\n";
			
			std::cout << std::string((level+1) * 2, ' ') << "start:\n";
			start->printAST(level+2);

			std::cout << std::string((level+1) * 2, ' ') << "end:\n";
			end->printAST(level+2);
		}
	}
}