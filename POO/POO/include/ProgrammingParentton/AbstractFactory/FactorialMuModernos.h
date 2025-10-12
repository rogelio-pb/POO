#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/AbstractFactory/FactoriaMuebles.h"
#include "ProgrammingParentton/AbstractFactory/Mesa.h"
#include "ProgrammingParentton/AbstractFactory/Silla.h"

//F�brica concreta para crear muebles modernos 
class FactorialMuModernos : public FactoriaMuebles {
	public:
	Mesa* crearMesa() const override {
		return new Mesa(); // Aqu� podr�as devolver una instancia de una clase MesaModerna que herede de Mesa
	}
	Silla* crearSilla() const override {
		return new Silla(); // Aqu� podr�as devolver una instancia de una clase SillaModerna que herede de Silla
	}
};