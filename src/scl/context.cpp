#include "scl/context.hpp"
#include "scl/types/undefined.hpp"
#include "scl/ast/variable.hpp"
#include "scl/type.hpp"

namespace SCL {
	/*Context::Context(SCL::Scope *scope) {
		this->parent = NULL;
		this->scope = scope;
	}

	Context::Context(Context *parent, SCL::Scope *scope) {
		this->parent = parent;
		this->scope = scope;
	}*/

	Context::Context() {
		this->parent = NULL;
	}

	Context::Context(Context *parent) {
		this->parent = parent;
	}

	void Context::setValue(SCL::AST::Variable *variable, SCL::Type *type) {
		setValue(variable->getName(), type);
	}

	SCL::Type *Context::getValue(SCL::AST::Variable *variable) {
		return getValue(variable->getName());
	}

	void Context::setValue(std::string name, SCL::Type *type) {
		Context *s = this;
		while(s != NULL) {
			if(s->variables.find(name) != s->variables.end()) {
				s->variables[name] = type;
				return;
			}else {
				s = s->parent;
			}
		}
		
		this->variables[name] = type;
	}

	SCL::Type *Context::getValue(std::string name) {
		Context *s = this;
		while(s != NULL) {
			std::map<std::string, SCL::Type *>::iterator iter = s->variables.find(name);
			if(iter != s->variables.end()) {
				return iter->second;
			}else {
				s = s->parent;
			}
		}
		return SCL::Types::Undefined::getUndefined();
	}
}