#include "Prerequisites.h"
#include "ProgrammingParentton/MiSingleton.h"
#include "ProgrammingParentton/RegistroActividad.h"
//inicializamos la instancia estatic del singleton
MiSingleton* MiSingleton::instance = nullptr;

int main() {

	MiSingleton* singleton = MiSingleton::getInstance();
	singleton->setData(42);

	std::cout << "Valor del singleton: " << singleton->getData() << std::endl;

	MiSingleton* singleton2 = MiSingleton::getInstance();
	std::cout << "Valor del singleton2: " << singleton2->getData() << std::endl;

	RegistroActividad* singletonRA = new RegistroActividad();
	int opcion;
	std::cout << "Registro de Actividades" << std::endl;
	std::cout << "presiona 1 para registrar y 0 para salir" << std::endl;
	std::cin >> opcion;
	std::string actividad;

	while (opcion!=0) {
		singletonRA->registrarActividad("Iniciar programa");
		std::cout << "Ingrese una actividad: "<< std::endl;
		std::cin >> actividad;
		std::cin.ignore(); // Limpiar el buffer de entrada
		
		singletonRA->registrarActividad(actividad);

		std::cout << "presiona 1 para registrar y 0 para salir" << std::endl;
		std::cin >> opcion;
	}
	singletonRA->mostrarActividades();
	return 0;


}