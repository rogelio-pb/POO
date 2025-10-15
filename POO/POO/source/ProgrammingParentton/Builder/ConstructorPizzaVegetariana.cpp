#include "ProgrammingParentton/Builder/ConstructorPizzaVegetariana.h"

ConstructorPizzaVegetariana::ConstructorPizzaVegetariana() {
	pizza = new Pizza();// Inicializa el producto
}	
void ConstructorPizzaVegetariana::buildMasa() {
	if(pizza){
		pizza->addMasa("Masa delgada");// Agrega la masa al producto
	}
}
void ConstructorPizzaVegetariana::buildSalsa() {
	if(pizza){
		pizza->addSalsa("Salsa de tomate");// Agrega la salsa al producto
	}
}
void ConstructorPizzaVegetariana::buildQueso() {
	if(pizza){
		pizza->addQueso("Queso cheddar");// Agrega el queso al producto
	}
}
void ConstructorPizzaVegetariana::buildIngredientes() {
	if(pizza){
		pizza->addIngredient("Pimiento");// Agrega el ingrediente al producto
		pizza->addIngredient("Cebolla");// Agrega el ingrediente al producto
		pizza->addIngredient("Champiñones");// Agrega el ingrediente al producto
	}
}
void ConstructorPizzaVegetariana::buildTipoPizza() {
	if(pizza){
		pizza->addTipoPizza("Vegetariana");// Agrega el tipo de pizza al producto
	}
}
Pizza* ConstructorPizzaVegetariana::getPizza() {
	if(pizza){
		return pizza;// Devuelve el producto construido
	}
	return nullptr;
}
