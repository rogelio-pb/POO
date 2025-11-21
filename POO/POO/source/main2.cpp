#include "Prerequisites.h"
#include "GameProgrammingParentton/State/Player.h"
#include "GameProgrammingParentton/State/NormalState.h"
#include "GameProgrammingParentton/State/HurtState.h"
#include "GameProgrammingParentton/State/RagueState.h"






int main() {
	Player* player = new Player();
	player->atack();
	player->defend();
	player->move();
	std::cout << "Player gets hurt" << std::endl;
	player->setState(new HurtState());//cambio de estado a HurtState
	player->atack();
	player->defend();
	player->move();
	std::cout << "Player becomes rage" << std::endl;
	player->setState(new RagueState());//cambio de estado a RagueState
	player->atack();
	player->defend();
	player->move();
	delete player;



	return 0;
}