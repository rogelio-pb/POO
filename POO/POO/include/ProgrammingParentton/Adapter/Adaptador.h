#pragma once
#include"Prerequisites.h"
#include"ProgrammingParentton/Adapter/InterfazNueva.h"
#include"ProgrammingParentton/Adapter/InterfazVieja.h"


class
	Adaptador : public InterfazNueva {
public:
	Adaptador(InterfazVieja* _interfazVieja) : interfazVieja(_interfazVieja) {}//Constructor que recibe una instancia de la interfaz vieja
	~Adaptador() = default;

	void// Implementacion del metodo nuevo que llama al metodo viejo
		metodoNuevo() override {
		std::cout << "Adaptando metodo nuevo a metodo viejo" << std::endl;
		interfazVieja->metodoViejo();
	}

private:
	InterfazVieja* interfazVieja;
};