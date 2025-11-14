#pragma once
#include"Prerequisites.h"
#include"ProgrammingParentton/ChangeOfResponsability/Manejador.h"
class
	ManejadorConcretoc : public Manejador {
public:
	ManejadorConcretoc(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoc() = default;

	void manejarPeticion(int peticion) override {
		std::cout << "ManejadorConcretoc manejó la petición: " << peticion << std::endl;
	}
};
