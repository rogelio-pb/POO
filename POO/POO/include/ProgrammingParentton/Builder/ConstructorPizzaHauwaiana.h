#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Builder/ConstructorPizza.h"
#include "ProgrammingParentton/Builder/Pizza.h"

class ConstructorPizzaHauwaiana : public ConstructorPizza {// Clase concreta que implementa el Builder
public:
	ConstructorPizzaHauwaiana();/// Constructor sirve para inicializar el 
	~ConstructorPizzaHauwaiana() = default;// Destructor sirve para liberar memoria

	void buildMasa() override;//el override indica que estamos sobreescribiendo un metodo virtual puro
	void buildSalsa() override;// Construye la parte B del producto
	void buildQueso() override;// Devuelve el producto construido
	void buildIngredientes() override;// Devuelve el producto construido
	void buildTipoPizza() override;// Devuelve el producto construido
	Pizza* getPizza() override;// Devuelve el producto construido

private:
	Pizza* pizza;// Producto que se va a construir
};
