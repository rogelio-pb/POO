#include "Prerequisites.h"
#include "GameProgrammingParentton/Comand/Invoker/ControlRemoto.h"
#include "GameProgrammingParentton/Comand/Invoker/Luz.h"
#include "GameProgrammingParentton/Comand/ConcreteCommads/ComandoEncender.h"
#include "GameProgrammingParentton/Comand/ConcreteCommads/ComandoApagar.h"



int main() {
	Luz luz;

	ComandoEncender comandoEncender(luz);
	ComandoApagar comandoApagar(luz);

	ControlRemoto controlRemoto;
	controlRemoto.ejecutableComando(&comandoEncender); // Enciende la luz
	controlRemoto.ejecutableComando(&comandoApagar);   // Apaga la
	controlRemoto.deshacerComando();                     // Deshace el último comando (enciende la luz de nuevo)

	return 0;
}