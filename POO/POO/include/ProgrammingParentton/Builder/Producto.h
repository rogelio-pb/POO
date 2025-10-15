#pragma once
#include "Prerequisites.h"

class
	Producto {
public:
	Producto() = default;// Constructor por defecto
	~Producto() = default;

	void
		addPart(const std::string& part) {// Agrega una parte al producto
		parts.push_back(part);// Agrega la parte al vector de partes si es necesario puedes validar que no se repita
	}
	void// Muestra las partes del producto
		showParts() const {
		std::cout << "Producto partes: ";
		for (const auto& part : parts) {
			std::cout << part << " ";
		}
	}
private:
	std::vector<std::string> parts;
};