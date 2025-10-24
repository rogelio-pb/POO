#pragma once
#include"Prerequisites.h"
#include "ProgrammingParentton/Decorator/Componente.h"

class// Composite class that can contain other components
	Composite : public Componente {
public:// Public section
	Composite() = default;
	~Composite() = default;
	void
		operacion() override {
		std::cout << "Operación en Composite" << std::endl;//Operación del composite
		for (Componente* child : children) {//Iterar sobre los hijos
			child->operacion();//Llamada recursiva a la operacion de cada hijo
		}
	}
	void
		add(Componente* componente) {//Agregar un componente hijo
		children.push_back(componente);//Agregar el componente al vector de hijos
	}
private: // Private section
	std::vector<Componente*> children;
};
