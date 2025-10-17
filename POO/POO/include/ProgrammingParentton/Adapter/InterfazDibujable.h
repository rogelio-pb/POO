#pragma once
#include "Prerequisites.h"

class
	dibujable {//Interfaz dibujable
public:
	dibujable() = default;//Constructor por defecto porque no se necesita inicializar nada
	~dibujable() = default;
	virtual void// Metodo puro virtual para dibujar
		dibujar() = 0;// Metodo puro virtual para dibujar se manda llamar en las clases que hereden de dibujable como CirculoAdapter y CuadroAdapter
};
