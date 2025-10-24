#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Decorator/Componente.h"

class
	Hoja : public Componente {
public:// Public section
	Hoja() = default;
	~Hoja() = default;
	void
		operacion() override {
		std::cout << "Operación en Hoja" << std::endl;
	}
};
