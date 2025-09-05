#pragma once
#include"Prerequisites.h"
#include"Item.h"

class
	Inventory {

public:
	Inventory() = default;
	~Inventory() = default;
	void
		addItem(const std::string& name, int quantity) {
		//Se buscara que exista el elemento a agregar para incrementar su cantidad
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.add(quantity);
				return;
			}
		}
		//Si no existe se agrega un nuevo item
		m_items.emplace_back(name, quantity);

	}
	void
		showInventory() const {
		//verificar que no esta vacio el inventario
		if (m_items.empty()) {
			std::cout << "El inventario esta vacio." << std::endl;
			return;
		}
		std::cout << "Inventario:" << std::endl;
		for (const auto& item : m_items) {
			std::cout << "- " << item.getName() << ": " << item.getQuantity() << std::endl;
		}
	}
	void
		useItem(const std::string& name, int quantity) {
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.remove(quantity);
				//Si la cantidad llega a cero se elimina el item del inventario
				if (item.getQuantity() == 0) {
					//m_items.erase(std::remove(m_items.begin(), m_items.end(), item), m_items.end());
				}
				std::cout << "Usaste " << quantity << " de " << name << std::endl;
				return;
			}
		}
		std::cout << "No tienes " << name << " en tu inventario." << std::endl;
	}


private:
	std::vector<Item> m_items;

};

