#pragma once
#include"Prerequisites.h"

class Producto {
public:// Clase abstracta y virtualizada, solo es consultada por las clases derivadas
	virtual void operacion() = 0;// Metodo puro virtual muestra 0 porque no tiene implementacion
	virtual ~Producto() = default;// Destructor virtual por defecto
};//asi debe ir por defecto la clase abstracta

//clase base para la fabrica
class Factory { //sirve para crear productos 
	public:
		virtual Producto* crearProducto(int tipo) = 0;// Metodo puro virtual para crear productos
	virtual ~Factory() = default;// Destructor virtual por defecto
};


//Productos concretos
class ProductoA : public Producto {// Clase concreta que implementa Producto 
	public:
		void operacion() override {// Implementacion del metodo operacion override especifica que sobreescribe un metodo virtual
			std::cout << "Operacion del Producto A" << std::endl;// Implementacion del metodo operacion
	}
};

//fabrica para crear productos A
class FactoryA : public Factory {// Clase concreta que implementa Factory
	public:
		Producto* crearProducto(int tipo) override {// Implementacion del metodo crearProducto de Factory y Producto
			return new ProductoA();// Crea y retorna un nuevo ProductoA para cualquier tipo 
		}
};