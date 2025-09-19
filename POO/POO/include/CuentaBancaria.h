#pragma once
#include "Prerequisites.h"

class
	CuentaBancaria {//creamos la clase cuenta bancaria
public:
	CuentaBancaria() = default;
	CuentaBancaria(std::string propietario, int numCuenta, double saldoInicial) ://Constructor de la clase con parametros definidos
		m_propietario(propietario), m_numeroCuenta(numCuenta), m_saldo(saldoInicial) {//Definimos los atributos de la clase
	}
	~CuentaBancaria() = default;

	double&//Es el metodo para consultar el saldo de la cuenta bancaria
		consultarSaldo() {
		std::cout << "Saldo actual de " << m_propietario
			<< " (Cuenta " << m_numeroCuenta << "): " << m_saldo << std::endl;
		return m_saldo;
	}

	void
		mostrarInteresCalculado() {
		double tasaInteres = 5.0; // Tasa de interes del 5%
		double interes = calcularInteres(tasaInteres);//Llamamos al metodo calcular interes
		std::cout << "Interes calculado al " << tasaInteres << "% sobre el saldo de "
			<< m_saldo << " es: " << interes << std::endl;
	}//Este metodo es para mostrar el interes calculado

	int
		getNumeroCuenta() const {
		return m_numeroCuenta;//Metodo para obtener el numero de cuenta
	}

private:
	double
		calcularInteres(double tasaInteres) {
		return m_saldo * tasaInteres / 100.0;//Metodo para calcular el interes
	}

public:
	std::string m_propietario;//Atributo publico para el propietario de la cuenta
protected:
	int m_numeroCuenta;//Atributo protegido para el numero de cuenta
private:
	double m_saldo;//Atributo privado para el saldo de la cuenta
	
};