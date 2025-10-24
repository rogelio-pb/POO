#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Decorator/Componente.h"

class ComponenteConcreto: public Componente{  // Abstract Component clase abstracta que sirve como interfaz para los componentes concretos y decoradores{
public:// Public section
	ComponenteConcreto() = default;
	~ComponenteConcreto() = default;

	virtual void
		operacion() {
		std::cout << "Operacion del Componente Concreto con exito" << std::endl;
	}

};
