#pragma once

class Producto;

class
	Builder {
public:
	Builder() = default;
	~Builder() = default;

	virtual void buildPartA() = 0;// Construye la parte A del producto 
	virtual void buildPartB() = 0;// Construye la parte B del producto
	virtual Producto* getResult() = 0;// Devuelve el producto construido
};
