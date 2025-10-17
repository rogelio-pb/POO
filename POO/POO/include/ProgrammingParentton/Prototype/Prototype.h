#pragma once
#include "Prerequisites.h"

class
	Prototype {//clase abstracta
public:
	Prototype() = default;
	~Prototype() = default;

	virtual Prototype* clone() const = 0;//metodo para clonar el objeto
	virtual void config(const std::string _value) = 0;//metodo para configurar el objeto
	virtual void info() const = 0;//metodo para mostrar la informacion del objeto
};