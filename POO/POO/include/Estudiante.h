#pragma once
#include"Prerequisites.h"

class
	Estudiante {
private:
	std::string nombre;
	int edad;

public:
	Estudiante() = default;
	~Estudiante() = default;
	void
		setEstudiante(const std::string& n, int e) {
		nombre = n;
		edad = e;	
	}
	void
		mostrarEstudiante() const {
		std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
	}

};