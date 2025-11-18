#pragma once
#include "GameProgrammingParentton/Comand/Command.h"
#include "GameProgrammingParentton/Comand/Invoker/Luz.h"

class
	ComandoApagar : public Command {
public:
	ComandoApagar(Luz& _luz) : luz(_luz) {}
	~ComandoApagar() = default;

	void ejecutable() override {
		luz.apagar();
	}
	void deshacer() override {
	
		luz.encender();
	}
private:
	Luz& luz;
};

