#include "scl/context.hpp"
#include "scl/types/undefined.hpp"
#include "scl/ast/variable.hpp"
#include "scl/type.hpp"
#include "scl/types/function.hpp"

namespace SCL {
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










	void Context::declareFunction(SCL::AST::Variable *variable, SCL::Types::Function *func) {
		declareFunction(variable->getName(), func);
	}

	SCL::Types::Function *Context::getFunction(SCL::AST::Variable *variable) {
		return getFunction(variable->getName());
	}

	void Context::declareFunction(std::string name, SCL::Types::Function *func) {
		Context *s = this;
		while(s != NULL) {
			if(s->functions.find(name) != s->functions.end()) {
				s->functions[name] = func;
				return;
			}else {
				s = s->parent;
			}
		}
		
		this->functions[name] = func;
	}

	SCL::Types::Function *Context::getFunction(std::string name) {
		Context *s = this;
		while(s != NULL) {
			std::map<std::string, SCL::Types::Function *>::iterator iter = s->functions.find(name);
			if(iter != s->functions.end()) {
				return iter->second;
			}else {
				s = s->parent;
			}
		}

		throw new std::logic_error("function not found");
	}
}