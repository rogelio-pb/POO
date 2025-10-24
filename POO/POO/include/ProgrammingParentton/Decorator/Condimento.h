#pragma once

class Condimento   // Clase Decorator que extiende la clase Componente y agrega funcionalidad adicional
{
public:
	Condimento() = default;
	~Condimento() = default;

	virtual void
		Decorador() = 0; //metodo para operar
};
