#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/State/PlayerState.h"

class
	RagueState : public PlayerState {
public:
	RagueState() = default;
	~RagueState() = default;

	void atack() override {
		std::cout << "Rague Atack" << std::endl;
	}	
	void defend() override {
		std::cout << "Rague Defend" << std::endl;
	}
	void move() override {
		std::cout << "Rague Move" << std::endl;
	}
};
