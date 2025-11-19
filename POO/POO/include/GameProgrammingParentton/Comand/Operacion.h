#pragma once

class
	Operacion {
protected:
	Operacion() = default;
	~Operacion() = default;

public:
	virtual void ejecutar() = 0;
	virtual void deshacer() = 0;
};
