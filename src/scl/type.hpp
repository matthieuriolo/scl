#ifndef __SCL_TYPE__
#define __SCL_TYPE__

#include "scl/context.hpp"

namespace SCL {
	namespace Types {
		class Boolean;
		class Iterator;
	}
	
	class Type {
		public:
			virtual std::string getName() = 0;
			virtual std::string stringify() = 0;
			virtual int compare(Type *right) = 0;
			virtual SCL::Types::Iterator *iterator();

			virtual SCL::Types::Boolean *toBoolean() = 0;

			virtual Type *getAccess(Type *key);
			virtual Type *getRange(Type *start, Type *end);
			virtual void setAttribute(Type *key, Type *value);

			virtual Type *operator_plus(SCL::Context *ctx, Type *right);
			virtual Type *operator_minus(SCL::Context *ctx, Type *right);
			virtual Type *operator_asterisk(SCL::Context *ctx, Type *right);
			virtual Type *operator_slash(SCL::Context *ctx, Type *right);
			virtual Type *operator_caret(SCL::Context *ctx, Type *right);
			virtual Type *operator_and(SCL::Context *ctx, Type *right);
			virtual Type *operator_or(SCL::Context *ctx, Type *right);

			static int comparison(Type *left, Type *right);

			static long getIndexFromNegative(long index, long length);


			virtual ~Type() = 0;
	};
}

#endif