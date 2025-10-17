#pragma once
#include "ProgrammingParentton/Builder/ConstructorPizza.h"

class
	DirectorPizza {// Clase que dirige la construccion del producto
public:
	DirectorPizza(ConstructorPizza* constructor) : constructor(constructor) {}// agarra el constructor de clase abstracta BuilderPizza que se llama constructor 
	~DirectorPizza() = default;// Destructor por defecto
	void construct() {// Metodo que construye el producto
		if (constructor) {
			constructor->buildMasa();// Construye la masa de la pizza
			constructor->buildSalsa();// Construye la salsa de la pizza
			constructor->buildQueso();// Construye el queso de la pizza
			constructor->buildIngredientes();// Construye los ingredientes de la pizza
			constructor->buildTipoPizza();// Construye el tipo de pizza
		}
	}
private:
	ConstructorPizza* constructor;// Builder que se va a utilizar para construir el producto
};
