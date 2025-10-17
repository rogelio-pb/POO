#pragma once
#include "Prerequisites.h"

class InterfazNueva {
public:
	InterfazNueva() = default;
	~InterfazNueva() = default;

	virtual void metodoNuevo() {
		std::cout << "metodo de la interfaz nueva" << std::endl;
	}
};