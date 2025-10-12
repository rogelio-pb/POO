#pragma once
#include "Prerequisites.h"

class productoA;//forward declaration sirve para evitar include circulares
class productoB;//forward declaration sirve para evitar include circulares

//Interfaz de la fabrica abstracta
class fabricaAbstracta {
public:
	virtual productoA* crearProductoA() const = 0;//aqui mos ayuda el forward declaration
	virtual productoB* crearProductoB() const = 0;//aqui mos ayuda el forward declaration
	virtual ~fabricaAbstracta() = default;//destructor virtual por defecto para evitar fugas de memoria
};
