#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Proxy/Sujeto.h"

class SujetoReal : public Sujeto // Clase concreta que implementa la interfaz Sujeto
{
public:// Constructor y destructor
	SujetoReal() = default;
	~SujetoReal() = default;
	void request() override {
		std::cout << "SujetoReal: Manejo de la solicitud real." << std::endl;// Realiza la operacion real aqui
	}
};
