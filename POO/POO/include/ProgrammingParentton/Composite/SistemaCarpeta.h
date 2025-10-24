#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Composite/Archivo.h"
#include "ProgrammingParentton/Composite/Sistema.h"

class
	SistemaCarpeta : public Sistema {
public:// Public section
	SistemaCarpeta() = default;
	~SistemaCarpeta() = default;
	void
		operacion() override {
		std::cout << "Sistema de Carpetas:" << std::endl;
		Sistema::operacion();
	}
};
