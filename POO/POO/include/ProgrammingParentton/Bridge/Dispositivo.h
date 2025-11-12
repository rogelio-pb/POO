#pragma once
#include"Prerequisites.h"

class Dispositivo {
	public:
	virtual void encender() = 0;
	virtual void apagar() = 0;
};

class TV :public Dispositivo {
	public:
	void encender() override {
		std::cout << "TV encendida" << std::endl;
	}
	void apagar() override {
		std::cout << "TV apagada" << std::endl;
	}
};

class Radio :public Dispositivo {
	public:
	void encender() override {
		std::cout << "Radio encendida" << std::endl;
	}
	void apagar() override {
		std::cout << "Radio apagada" << std::endl;
	}
};
class ControlRemoto {//Abstraccion
	protected:
	Dispositivo* dispositivo;
	public:
	ControlRemoto(Dispositivo* disp) : dispositivo(disp) {}
	virtual void encender() = 0;
	virtual void apagar() = 0;
};
class ControlRemotoBasico : public ControlRemoto {//Refinamiento de la abstraccion sirve como puente a la implementacion
	public:
	ControlRemotoBasico(Dispositivo* disp) : ControlRemoto(disp) {}
	void encender() override {
		dispositivo->encender();//apunta a la implementacion
	}
	void apagar() override {
		dispositivo->apagar();//puntero a la implementacion
	}
};