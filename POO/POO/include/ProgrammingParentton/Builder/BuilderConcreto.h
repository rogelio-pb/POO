#pragma once
#include"Prerequisites.h"
#include"ProgrammingParentton/Builder/Builder.h"
#include"ProgrammingParentton/Builder/Producto.h"

class
	BuilderConcreto : public Builder {// Clase concreta que implementa el Builder
public:
	BuilderConcreto();/// Constructor sirve para inicializar el producto
	~BuilderConcreto() = default;// Destructor sirve para liberar memoria

	void buildPartA() override;//el override indica que estamos sobreescribiendo un metodo virtual puro
	void buildPartB() override;// Construye la parte B del producto
	Producto* getResult() override;// Devuelve el producto construido

private:
	Producto* producto;// Producto que se va a construir
};
