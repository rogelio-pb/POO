#pragma once
#include "Prerequisites.h"

class MiSingleton 
{
private:
	MiSingleton() : data(0) {} // Constructor privado
	~MiSingleton() = default; // Destructor

public:
	static MiSingleton* // Método para obtener la instancia única
		getInstance() {
		if (instance == nullptr) {
			instance = new MiSingleton();
		}
		return instance;
	}
	int 
		getData() const {
		return data;
	}
	void 
		setData(int value) {
		data = value;
	}
private:
	static MiSingleton* instance; // Instancia estática
	int data;
};