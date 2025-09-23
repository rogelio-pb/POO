#include "Prerequisites.h"
#include "Inventoryr.h"
#include "rectangulo.h"
#include "Circulo.h"
#include "Estudiante.h"
#include"CuentaBancaria.h"
#include"UsuarioBanco.h"
#include"Banco.h"
#include"Productos.h"
//Crear clase character
class
    character {
public:
        character(int healt) : m_health(healt) {}

    void
        rebirth() {
        if (!isCharacterAlive && m_health <= 0) {
        std:: cout << "El character a arevivido en el spawn point" << std :: endl;
		isCharacterAlive = true;
        }
}

int
getHealth() const {
    return m_health;
}

void
setHealt(int health) {
    m_health = health;
}

 private:
     bool isCharacterAlive = false;

  protected:
      int m_health;
  };
    //this funtion is in charge of being the entry point of the app.
    int
        main() {
        Inventory inventory;
        inventory.addItem("Pocion de vida", 3);
        inventory.addItem("Espada", 1);
        inventory.addItem("Escudo", 1);

        inventory.useItem("Pocion de vida", 1);
        inventory.showInventory();
        character pepe(150);
        pepe.getHealth();
        std::cout << pepe.getHealth() << std::endl;
        pepe.setHealt(-50);
        std::cout << pepe.getHealth() << std::endl;

        if (pepe.getHealth() <= 0) {
            std::cout << "El pepe, murio" << std::endl;
            pepe.rebirth();
        }
        Rectangulo rect;
        rect.setAltura(5.0);
        rect.setBase(3.0);
        std::cout << "Area: " << rect.getArea() << std::endl;
        std::cout << "Perimetro: " << rect.getPerimetro() << std::endl;
        Fecha fecha;
        fecha.getFecha();
        fecha.toString();
        std::cout << fecha.toString() << std::endl;

        Circulo miCirculo;
        miCirculo.setRadio(5);
        std::cout << "Area: " << miCirculo.getArea() << std::endl;
        std::cout << "Perimetro " << miCirculo.getPerimetro() << std::endl;

        Estudiante estudiantes[5];
        estudiantes[0].setEstudiante("Juan", 19);
        estudiantes[1].setEstudiante("Ana", 21);
        estudiantes[2].setEstudiante("Luis", 20);
        estudiantes[3].setEstudiante("Maria", 22);
        estudiantes[4].setEstudiante("Pedro", 23);
        for (int i = 0; i < 5; i++) {
            estudiantes[i].mostrarEstudiante();

        }

        Banco Santander;
        UsuarioBancario Ariana = Santander.nuevoUsuario(CuentaBancaria("Ariana", 0001, 5000.0));
        UsuarioBancario Ana = Santander.nuevoUsuario(CuentaBancaria("Ana", 0002, 3000.0));


        std::cout << "Antes de la transferencia:" << std::endl;


        std::cout << "Realizando la transferencia:" << std::endl;
        Santander.realizarTransferencia(Ana, Ariana, 1500.0, 1709);
        Santander.realizarCompra(Ariana, "Shampoo", 245.0, 1809); // Esto debe de dar cashBack (Compras en comercios = 1%)

        std::cout << "Despues de la transferencia:" << std::endl;

		std::cout << " " << std::endl;

		std::cout << "Mostrando productos:" << std::endl;

	
        Productos producto1;
        producto1.descripcion = "Agua pura y refrescante";
        producto1.modelo = "Natural";
        producto1.costo = 10;
		producto1.consumible = "Si";
		producto1.fechaCaducidad = " 12/12/2025";
		producto1.codigoProducto = 001;
        producto1.setNombreP(AGUA);
        producto1.setMarca(COCA_COLA);
        producto1.mostrarProducto();
        producto1.mostrarInfoP();
        producto1.comprarProducto(Ariana, 2); // Comprar 2 unidades del producto
		producto1.cashBackProducto(Ariana, BEBIDAS, producto1.costo * 2); // Aplicar cashBack por la compra

        std::cin.get();



        return 0;
    }



      
    
