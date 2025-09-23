#pragma once 
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsuarioBanco.h"
#include "Banco.h"

// Clase Productos: Representa un producto que puede tener un usuario en el sistema del banco
class Productos {
public:
    // Constructor y destructor por defecto
    Productos() = default;
    ~Productos() = default;

    // Atributos b�sicos de un producto
    int costo;                // Precio del producto
    std::string descripcion;  // Descripci�n breve del producto
    std::string modelo;       // Modelo o referencia del producto
	std::string consumible; // Indica si el producto es consumible o no
	std::string  fechaCaducidad; // Fecha de caducidad del producto (si aplica)
	int codigoProducto;    // C�digo �nico del producto


    // M�todos GET y SET para nombre del producto 
    NOMBREP getNombreP() const {
		return nombreP;// Retornamos el valor del atributo nombreP
    }
    void setNombreP(NOMBREP n) {
		nombreP = n;// Asignamos el valor del enum NOMBREP al atributo nombreP
    }

    // M�todos GET y SET para marca del producto
    MARCA getMarca() const {
		return marca;// Retornamos el valor del atributo marca
    }
    void setMarca(MARCA m) {
		marca = m;//    Asignamos el valor del enum MARCA al atributo marca
    }

    // M�todo para mostrar el nombre y la marca del producto
    void mostrarProducto() const {
        std::string nombreProducto;
        std::string marcaProducto;

        // Traducci�n del enum NOMBREP a un string legible
        switch (nombreP) {
		case AGUA://Si el nombre del producto es AGUA
			nombreProducto = "Agua";//Asignamos el string "Agua" a la variable nombreProducto
            break;
        case PAN:
            nombreProducto = "Pan";
            break;
        case PASTILLAS:
            nombreProducto = "Pastillas";
            break;
        case SHAMPOO:
            nombreProducto = "Shampoo"; 
            break;
        default:
            nombreProducto = "Desconocido";
            break;
        }

        // Traducci�n del enum MARCA a un string legible
        switch (marca) {
        case COCA_COLA:
            marcaProducto = "Coca Cola";
            break;
        case PEPSI:
            marcaProducto = "Pepsi";
            break;
        case SAVILE:
            marcaProducto = "Savile"; 
            break;
        case SABRITAS:
            marcaProducto = "Sabritas";
            break;
        default:
            marcaProducto = "Desconocida";
            break;
        }

        std::cout << "Producto: " << nombreProducto
            << ", Marca: " << marcaProducto << std::endl;
    }

    //Mostrar la informaci�n detallada del producto 
    void mostrarInfoP() {
        std::cout << "Descripcion: " << descripcion << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Costo: $" << costo << std::endl;
		std::cout << "Consumible: " << consumible << std::endl;
		std::cout << "Fecha de Caducidad: " << fechaCaducidad << std::endl;
		std::cout << "Codigo del Producto: " << codigoProducto << std::endl;
    }

    // --- Comprar un producto usando el saldo del usuario ---
    void comprarProducto(UsuarioBancario& usuario, int cantidad) {
        int totalCosto = costo * cantidad;

        // Verificamos si el saldo es suficiente
        if (usuario.getCuenta().consultarSaldo() >= totalCosto) {
            // pero aqu� lo usas como si devolviera y permitiera modificarlo
            usuario.getCuenta().consultarSaldo() -= totalCosto;

            std::cout << "Compra realizada: " << cantidad
                << " unidad(es) de " << descripcion
                << " por un total de $" << totalCosto << std::endl;

            std::cout << "Saldo restante: $"
                << usuario.getCuenta().consultarSaldo() << std::endl;
        }
        else {
            std::cout << "Saldo insuficiente para realizar la compra de "
                << descripcion << std::endl;
        }
    }

    //CashBack: retorna un porcentaje del monto al saldo del usuario
    void cashBackProducto(UsuarioBancario& usuario, COMPRAS tipoCompra, double monto) {
        Banco banco;

        // Calculamos el cashback seg�n el tipo de compra
        double retorno = banco.cashBack(tipoCompra, monto);

        // Sumamos el cashback al saldo del usuario
        usuario.getCuenta().consultarSaldo() += retorno;

        std::cout << "CashBack recibido: $" << retorno << std::endl;
        std::cout << "Nuevo saldo: $"
            << usuario.getCuenta().consultarSaldo() << std::endl;
    }

private:
    // Atributos que dependen de enums definidos en Prerequisites.h
    NOMBREP nombreP;
    MARCA marca;
};

