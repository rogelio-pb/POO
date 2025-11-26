#include "Prerequisites.h"
#include "GameProgrammingParentton/Strategy/Player.h"
#include "GameProgrammingParentton/Strategy/MaleeAttackStrategy.h"
#include "GameProgrammingParentton/Strategy/RangedAttackStrategy.h"
#include "GameProgrammingParentton/Strategy/MagicAttackStrategy.h"


int main() {
	Player player;
	//usamos estrategia de ataque cuerpo a cuerpo
	player.SetStrategy(std::make_unique<MaleeAttackStrategy>());
	int damage = player.Attack(50);
	std::cout << "Cuerpo a cuerpo daño: " << damage << std::endl;
	//cambiamos a estrategia de ataque a distancia
	player.SetStrategy(std::make_unique<RangedAttackStrategy>());
	damage = player.Attack(50);
	std::cout << "Ataque a distancia daño: " << damage << std::endl;
	//cambiamos a estrategia de ataque magico
	player.SetStrategy(std::make_unique<MagicAttackStrategy>());
	damage = player.Attack(50);
	std::cout << "Ataque mágico daño: " << damage << std::endl;

	return 0;
}