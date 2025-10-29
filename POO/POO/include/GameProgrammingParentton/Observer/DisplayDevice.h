#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Observer/Observer.h"

class DisplayDevice : public Observer// Observador concreto que representa un dispositivo de visualización
{
public:
	DisplayDevice()= default;
	~DisplayDevice()= default;

	void 
	onNotify(int _value) override {
		std::cout << "DisplayDevice: Actualizando la pantalla con la nueva temperatura. " <<
			_value << "Degree " << std::endl;
	}

};

