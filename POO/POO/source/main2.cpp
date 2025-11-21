#include "Prerequisites.h"
#include "GameProgrammingParentton/Flyweith/FlyweigthFactory.h"




int main() {
	FlyweigthFactory factory;
	Flyweith* fly1 = factory.getFlywith('A');


	return 0;
}