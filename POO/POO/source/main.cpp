
#include "Prerequisites.h"
#include "Inventoryr.h"
#include "rectangulo.h"
#include "Circulo.h"
#include "Estudiante.h"
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
      
        return 0;
    }
