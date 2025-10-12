#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/AbstractFactory/productoB.h"

//Producto B1 concreto
class productoB1 : public productoB {
public:
	void operacionB() const override;
};
