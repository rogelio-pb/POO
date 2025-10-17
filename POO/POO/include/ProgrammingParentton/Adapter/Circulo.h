#pragma once
#include "Prerequisites.h"

class
	circulo {
public:
	circulo() = default;//Constructor por defecto porque no se necesita inicializar nada
	~circulo() = default;//Destructor por defecto porque no se necesita liberar nada
	void// Metodo para dibujar un circulo
		dibujarCirculo() {//Metodo para dibujar un circulo se llama en CirculoAdapter
		std::cout << "Dibujando un circulo" << std::endl;// Imprime en consola que se esta dibujando un circulo
	}
};
class//lo missmo para cuadrado
	cuadrado {
public:
	cuadrado() = default;
	~cuadrado() = default;
	void
		dibujarCuadrado() {
		std::cout << "Dibujando un cuadrado" << std::endl;
	}
};
