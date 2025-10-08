#pragma once
#include "Prerequisites.h"


class RegistroActividad
{
	private:
		std::vector<std::string> actividades;
public:
	void registrarActividad(const std::string& actividad) {
		actividades.push_back(actividad);

		}
		void mostrarActividades() const {
			std::cout << "Registro de Actividades:\n";
			for (const auto& actividad : actividades) {
				std::cout << "- " << actividad << std::endl;
			}
		}
};

