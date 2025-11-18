#pragma once
#include "Prerequisites.h"

class
	Luz {
public:
	Luz() = default;
	~Luz() = default;

	void encender() {
		std::cout << "Luz encendida" << std::endl;
	}
	void apagar() {
		std::cout << "Luz apagada" << std::endl;
	}
};
