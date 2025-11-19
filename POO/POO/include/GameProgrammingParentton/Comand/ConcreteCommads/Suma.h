#pragma once
#include"Prerequisites.h"
#include"GameProgrammingParentton/Comand/Operacion.h"

class
	Suma : public Operacion {
public:
	Suma
	(int& _a, int& _b) : a(_a), b(_b), resultado(0) {}
	~Suma() = default;
	void ejecutar() override {
		resultado = a + b;
		std::cout << "Resultado de la suma: " << resultado << std::endl;
	}
	void deshacer() override {
		std::cout << "Deshaciendo la suma, resultado anterior: " << resultado << std::endl;
		resultado = 0;
	}
private:
	int& a;
	int& b;
	int resultado;
};
