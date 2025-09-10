#pragma once
#include"Prerequisites.h"

class
	Circulo {
private:
	float radio;
	const float PI = 3.1416;
public:
	Circulo() = default;
	~Circulo() = default;
	void
		setRadio(float r) {
		radio = r;
	}
	float
		getArea() const {
		return PI * radio * radio;
	}
	float
		getPerimetro() const {
		return 2 * PI * radio;
	}
};