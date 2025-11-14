#pragma once
#include"Prerequisites.h"

class 
	Manejador {
public:
	Manejador(Manejador* _siguiente, const std::string _name) : siguiente(_siguiente), name(_name) {}
	~Manejador() = default;

	virtual void manejarPeticion(int peticion) {
		if (siguiente) {
			siguiente->manejarPeticion(peticion);
		}
	}
private:
	Manejador* siguiente;
	std::string name;

};