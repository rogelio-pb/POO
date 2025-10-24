#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Composite/Sistema.h"
#include "ProgrammingParentton/Composite/Archivo.h"

class
	SistemaArchivo : public Sistema, public Archivo {
public:// Public section
	SistemaArchivo(const std::string& _nombre) : nombre(_nombre) {}
	SistemaArchivo() = default;
	~SistemaArchivo() = default;

	void
	mostrar() override {
		Archivo::mostrar();
		std::cout << "Nombre del Archivo -> " << nombre << std::endl;
	}
private:// Private section
	std::string nombre = "ArchivoSinNombre";
};
