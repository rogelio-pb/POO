#include "Prerequisites.h"
#include "ProgrammingParentton/MiSingleton.h"
#include "ProgrammingParentton/RegistroActividad.h"
#include "ProgrammingParentton/FactoryMethod.h"
#include "ProgrammingParentton/Vehiculo.h"
#include "ProgrammingParentton/AbstractFactory/FabricaConcreta.h"
#include "ProgrammingParentton/AbstractFactory/FactorialMuRusticos.h"
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
	

	// Uso del Factory Method y sirve para crear productos y no depender de las clases concretas
	Factory* factory = new FactoryA();// Fabrica -> genera a Tesla(fabrica A)
	Producto* producto = factory->crearProducto(1);//producto -> Tesla (producto A)

	producto->operacion();// Operacion del Tesla (producto A) en teoria hace algo mas complejo que solo imprimir en consola
	delete producto;
	delete factory;

	// Uso del Factory Method para vehiculos
	factoriaVehiculos* fabricaCoches = new FabricaCoches();// Fabr
	Vehiculo* coche = fabricaCoches->crearVehiculo(1);//vehiculo -> coche
	coche->descripcion();// Soy un coche
	delete coche;
	delete fabricaCoches;
	factoriaVehiculos* fabricaBicicletas = new FabricaBicicletas();// Fabrica -> genera a bicicleta
	Vehiculo* bici = fabricaBicicletas->crearVehiculo(1);//veh
	bici->descripcion();// Soy una bicicleta
	delete bici;
	delete fabricaBicicletas;

	fabricaAbstracta* fabrica = new FabricaConcreta();
	productoA* prodA = fabrica->crearProductoA();
	productoB* prodB = fabrica->crearProductoB();

	prodA->operacionA();
	prodB->operacionB();
	delete fabrica;
	delete prodA;
	delete prodB;

	FactoriaMuebles* fabricaMuebles = new FactorialMuRusticos();//instancia de la fabrica concreta de muebles rusticos
	Mueble* mesa = fabricaMuebles->crearMesa();//metodo para crear una mesa rustica
	Mueble* silla = fabricaMuebles->crearSilla();//metodo para crear una silla rustica

	mesa->descripcion();//descripcion de la mesa
	mesa->color();//color de la mesa
	silla->descripcion();//descripcion de la silla
	silla->color();//color de la silla
	delete fabricaMuebles;//eliminamos la fabrica de muebles 
	delete mesa;//eliminamos la mesa para evitar fugas de memoria
	delete silla;//eliminamos la silla para evitar fugas de memoria


	return 0;
}