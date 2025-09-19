#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBanco.h"
class
	Banco {//Clase banco que maneja las operaciones bancarias
public://Constructor y destructor por defecto
	Banco() = default;
	~Banco() = default;

	UsuarioBancario 
		nuevoUsuario(CuentaBancaria cuenta) {//Metodo para crear un nuevo usuario bancario
		UsuarioBancario usuario(cuenta);//Creamos un nuevo usuario bancario
		return usuario;
	}
	double cashBack(COMPRAS Comercio, double _monto) {//Metodo para calcular el cashBack
		double retorno = 0.0;		// Inicializamos el retorno en 0.0
		switch (Comercio) { //es el switch para determinar el tipo de comercio
	case TELECOMUNICACIONES:
		retorno = _monto * 0.01; // 1% de cashback
		break;
	case RESTAURANTES:
		retorno = _monto * 0.02; // 2% de cashback
		break;
	case FARMACIAS:
		retorno = _monto * 0.03; // 3% de cashback
		break;
	case SUPERMERCADO:
		retorno = _monto * 0.01; // 1% de cashback
		break;
	default:
		break;
	}
	return retorno;
 }


	// Metodo para acceder a la transferencia protegida de la clase base
	void
		realizarTransferencia(UsuarioBancario& cuentaOrigen,//este metodo realiza la transferencia entre dos cuentas
			UsuarioBancario& cuentaDestino,//aqui se recibe la cuenta destino
			double monto,//aqui se recibe el monto a transferir
			int noRef) {		//aqui se recibe el numero de referencia
		if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {//verificamos que el monto sea mayor a 0 y menor o igual al saldo de la cuenta origen
			cuentaOrigen.getCuenta().consultarSaldo() -= monto;//restamos el monto al saldo de la cuenta origen
			cuentaDestino.getCuenta().consultarSaldo() += monto;//sumamos el monto al saldo de la cuenta destino
			std::cout << "Transferencia de " << monto << " de la cuenta "
				<< cuentaOrigen.getCuenta().getNumeroCuenta() << " a la cuenta "
				<< cuentaDestino.getCuenta().getNumeroCuenta()
				<< " realizada con exito." << " Numero de Referencia: " << noRef << std::endl;
		}
		else {
			std::cout << "Error en la transferencia: monto invalido o saldo insuficiente." << std::endl;
		}
	}
	void realizarCompra(UsuarioBancario& cuenta, std::string compra, double monto, float noRef) {//este metodo realiza la compra en una cuenta bancaria
		if (monto > 0 && monto <= cuenta.getCuenta().consultarSaldo()) {//aqui verificamos que el monto sea mayor a 0 y menor o igual al saldo de la cuenta
			cuenta.getCuenta().consultarSaldo() -= monto;//restamos el monto al saldo de la cuenta
			std::cout << "Compra de " << monto << " realizada con exito en la cuenta "
				<< cuenta.getCuenta().getNumeroCuenta()
				<< ". Numero de Referencia: " << noRef << std::endl;

			cuenta.setCashBack(cashBack(SUPERMERCADO, monto));//aqui se aplica el cashBack dependiendo del tipo de comercio
			std::cout << "Cashback aplicado: " << cashBack(SUPERMERCADO, monto) << std::endl;
		}
		else {
			std::cout << "Error en la compra: monto invalido o saldo insuficiente." << std::endl;
		}
	}

};