#include "Prerequisites.h"
#include "ProgrammingParentton/Builder/BuilderConcreto.h"
#include "ProgrammingParentton/Builder/Director.h"


int main() {


	Builder* builder = new BuilderConcreto();//creamos una instancia del builder concreto
	Director* director = new Director(builder);//creamos una instancia del director y le pasamos
	director->construct();//el director construye el producto
	Producto* productoBuilder = builder->getResult();//obtenemos el producto construido por el
	productoBuilder->showParts();//mostramos las partes del producto
	delete productoBuilder;//eliminamos el producto para evitar fugas de memoria
	delete director;//eliminamos el director para evitar fugas de memoria
	delete builder;//eliminamos el builder para evitar fugas de memoria


	return 0;
}