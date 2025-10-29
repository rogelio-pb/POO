#pragma once

class Observer// Clase abstracta Observer que define la interfaz para los observadores
{
public:
	Observer()=default;
	~Observer()=default;

	virtual void onNotify(int _value) = 0;


};

