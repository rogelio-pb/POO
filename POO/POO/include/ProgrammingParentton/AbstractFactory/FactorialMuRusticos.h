#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/AbstractFactory/FactoriaMuebles.h"
#include "ProgrammingParentton/AbstractFactory/Mesa.h"
#include "ProgrammingParentton/AbstractFactory/Silla.h"

class FactorialMuRusticos : public FactoriaMuebles {
	public:
	Mesa* crearMesa() const override {
		return new Mesa(); // sobreescribe el metodo crearMesa de la clase abstracta FactoriaMuebles para crear una mesa rustica
	}
	Silla* crearSilla() const override {
		return new Silla(); // sobreescribe el metodo crearSilla de la clase abstracta FactoriaMuebles para crear una silla rustica
	}
};
