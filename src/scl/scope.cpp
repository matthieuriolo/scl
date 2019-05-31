#include "scl/scope.hpp"
#include "scl/types/undefined.hpp"
#include "scl/ast/variable.hpp"

namespace SCL {
	Scope::Scope() {
		parent = NULL;
	}

	Scope::Scope(Scope* parent) {
		this->parent = parent;
	}
	
	void Scope::setValue(SCL::AST::Variable *variable, SCL::Type *type) {
		setValue(variable->getName(), type);
	}

	SCL::Type *Scope::getValue(SCL::AST::Variable *variable) {
		return getValue(variable->getName());
	}

	void Scope::setValue(std::string name, SCL::Type *type) {
		Scope * s = this;
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

	SCL::Type *Scope::getValue(std::string name) {
		Scope * s = this;
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