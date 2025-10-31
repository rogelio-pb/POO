#include "Prerequisites.h"
#include "ProgrammingParentton/Adapter/InterfazNueva.h"
#include "ProgrammingParentton/Adapter/InterfazVieja.h"
#include "ProgrammingParentton/Adapter/Adaptador.h"
#include "ProgrammingParentton/Adapter/Circulo.h"
#include "ProgrammingParentton/Adapter/CuadroAdapter.h"
#include "ProgrammingParentton/Adapter/CirculoAdapter.h"
#include "ProgrammingParentton/Adapter/InterfazDibujable.h"
#include "ProgrammingParentton/Decorator/ComponenteConcreto.h"
#include "ProgrammingParentton/Decorator/DecoratorConcretoA.h"
#include "ProgrammingParentton/Decorator/DecoratorConcretoB.h"
#include "ProgrammingParentton/Composite/Composite.h"
#include "ProgrammingParentton/Composite/Hoja.h"
#include "ProgrammingParentton/Composite/SistemaArchivo.h"
#include "ProgrammingParentton/Composite/SistemaCarpeta.h"
#include "ProgrammingParentton/Proxy/Proxy.h"
#include"GameProgrammingParentton/Observer/DisplayDevice.h"
#include"GameProgrammingParentton/Observer/TemperatureSensor.h"
#include "GameProgrammingParentton/Observer/MessageApp.h"
#include"GameProgrammingParentton/Observer/SoundNoification.h"




int main() {
	//Crear una instancia de la interfaz vieja


	InterfazVieja* objetoViejo = new InterfazVieja();//Crear un adaptador que convierta la interfaz vieja a la nueva
	InterfazNueva* objetoNuevo = new Adaptador(objetoViejo);//Usar el adaptador para llamar al metodo nuevo, que internamente llamara al metodo viejo

		objetoNuevo->metodoNuevo();

		delete objetoViejo;
		delete objetoNuevo;
		std::cout << "---------------------" << std::endl;

		//Ejemplo con figuras
		circulo* circulo1 = new circulo();//Crear un circulo
		cuadrado* cuadrado1 = new cuadrado();//Crear un cuadrado
		dibujable* figura1 = new CirculoAdapter(circulo1);//Adaptar el circulo a la interfaz dibujable
		dibujable* figura2 = new CuadroAdapter(cuadrado1);//Adaptar el cuadrado a la interfaz dibujable

		figura1->dibujar();//Dibujar el circulo usando la interfaz dibujable
		figura2->dibujar();//Dibujar el cuadrado usando la interfaz dibujable

		delete circulo1;
		delete cuadrado1;
		delete figura1;
		delete figura2;

		std::cout << "---------------------" << std::endl;

		//Ejemplo con decorador
		Componente* objeto = new ComponenteConcreto(); // Crear un componente concreto
		DecoratorConcretoA* decoradorA = new DecoratorConcretoA(objeto); // Decorar el componente con DecoratorConcretoA
		DecoratorConcretoB* decoradorB = new DecoratorConcretoB(decoradorA); // Decorar el componente con DecoratorConcretoB

		objeto->operacion(); // Llamar a la operacion del componente original
		decoradorA->operacion(); // Llamar a la operacion del componente decorado con DecoratorConcretoA
		decoradorB->operacion(); // Llamar a la operacion del componente decor

		delete objeto;
		delete decoradorA;
		delete decoradorB;
		std::cout << "---------------------" << std::endl;

		//Ejemplo con composite
		Hoja* hoja1 = new Hoja(); // Crear una hoja
		Hoja* hoja2 = new Hoja(); // Crear otra hoja
		Composite* composite1 = new Composite(); // Crear un composite

		composite1->add(hoja1); // Agregar la hoja1 al composite1
		composite1->add(hoja2); // Agregar la hoja2 al composite
		composite1->operacion(); // Llamar a la operacion del composite, que a su vez llamara a la operacion de sus hojas

		delete hoja1;
		delete hoja2;
		delete composite1;
		std::cout << "---------------------" << std::endl;

		//Ejemplo con sistema de archivos
		SistemaArchivo* Archivo1 = new SistemaArchivo("Documento final 1"); // Crear un sistema de archivos
		SistemaArchivo* Archivo2 = new SistemaArchivo(); // Crear otro sistema de archivos
		SistemaCarpeta* Carpeta = new SistemaCarpeta(); // Crear
		Carpeta->agregarSistema(Archivo1); // Agregar el archivo1 a la carpeta
		Carpeta->agregarSistema(Archivo2); // Agregar el archivo2 a

		Carpeta->mostrar(); // Llamar a la operacion de la carpeta, que a su vez llamara a la operacion de sus archivos
		delete Archivo1;	
		delete Archivo2;
		delete Carpeta;
		std::cout << "---------------------" << std::endl;

		//Ejemplo con proxy
		Proxy* proxy = new Proxy(); // Crear un proxy
		proxy->request(); // Llamar a la solicitud del proxy, que a su
		proxy->request(); // Llamar nuevamente para ver el control de acceso
		delete proxy;
		std::cout << "---------------------" << std::endl;

		//Ejemplo con observer
		TemperatureSensor sensor;// Crear un sensor de temperatura
		DisplayDevice display;// Crear un sensor de temperatura y un dispositivo de visualización
		sensor.addObserver(&display); // Agregar el display como observador del sensor
		sensor.setTemperature(25); // Cambiar la temperatura del sensor, lo que notific
		sensor.setTemperature(30); // Cambiar la temperatura del sensor nuevamente
		std::cout << "---------------------" << std::endl;

		//Ejemplo con notificaciones de sonido
		MessageApp messageApp; // Crear una aplicacion de mensajes
		SoundNotification soundNotification; // Crear una notificacion de sonido
		messageApp.addObserver(&soundNotification); // Agregar la notificacion de sonido como observador de la aplicacion de mensajes
		messageApp.setMessage(1); // Establecer un mensaje en la aplicacion,
	return 0;
}