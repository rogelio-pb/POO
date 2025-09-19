#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class
	UsuarioBancario {
public:
	UsuarioBancario(CuentaBancaria cuenta) {//Constructor que recibe una cuenta bancaria
		m_cuenta = cuenta;//Inicializamos la cuenta bancaria
		m_nombreUsuario = m_cuenta.m_propietario;//Inicializamos el nombre del usuario
		m_antiguedad.getFecha();//Inicializamos la fecha de antiguedad
		m_cashBack = m_cuenta.consultarSaldo() * 0.01; //Inicializamos el cashBack
		m_uniquePoints = 5;//Inicializamos los puntos unicos
	}//Constructor que recibe una cuenta bancaria

	~UsuarioBancario() = default;

	CuentaBancaria&//Es el metodo para consultar la cuenta bancaria
		getCuenta() {//Este metodo es para obtener la cuenta bancaria
		return m_cuenta;//Retornamos la cuenta bancaria
	}

	void setCashBack(double cashBack) {//Metodo para establecer el cashBack al usiuario
		m_cashBack = cashBack;//Establecemos el cashBack
	}

private://Atributos privados
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	std::vector<int> m_historialTransacciones;
	Fecha m_antiguedad;
	int m_cashBack; // 1% 3% 5%
	int m_uniquePoints;
	
}; 
