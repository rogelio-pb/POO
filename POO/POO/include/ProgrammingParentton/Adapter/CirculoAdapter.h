#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Adapter/Circulo.h"
#include "ProgrammingParentton/Adapter/InterfazDibujable.h"

class
	CirculoAdapter : public dibujable {
public:
	CirculoAdapter(circulo* _circuloNuevo) : circuloNuevo(_circuloNuevo) {}//Constructor que recibe una instancia de circulo porque circulo no implementa dibujable
	~CirculoAdapter() = default; 
	
	void// Implementacion del metodo dibujar que llama al metodo dibujarCirculo
		dibujar() override {// Llama al metodo dibujarCirculo del objeto circulo
		circuloNuevo->dibujarCirculo();// Llama al metodo dibujarCirculo del objeto circulo
	}
private:
	circulo* circuloNuevo;// Puntero al objeto circulo que se adapta
};
