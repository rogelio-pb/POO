#pragma once
#include "GameProgrammingParentton/Comand/Command.h"
#include "GameProgrammingParentton/Comand/Invoker/Luz.h"

class
	ComandoEncender : public Command {
public:
	ComandoEncender(Luz& _luz) : luz(_luz) {}
	~ComandoEncender() = default;

	void ejecutable() override {
		luz.encender();
	}
	void deshacer() override {
		luz.apagar();
	}
private:
	Luz& luz;
};

