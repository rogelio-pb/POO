#include "ProgrammingParentton/Builder/BuilderConcreto.h"


BuilderConcreto::BuilderConcreto() {
	producto = new Producto();// Inicializa el producto
}

void BuilderConcreto::buildPartA() {
	if(producto){
		producto->addPart("ParteA1");// Agrega la parte A al producto
	}
}
void BuilderConcreto::buildPartB() {
	if(producto){
		producto->addPart("ParteB1");// Agrega la parte B al producto
	}
}
Producto* BuilderConcreto::getResult() {
	if(producto){
		return producto;// Devuelve el producto construido
	}
	return nullptr;
}
