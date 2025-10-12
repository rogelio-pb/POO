#pragma once
#include "Prerequisites.h"
#include  "ProgrammingParentton/AbstractFactory/productoA.h"

//Producto A1 concreto sirve para crear un tipo especifico de producto A 
class
	productoA1 : public productoA {//hereda de la clase abstracta productoA
public:
	void //metodo que implementa la clase abstracta
		operacionA() const override;//metodo que implementa la clase abstracta productoA
	
};
