#include "Prerequisites.h"
#include "ProgrammingParentton/Builder/BuilderConcreto.h"
#include "ProgrammingParentton/Builder/Director.h"
#include "ProgrammingParentton/Builder/ConstructorPizzaHauwaiana.h"
#include "ProgrammingParentton/Builder/ConstructorPizzaVegetariana.h"
#include "ProgrammingParentton/Builder/DirectorPizza.h"




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



	return 0;
}