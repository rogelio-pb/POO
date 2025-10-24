#pragma once

class Componente // Abstract Component clase abstracta que sirve como interfaz para los componentes concretos y decoradores
{
public:// Public section
	Componente()= default;
	~Componente()= default;

	virtual void
		operacion() = 0;//metodo para operar 

};

