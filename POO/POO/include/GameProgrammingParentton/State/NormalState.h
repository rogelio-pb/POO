#pragma once
#include"Prerequisites.h"
#include"GameProgrammingParentton/State/PlayerState.h"

class
	NormalState : public PlayerState {
public:
	NormalState() = default;
	~NormalState() = default;

	void atack() override {
		std::cout << "Normal Atack" << std::endl;
	}

	void defend() override {
		std::cout << "Normal Defend" << std::endl;
	}

	void move() override {
		std::cout << "Normal Move" << std::endl;
	}
};
