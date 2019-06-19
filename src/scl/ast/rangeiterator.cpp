#include "scl/ast/rangeiterator.hpp"
#include "scl/types/iteratorfloat.hpp"
#include "scl/types/iteratorinteger.hpp"

#include "scl/types/float.hpp"
#include "scl/types/integer.hpp"

namespace SCL {
	namespace AST {
		RangeIterator::RangeIterator(SCL::AST::Expression *start, SCL::AST::Expression *end, SCL::AST::Expression *increment) {
			this->start = start;
			this->end = end;
			this->increment = increment;
		}

		RangeIterator::RangeIterator(SCL::AST::Expression *start, SCL::AST::Expression *end) {
			this->start = start;
			this->end = end;
			this->increment = NULL;
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

			SCL::Type * incrementT = NULL;
			if(increment) {
				incrementT = increment->compute(ctx);
				if(!(incrementT->getName() == "integer" || incrementT->getName() == "float")) {
					throw new std::logic_error("increment must be an integer or a float");
				}
			}

			if(incrementT) {
				if(startT->getName() == "float" || endT->getName() == "float" || incrementT->getName() == "float") {
					return new SCL::Types::IteratorFloat(
						startT->getName() == "float" ? ((SCL::Types::Float *)startT)->getValue() : ((SCL::Types::Integer *)startT)->getValue(),
						endT->getName() == "float" ? ((SCL::Types::Float *)endT)->getValue() : ((SCL::Types::Integer *)endT)->getValue(),
						incrementT->getName() == "float" ? ((SCL::Types::Float *)incrementT)->getValue() : ((SCL::Types::Integer *)incrementT)->getValue()
					);
				}

				return new SCL::Types::IteratorInteger(
					startT->getName() == "float" ? ((SCL::Types::Float *)startT)->getValue() : ((SCL::Types::Integer *)startT)->getValue(),
					endT->getName() == "float" ? ((SCL::Types::Float *)endT)->getValue() : ((SCL::Types::Integer *)endT)->getValue(),
					incrementT->getName() == "float" ? ((SCL::Types::Float *)incrementT)->getValue() : ((SCL::Types::Integer *)incrementT)->getValue()
				);
			}else {
				if(startT->getName() == "float" || endT->getName() == "float") {
					return new SCL::Types::IteratorFloat(
						startT->getName() == "float" ? ((SCL::Types::Float *)startT)->getValue() : ((SCL::Types::Integer *)startT)->getValue(),
						endT->getName() == "float" ? ((SCL::Types::Float *)endT)->getValue() : ((SCL::Types::Integer *)endT)->getValue()
					);
				}

				return new SCL::Types::IteratorInteger(
					startT->getName() == "float" ? ((SCL::Types::Float *)startT)->getValue() : ((SCL::Types::Integer *)startT)->getValue(),
					endT->getName() == "float" ? ((SCL::Types::Float *)endT)->getValue() : ((SCL::Types::Integer *)endT)->getValue()
				);
			}
		}
	}
}