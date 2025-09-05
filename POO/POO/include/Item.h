#pragma once
#include "Prerequisites.h"

class Item 
{
public:
	Item(const std::string& name, int quantity) : m_name(name), m_quantity(quantity) {}
	~Item ()= default;
	std::string
		getName() const {
		return m_name;
	}

	int
		getQuantity() const {
		return m_quantity;
	}
	void
		remove(int quantity) {
		if (quantity <= m_quantity) {
			m_quantity -= quantity;
		}
		else {
			std::cout << "No hay suficiente cantidad del item: " << m_name << std::endl;
		}
		//m_quantity -= (quantity <= m_quantity) ? quantity : 0; otra forma de hac
        // Agrega este método a la clase Item
	}
	void add(int quantity) {
		m_quantity += quantity;
	}
private:
	std::string m_name;
	int m_quantity;
};
