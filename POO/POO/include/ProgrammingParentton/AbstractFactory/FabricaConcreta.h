#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/AbstractFactory/fabricaAbstracta.h"
#include "ProgrammingParentton/AbstractFactory/productoA1.h"
#include "ProgrammingParentton/AbstractFactory/productoB1.h"

class FabricaConcreta : public fabricaAbstracta {
	productoA* crearProductoA() const override {
		return new productoA1();
	}
	productoB* crearProductoB() const override {
		return new productoB1();
	}
};
	

