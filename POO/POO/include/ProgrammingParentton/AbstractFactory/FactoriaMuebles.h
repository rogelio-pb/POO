#pragma once
#include "Prerequisites.h"

class Mesa;
class Silla;

// Interfaz de la fábrica abstracta
class FactoriaMuebles {
	public:
	virtual Mesa* crearMesa() const = 0; // Método para crear una mesa
	virtual Silla* crearSilla() const = 0; // Método para crear una silla
	virtual ~FactoriaMuebles() = default; // Destructor virtual por defecto
};
