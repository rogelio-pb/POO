#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Proxy/Sujeto.h"
#include "ProgrammingParentton/Proxy/SujetoReal.h"

class Proxy : public Sujeto // Clase Proxy que controla el acceso al SujetoReal
{
public:
	Proxy() : sujetoReal(nullptr) {}
	~Proxy() = default;
	void request()
		override {
		if (sujetoReal == nullptr) {
			sujetoReal = new SujetoReal();
		}
		std::cout << "Proxy: Control de acceso al SujetoReal." << std::endl;
		sujetoReal->request();
	}
private:
	SujetoReal* sujetoReal;
};
