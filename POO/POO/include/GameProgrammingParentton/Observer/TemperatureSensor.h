#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Observer/Observer.h"

class TemperatureSensor// Sujeto concreto que notifica a los observadores sobre cambios en la temperatura
{
public:
	TemperatureSensor()=default;
	~TemperatureSensor()=default;

	void addObserver(Observer* observer){
		observers.push_back(observer);
	}
	void setTemperature(int _temperature) {
		temperature = _temperature;
		notifyObservers();

	}
	void notifyObservers() {
		for (Observer* observer : observers) {
			observer->onNotify(temperature);
		}
	}

private:
	std::vector<Observer*> observers;
	int temperature;
};

