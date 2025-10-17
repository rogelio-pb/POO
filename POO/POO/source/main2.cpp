#include "Prerequisites.h"
#include "ProgrammingParentton/Adapter/InterfazNueva.h"
#include "ProgrammingParentton/Adapter/InterfazVieja.h"
#include "ProgrammingParentton/Adapter/Adaptador.h"
#include "ProgrammingParentton/Adapter/Circulo.h"
#include "ProgrammingParentton/Adapter/CuadroAdapter.h"
#include "ProgrammingParentton/Adapter/CirculoAdapter.h"
#include "ProgrammingParentton/Adapter/InterfazDibujable.h"




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

	return 0;
}