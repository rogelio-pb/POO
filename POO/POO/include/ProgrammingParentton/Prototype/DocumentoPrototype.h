#pragma once
#include "Prerequisites.h"
#include"ProgrammingParentton/Prototype/Documento.h"

class DocumentoPrototype : public Documento {
	public:
	DocumentoPrototype() = default;
	~DocumentoPrototype() = default;
	Documento*
		clone() const override {//metodo para clonar el objeto
		DocumentoPrototype* copy = new DocumentoPrototype();//retorna una nueva instancia del objeto
		copy->config(contenido);//configura el nuevo objeto con el valor del objeto original
		return copy;
	}
	void
		config(const std::string _value) override {//metodo para configurar el objeto
		this->contenido = _value;//asigna el valor al atributo
	}
	void
		info() const override {//metodo para mostrar la informacion del objeto
		std::cout << "DocumentoPrototype: " << contenido << std::endl;//muestra el valor del atributo
	}
};
