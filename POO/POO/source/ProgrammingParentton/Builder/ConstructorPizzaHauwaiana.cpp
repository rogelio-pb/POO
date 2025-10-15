#include "ProgrammingParentton/Builder/ConstructorPizzaHauwaiana.h"

ConstructorPizzaHauwaiana::ConstructorPizzaHauwaiana() {
	pizza = new Pizza();// Inicializa el producto
}
void ConstructorPizzaHauwaiana::buildMasa() {
	if(pizza){
		pizza->addMasa("Masa gruesa");// Agrega la masa al producto
	}
}
void ConstructorPizzaHauwaiana::buildSalsa() {
	if(pizza){
		pizza->addSalsa("Salsa de tomate");// Agrega la salsa al producto
	}
}
void ConstructorPizzaHauwaiana::buildQueso() {
	if(pizza){
		pizza->addQueso("Queso mozzarella");// Agrega el queso al producto
	}
}
void ConstructorPizzaHauwaiana::buildIngredientes() {
	if(pizza){
		pizza->addIngredient("Jamon");// Agrega el ingrediente al producto
		pizza->addIngredient("Piña");// Agrega el ingrediente al producto
	}
}
void ConstructorPizzaHauwaiana::buildTipoPizza() {
	if(pizza){
		pizza->addTipoPizza("Hawaiana");// Agrega el tipo de pizza al producto
	}
}
Pizza* ConstructorPizzaHauwaiana::getPizza() {
	if(pizza){
		return pizza;// Devuelve el producto construido
	}
	return nullptr;
}
