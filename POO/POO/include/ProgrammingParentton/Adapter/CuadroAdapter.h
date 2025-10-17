#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Adapter/Circulo.h"
#include "ProgrammingParentton/Adapter/InterfazDibujable.h"

class
	CuadroAdapter : public dibujable {
public:
	
	CuadroAdapter(cuadrado* _cuadroNuevo) : cuadroNuevo(_cuadroNuevo) {}
	~CuadroAdapter() = default; 
	void// Implementacion del metodo dibujar que llama al metodo dibujarCuadrado
		dibujar() override {
		cuadroNuevo->dibujarCuadrado();
	}
private:
	cuadrado* cuadroNuevo;
};

