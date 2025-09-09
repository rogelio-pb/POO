#pragma once
// Include standard libraries
#include <iostream>
#include <string>
#include <vector>
#include <ctime>


struct Fecha {
	int dia;
	int mes;
	int anio;

	void
		getFecha() {
		time_t t = time(0);   // get time now
		tm* now = localtime(&t);
		//crear la instancia de la estructura fecha
		dia = now->tm_mday;
		mes = 1 + now->tm_mon; // Los meses van de 0 a 11
		anio = 1900 + now->tm_year; // El año desde 1900
		//usamos la estructura fecha
		std::cout << "Fecha actual: " << toString() << std::endl;
	}
	std::string toString() const {
		return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
	}
};