#pragma once
#include "ProgrammingParentton/Decorator/Componente.h"

class Decorator : public Componente // Clase Decorator que extiende la clase Componente y agrega funcionalidad adicional
{
public:
	Decorator(Componente* _componente) : componente(_componente) {}
	~Decorator() = default; 


	void
	operacion() override {
	componente->operacion(); // Llama a la operacion del componente envuelto
	}
private:
	Componente* componente; // Puntero al componente que se va a decorar
};

