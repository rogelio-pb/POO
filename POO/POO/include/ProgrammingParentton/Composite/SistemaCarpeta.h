#pragma once
#include "Prerequisites.h"
#include "ProgrammingParentton/Composite/Carpeta.h"
#include "ProgrammingParentton/Composite/Sistema.h"

class
	SistemaCarpeta : public Sistema, public Carpeta {
public:// Public section
	SistemaCarpeta() = default;
	~SistemaCarpeta() = default;
	void
		agregarSistema(Sistema* sistema) {
		sistemas.push_back(sistema);
	}
	void
		mostrar() override {
		Carpeta::mostrar();
		std::cout << "Contenido de la Carpeta:" << std::endl;
		for (Sistema* sistema : sistemas) {
			sistema->mostrar();
		}
	}
private:// Private section
	std::vector<Sistema*> sistemas;
};
