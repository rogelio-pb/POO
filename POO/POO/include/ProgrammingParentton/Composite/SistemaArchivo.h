#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Composite/Sistema.h"
#include "ProgrammingParentton/Composite/Archivo.h"

class
	SistemaArchivo : public Sistema {
public:// Public section
	SistemaArchivo() = default;
	~SistemaArchivo() = default;

	void
		operacion() override {
		std::cout << "Sistema de Archivos:" << std::endl;
		Sistema::operacion();
	}
};
