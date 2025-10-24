#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Decorator/Componente.h"
class
	Archivo: public Componente {
public:// Public section
	Archivo() = default;
	~Archivo() = default;
	void
		operacion() override{
		std::cout << "Soy una carpeta" << std::endl;
	}
};

class
	Carpeta: public Componente {
	Carpeta() = default;
	~Carpeta() = default;
	void
		operacion() override {
		std::cout << "Soy una carpeta" << std::endl;
	}
};
