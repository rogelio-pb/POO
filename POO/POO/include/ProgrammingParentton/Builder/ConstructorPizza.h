#pragma once
#include "ProgrammingParentton/Builder/Pizza.h"

class
	ConstructorPizza {// Clase abstracta Builder
public:
	ConstructorPizza() = default;// Constructor por defecto
	~ConstructorPizza() = default;// Destructor por defecto
	virtual void buildMasa() = 0;// Construye la masa de la pizza
	virtual void buildSalsa() = 0;// Construye la salsa de la pizza
	virtual void buildQueso() = 0;// Construye el queso de la pizza
	virtual void buildIngredientes() = 0;// Construye los ingredientes de la pizza
	virtual void buildTipoPizza() = 0;// Construye el tipo de pizza
	virtual Pizza* getPizza() = 0;// Devuelve la pizza construida
};
