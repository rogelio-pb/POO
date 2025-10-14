#pragma once
#include "ProgrammingParentton/Builder/Builder.h"

class
	Director {
public:
	Director(Builder* builder) : builder(builder) {}// Constructor que recibe un Builder
	~Director() = default;// Destructor por defecto
	void construct() {// Metodo que construye el producto
		if (builder) {
			builder->buildPartA();// Construye la parte A del producto
			builder->buildPartB();// Construye la parte B del producto
		}
	}
private:
	Builder* builder;// Builder que se va a utilizar para construir el producto
};
