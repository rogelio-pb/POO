#pragma once
#include"Prerequisites.h"

class
	CuentaBancaria {
private:
	double saldo;

public:
	CuentaBancaria()=default;
		~CuentaBancaria() = default;
		std::string propietario;

     protected:
			int numeroCuenta=123;

public:
	void consultarSaldo() {
		
		std::cout << "Ingrese el saldo inicial: $"<< std::endl;
		std::cin >> saldo;
				std::cout << "Saldo actual: $" << saldo << std::endl;	
			}
	void aplicarInteresPublico(double tasa) {
		calcularInteres(tasa);
	}
	void mostrarDatosCuenta() const {
		std::cout << "Propietario: " << propietario << std::endl;
		std::cout << "Número de cuenta: " << numeroCuenta << std::endl;
		std::cout << "Saldo: $" << saldo << std::endl;
	}
	void Transaccion(double monto) {
		realizarTransaccion(monto);
	}
private:
	void calcularInteres(double tasaInteres) {
		double interes = saldo * tasaInteres / 100;
		saldo += interes;
		std::cout << "Interes calculado: $" << interes << std::endl;
	}
	protected:
		void realizarTransaccion(double monto) {
			if (monto > 0) {
				saldo += monto;
				std::cout << "Depósito realizado: $" << monto << std::endl;
				std::cout << "Nuevo saldo: $" << saldo << std::endl;
			}
			else if (monto < 0 && saldo + monto >= 0) {
				saldo += monto;
				std::cout << "Retiro realizado: $" << -monto << std::endl;
				std::cout << "Nuevo saldo: $" << saldo << std::endl;
			}
			else {
				std::cout << "Transacción inválida o fondos insuficientes." << std::endl;
			}
		}
	
};
