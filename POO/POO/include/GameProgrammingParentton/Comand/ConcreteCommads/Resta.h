#pragma once
#include"Prerequisites.h"
#include"GameProgrammingParentton/Comand/Operacion.h"

class 
	Resta : public Operacion {
public:
	Resta
	(int& _a, int& _b) : a(_a), b(_b), resultado(0) {}
	
	~Resta() = default;
	void ejecutar() override {
		resultado = a - b;
		std::cout << "Resultado de la resta: " << resultado << std::endl;
	}
	void deshacer() override {
		std::cout << "Deshaciendo la resta, resultado anterior: " << resultado << std::endl;
		resultado = 0;
	}
private:
	int& a;
	int& b;
	int resultado;
};

