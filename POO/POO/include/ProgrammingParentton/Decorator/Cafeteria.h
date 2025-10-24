#pragma once
#include "Prerequisites.h"

class Cafeteria
{
public:
	Cafeteria()= default;
	~Cafeteria()= default;

	virtual void
		prepararCafe() {
		std::cout << "cafe preparado" << std::endl;
	}

};


