#pragma once
#include "Prerequisites.h"
#include"ProgrammingParentton/Prototype/DocumentoPrototype.h"

class DocumentoTexto : public DocumentoPrototype {
	public:
		DocumentoTexto() = default;
		~DocumentoTexto() = default;
		Documento*
			clone() const override {//metodo para clonar el objeto
			DocumentoTexto* copy = new DocumentoTexto();//retorna una nueva instancia del objeto
			copy->config(contenido);//configura el nuevo objeto con el valor del objeto original
			return copy;
		}
		void
			config(const std::string _value) override {//metodo para configurar el objeto
			this->contenido = _value;//asigna el valor al atributo
		}
		void
			info() const override {//metodo para mostrar la informacion del objeto
			std::cout << "DocumentoTexto: " << contenido << std::endl;//muestra el valor del atributo
		}
};
