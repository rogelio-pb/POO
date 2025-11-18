#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Comand/Command.h"

class
	ControlRemoto {
public:
	ControlRemoto() = default;
	~ControlRemoto() = default;

	void
		ejecutableComando(Command* _comando) {
		_comando->ejecutable();
		m_historial.push_back(_comando);
	}

	void
		deshacerComando() {
		if (!m_historial.empty()) {
			Command* comando = m_historial.back();
			comando->deshacer();
			m_historial.pop_back();
		}
	}
private:
	std::vector<Command*> m_historial;
};
