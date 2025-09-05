
#include "Prerequisites.h"
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
class
    inventary {
public:
    void Object() {
        std::cout << "Quiere agregar objeto al inventario?" << std::endl;
        std::cout << "1. Si" << std::endl;
        std::cout << "2. No" << std::endl;
        int option;
        std::cin >> option;
        if (option == 1) {
            AddObject(option);
        }
        else {
            NoObject(option);
        }
      
    }
    void AddObject(int option) {
            std::cout << "Objeto agregado" << std::endl;
        
        NoObject(option);
    }
        void NoObject(int option) {
            switch (option)
            {
                case 1:
                std::cout << "Menos un espacio de su inventario" << std::endl;
				break;
                case 2:
					std::cout << " ningun objeto insertado, Bolsa vacia" << std::endl;
            default:
                break;
            }
            
        }
    };


    //this funtion is in charge of being the entry point of the app.
    int
        main() {
        character pepe(150);
        pepe.getHealth();
        std::cout << pepe.getHealth() << std::endl;
        pepe.setHealt(-50);
        std::cout << pepe.getHealth() << std::endl;

        if (pepe.getHealth() <= 0) {
            std::cout << "El pepe, murio" << std::endl;
            pepe.rebirth();
        }
		inventary inventario;
		inventario.Object();
        std::cout << "Hello world" << std::endl;
        return 0;
    }
