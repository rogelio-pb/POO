#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Prototype/Prototype.h"

class
	PrototypeConcreto : public Prototype {//clase concreta que implementa la clase abstracta
public:
	PrototypeConcreto() = default;
	~PrototypeConcreto() = default;

	Prototype*
		clone() const override {//metodo para clonar el objeto
		PrototypeConcreto* copy = new PrototypeConcreto();//retorna una nueva instancia del objeto
		copy->config(value);//configura el nuevo objeto con el valor del objeto original
		return copy;
	}
	void
		config(const std::string value) override {//metodo para configurar el objeto
		this->value = value;//asigna el valor al atributo
	}
	void
		info() const override {//metodo para mostrar la informacion del objeto
		std::cout << "PrototypeConcreto: " << value << std::endl;//muestra el valor del atributo
	}
private:
	std::string value;

};