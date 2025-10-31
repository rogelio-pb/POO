#pragma once
#include"GameProgrammingParentton/Observer/Observer.h"
#include "Prerequisites.h"

class MessageApp 
	// Clase abstracta MessageApp que define la interfaz para las aplicaciones de mensajería
{

public:
	MessageApp() = default;
	~MessageApp() = default;

	void addObserver(Observer* observer) {// Metodo para agregar observadores
		observers.push_back(observer);
	}
	void setMessage(const int _message) {
		message = _message;
		notifyObservers();
	}
	void notifyObservers() {
		for (Observer* observer : observers) {
			observer->onNotify(message);
		}
	}
private:
	std::vector<Observer*> observers;
	int message;
	
};
