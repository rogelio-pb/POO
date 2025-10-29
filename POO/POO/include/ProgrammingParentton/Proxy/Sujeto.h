#pragma once

class Sujeto // Interfaz Sujeto 
{
public:
	Sujeto()=default;
	~Sujeto()=default;

	virtual void request() = 0;

};
