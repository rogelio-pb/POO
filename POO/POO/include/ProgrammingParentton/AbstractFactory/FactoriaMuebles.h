#pragma once
#include "Prerequisites.h"

class Mesa;
class Silla;

// Interfaz de la f�brica abstracta
class FactoriaMuebles {
	public:
	virtual Mesa* crearMesa() const = 0; // M�todo para crear una mesa
	virtual Silla* crearSilla() const = 0; // M�todo para crear una silla
	virtual ~FactoriaMuebles() = default; // Destructor virtual por defecto
};
