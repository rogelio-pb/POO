#pragma once
#include "Prerequisites.h"

//Clase para productos A
class productoA {//clase abstracta
public://metodo virtual puro
	virtual void operacionA() const = 0;//metodo virtual puro para que las clases derivadas lo implementen
	virtual ~productoA() = default;//destructor virtual por defecto para evitar fugas de memoria
};

