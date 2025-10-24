#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Decorator/Componente.h"

class 
	Sistema: public Componente {
public:
	Sistema() = default;
	~Sistema() = default;
	void
		operacion() override {
		std::cout << "Soy el sistema de archivos" << std::endl;
		for (auto& elemento : elementos) {
			elemento->operacion();
		}
	}
		void
			addElemento(Componente * elemento) {
			elementos.push_back(elemento);
		}
private:
	std::vector<Componente*> elementos;
	
	};


