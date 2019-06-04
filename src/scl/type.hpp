#ifndef __SCL_TYPE__
#define __SCL_TYPE__

#include <string>
#include "scl/context.hpp"
#include <iostream>
namespace SCL {
	class Type {
		public:
			virtual std::string getName() = 0;
			/*virtual std::string stringify(SCL::Context *ctx) = 0;
			virtual int compare(SCL::Context *ctx, Type *right) = 0;
			*/

			virtual std::string stringify() = 0;
			virtual int compare(Type *right) = 0;


			virtual Type *operator_plus(SCL::Context *ctx, Type *right);
			virtual Type *operator_minus(SCL::Context *ctx, Type *right);
			virtual Type *operator_asterisk(SCL::Context *ctx, Type *right);
			virtual Type *operator_slash(SCL::Context *ctx, Type *right);
			virtual Type *operator_caret(SCL::Context *ctx, Type *right);
			virtual Type *operator_and(SCL::Context *ctx, Type *right);
			virtual Type *operator_or(SCL::Context *ctx, Type *right);

			static int comparison(Type *left, Type *right);
	};
}

#endif