#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Decorator/Decorator.h"

class
	DecoratorConcretoB : public Decorator // Clase DecoratorConcretoA que extiende la clase Decorator y agrega funcionalidad adicional
{
public:
	DecoratorConcretoB(Componente* _componente) : Decorator(_componente) {}
	~DecoratorConcretoB() = default;
	void
		operacion() override {
		Decorator::operacion(); // Llama a la operacion del componente envuelto
		std::cout << "Operacion del Decorator Concreto B con exito" << std::endl;
	}
};
