#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/AbstractFactory/Mueble.h"

//Hereda de la clase abstracta Mueble
class
	Silla : public Mueble {
public:
	void //Implementa el metodo descripcion de la clase abstracta Mueble
		descripcion() const override  {
		std::cout << "Soy una silla" << std::endl;
	}
		void //Implementa el metodo color de la clase abstracta Mueble
		color() const override{
			std::cout << "Soy de color rojo" << std::endl;	
		}
};
