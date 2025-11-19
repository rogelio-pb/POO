#include "Prerequisites.h"
#include "GameProgrammingParentton/Comand/Operacion.h"
#include "GameProgrammingParentton/Comand/Invoker/Calculadora.h"
#include "GameProgrammingParentton/Comand/ConcreteCommads/Suma.h"
#include "GameProgrammingParentton/Comand/ConcreteCommads/Resta.h"




int main() {
	int resultado = 0;
	int valorSuma = 5;
	int valorResta = 3;

	Suma suma(resultado, valorSuma);
	Resta resta(resultado, valorResta);

	Calculadora calculadora;
	calculadora.ejecutarOperacion(&suma);
	std::cout << "Valor despues de la suma: " << resultado << std::endl;

	calculadora.ejecutarOperacion(&resta);
	std::cout << "Valor despues de la resta: " << resultado << std::endl;
	calculadora.deshacerOperacion();
	std::cout << "Valor despues de deshacer la resta: " << resultado << std::endl;
	calculadora.ejecutarOperacion(&resta);
	std::cout << "Valor despues de rehacer la resta: " << resultado << std::endl;


	return 0;
}