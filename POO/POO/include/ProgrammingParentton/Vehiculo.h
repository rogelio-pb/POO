#pragma once
#include "Prerequisites.h"

class Vehiculo {
public:
	virtual void descripcion() = 0; // Metodo puro virtual
	virtual ~Vehiculo() = default; // Destructor virtual por defecto

};

class factoriaVehiculos {
	public:
	virtual Vehiculo* crearVehiculo(int tipo) = 0; // Metodo puro virtual
	virtual ~factoriaVehiculos() = default; // Destructor virtual por defecto
};

class Coche : public Vehiculo {
	public:
	void descripcion() override {
		std::cout << "Soy un coche" << std::endl;
	}
};

class bicicleta : public Vehiculo {
	public:
	void descripcion() override {
		std::cout << "Soy una bicicleta" << std::endl;
	}
};

class FabricaCoches : public factoriaVehiculos {
	public:
	Vehiculo* crearVehiculo(int tipo) override {
		return new Coche();
	}
};
class FabricaBicicletas : public factoriaVehiculos {
	public:
	Vehiculo* crearVehiculo(int tipo) override {
		return new bicicleta();
	}
};
