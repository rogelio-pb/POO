#pragma once
#include"Prerequisites.h"

class Implementacion {
public:
	virtual void operacionImpl() = 0;
};

class ImplementacionConcretaA : public Implementacion {
	public:
	void operacionImpl() override {
		std::cout << "Implementacion Concreta A" << std::endl;
	}
};
class ImplementacionConcretaB : public Implementacion {
	public:
	void operacionImpl() override {
		std::cout << "Implementacion Concreta B" << std::endl;
	}
};

class Abstraccion {
public:
	Abstraccion(Implementacion* imp) : implementacion(imp) {}
	virtual void operacion() = 0;
protected:
	Implementacion* implementacion;
};
class AbstraccionRefinada : public Abstraccion {
public:
	AbstraccionRefinada(Implementacion* imp) : Abstraccion(imp) {}

	void operacion() override {
		implementacion->operacionImpl();
	}
};
