#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/State/PlayerState.h"

class 
HurtState: public PlayerState{
public:
	HurtState() = default;
	~HurtState() = default;

	void atack() override {
		std::cout << "Hurt Atack" << std::endl;
	}
	void defend() override {
		std::cout << "Hurt Defend" << std::endl;
	}
	void move() override {
		std::cout << "Hurt Move" << std::endl;
	}

};