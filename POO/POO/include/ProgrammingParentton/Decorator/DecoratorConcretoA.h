#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Decorator/Decorator.h"

class
	DecoratorConcretoA : public Decorator // Clase DecoratorConcretoA que extiende la clase Decorator y agrega funcionalidad adicional
{
public:
	DecoratorConcretoA(Componente* _componente) : Decorator(_componente) {}
	~DecoratorConcretoA() = default;
	void
		operacion() override {
		Decorator::operacion(); // Llama a la operacion del componente envuelto
		std::cout << "Operacion del Decorator Concreto A con exito" << std::endl;
	}
};
