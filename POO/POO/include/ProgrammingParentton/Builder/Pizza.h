#pragma once
#include "Prerequisites.h"

class
	Pizza {
public:
	Pizza() = default;// Constructor por defecto
	~Pizza() = default;// Destructor por defecto
	void
		addIngredient(const std::string& ingredient) {// Agrega un ingrediente a la pizza
		ingredients.push_back(ingredient);// Agrega el ingrediente al vector de ingredientes
	}
	void
		addMasa(const std::string& masas) {
		masa.push_back(masas);// Agrega el ingrediente al vector de ingredientes
	}
	void 
		addSalsa(const std::string& salsas) {
		salsa.push_back(salsas);
	}
	void 
		addQueso(const std::string& quesos) {
		queso.push_back(quesos);// Agrega el ingrediente al vector de ingredientes
	}
	void 
		addTipoPizza(const std::string& tipos) {
		tipo.push_back(tipos);// Agrega el ingrediente al vector de ingredientes
	}
	void // Muestra los tipos de pizza
		showTipoPizza() const {
		std::cout << "Pizza tipo: ";
		for (const auto& tip : tipo) {
			std::cout << tip << " ";
		}
		std::cout << std::endl;
	}
	void// muestra los quesos de la pizza
		showQueso() const {
		std::cout << "Pizza queso: ";
		for (const auto& que : ingredients) {
			std::cout << que << " ";
		}
		std::cout << std::endl;
	}
		void // Muestra las salsas de la pizza
		showSalsa() const {
		std::cout << "Pizza salsa: ";
		for (const auto& sal : salsa) {
			std::cout << sal << " ";
		}
		std::cout << std::endl;
	}
	void// Muestra las masas de la pizza
		showMasa() const {
		std::cout << "Pizza masa: ";
		for (const auto& mas : masa) {
			std::cout << mas << " ";
		}
		std::cout << std::endl;
	}
	void// Muestra los ingredientes de la pizza
		showIngredients() const {
		std::cout << "Pizza ingredientes: ";
		for (const auto& ingredient : ingredients) {	
			std::cout << ingredient << " ";
		}
		std::cout << std::endl;
	}
private:
	std::vector<std::string> ingredients;// atributo que almacena los ingredientes de la pizza
	std::vector<std::string> masa;// atributo que almacena las masas
	std::vector<std::string> salsa;// atributo que almacena las salsas
	std::vector<std::string> queso;// atributo que almacena los quesos
	std::vector<std::string> tipo;// atributo que almacena los tipos de pizza
};
