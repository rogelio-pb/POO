#include "Prerequisites.h"
#include "ProgrammingParentton/Builder/BuilderConcreto.h"
#include "ProgrammingParentton/Builder/Director.h"
#include "ProgrammingParentton/Builder/ConstructorPizzaHauwaiana.h"
#include "ProgrammingParentton/Builder/ConstructorPizzaVegetariana.h"
#include "ProgrammingParentton/Builder/DirectorPizza.h"
#include "ProgrammingParentton/Prototype/Prototype.h"
#include "ProgrammingParentton/Prototype/PrototypeConcreto.h"
#include "ProgrammingParentton/Prototype/Documento.h"
#include "ProgrammingParentton/Prototype/DocumentoPrototype.h"
#include "ProgrammingParentton/Prototype/DocumentoTexto.h"




int main() {


	Builder* builder = new BuilderConcreto();//creamos una instancia del builder concreto
	Director* director = new Director(builder);//creamos una instancia del director y le pasamos
	director->construct();//el director construye el producto
	Producto* productoBuilder = builder->getResult();//obtenemos el producto construido por el
	productoBuilder->showParts();//mostramos las partes del producto
	delete productoBuilder;//eliminamos el producto para evitar fugas de memoria
	delete director;//eliminamos el director para evitar fugas de memoria
	delete builder;//eliminamos el builder para evitar fugas de memoria
	std::cout << " " << std::endl;

	ConstructorPizza* constructorPizza = new ConstructorPizzaHauwaiana();//creamos una instancia del builder concreto
	DirectorPizza* directorPizzaHawaiana = new DirectorPizza(constructorPizza);//
	directorPizzaHawaiana->construct();//el director construye el producto
	Pizza* pizzaHawaiana = constructorPizza->getPizza();//obtenemos
	pizzaHawaiana->showMasa();
	pizzaHawaiana->showSalsa();
	pizzaHawaiana->showQueso();
	pizzaHawaiana->showIngredients();
	pizzaHawaiana->showTipoPizza();
	delete pizzaHawaiana;//eliminamos el producto para evitar fugas de memoria
	delete directorPizzaHawaiana;//eliminamos el director para evitar fugas de memoria
	delete constructorPizza;//eliminamos el builder para evitar fugas de memoria
	std::cout << " "<<std::endl;

	ConstructorPizza* constructorPizzas = new ConstructorPizzaVegetariana();
	DirectorPizza* directorPizzaVegetariana = new DirectorPizza(constructorPizzas);
	directorPizzaVegetariana->construct();//el director construye el producto
	Pizza* pizzaVegetariana = constructorPizzas->getPizza();//obtenemos
	pizzaVegetariana->showMasa();
	pizzaVegetariana->showSalsa();
	pizzaVegetariana->showQueso();
	pizzaVegetariana->showIngredients();
	pizzaVegetariana->showTipoPizza();
	delete pizzaVegetariana;//eliminamos el producto para evitar fugas de memoria
	delete directorPizzaVegetariana;//eliminamos el director para evitar fugas de memoria
	delete constructorPizzas;//eliminamos el builder para evitar fugas de memoria
	std::cout << " " << std::endl;

	Prototype* original = new PrototypeConcreto();//creamos una instancia del objeto original
	original->config("original");//configuramos el objeto original
		
	//clonamos el objeto original
	Prototype* clone = original->clone();
	clone->config("clon");//configuramos el objeto clon
	//mostramos la informacion del objeto original y del clon
	original->info();
	clone->info();
	//eliminamos los objetos para evitar fugas de memoria
	delete original;
	delete clone;
	std::cout << " " << std::endl;

	DocumentoPrototype* PrototipoTexto = new DocumentoTexto();//creamos una instancia del objeto original
	PrototipoTexto->config("Documento de texto original");//configuramos el objeto original

	//clonamos el objeto original
	Documento* cloneTexto = PrototipoTexto->clone();
	cloneTexto->config("Documento de texto clonado");//configuramos el objeto clon


	PrototipoTexto->config("Documento de texto original modificado");

	//mostramos la informacion del objeto original y del clon
	PrototipoTexto->clone()->info();
	cloneTexto->info();
	//eliminamos los objetos para evitar fugas de memoria
	delete PrototipoTexto;
	delete cloneTexto;
	std::cout << " " << std::endl;



	return 0;
}