#pragma once
#include"Prerequisites.h"
#include"GameProgrammingParentton/Comand/Operacion.h"

class
	Calculadora {
public:
	Calculadora() = default;
	~Calculadora() = default;
	void
		ejecutarOperacion(Operacion* _operacion) {
		_operacion->ejecutar();
		m_historial.push_back(_operacion);
	}
	void
		deshacerOperacion() {
		if (!m_historial.empty()) {
			Operacion* operacion = m_historial.back();
			operacion->deshacer();
			m_historial.pop_back();
		}
	}
private:
	std::vector<Operacion*> m_historial;
};
