#pragma once
#include "Prerequisites.h"

// Clase abstracta Mueble
class Mueble {
	public:
	virtual void descripcion() const = 0; // Método virtual puro para describir el mueble
	virtual void color() const = 0;// Método virtual puro para describir el color del mueble
	virtual ~Mueble() = default; // Destructor virtual por defecto
};
