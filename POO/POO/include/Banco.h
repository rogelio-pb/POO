#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBanco.h"
class
	Banco {
public:
	Banco() = default;
	~Banco() = default;

	UsuarioBancario
		nuevoUsuario(CuentaBancaria cuenta) {
		UsuarioBancario usuario(cuenta);
		return usuario;
	}

	// Metodo para acceder a la transferencia protegida de la clase base
	void
		realizarTransferencia(UsuarioBancario& cuentaOrigen,
			UsuarioBancario& cuentaDestino,
			double monto,
			int noRef) {
		if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {
			cuentaOrigen.getCuenta().consultarSaldo() -= monto;
			cuentaDestino.getCuenta().consultarSaldo() += monto;
			std::cout << "Transferencia de " << monto << " de la cuenta "
				<< cuentaOrigen.getCuenta().getNumeroCuenta() << " a la cuenta "
				<< cuentaDestino.getCuenta().getNumeroCuenta()
				<< " realizada con exito." << " Numero de Referencia: " << noRef << std::endl;
		}
		else {
			std::cout << "Error en la transferencia: monto invalido o saldo insuficiente." << std::endl;
		}
	}
	void realizarCompra(UsuarioBancario& cuenta, std:: string compra, double monto, float noRef) {
		if (monto > 0 && monto <= cuenta.getCuenta().consultarSaldo()) {
			cuenta.getCuenta().consultarSaldo() -= monto;
			std::cout << "Compra de " << monto << " realizada con exito en la cuenta "
				<< cuenta.getCuenta().getNumeroCuenta()
				<< ". Numero de Referencia: " << noRef << std::endl;
			int m_cashBack = monto * 0.01; // 1% por defecto
			cuenta.getCuenta().consultarSaldo() += m_cashBack;
			std::cout << "Cashback de " << m_cashBack << "$ aplicado. Nuevo saldo: "
				<< cuenta.getCuenta().consultarSaldo() << std::endl;	
		}
		else {
			std::cout << "Error en la compra: monto invalido o saldo insuficiente." << std::endl;
		}
	}

};