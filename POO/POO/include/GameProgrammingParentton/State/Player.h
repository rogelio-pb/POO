#pragma once
#include"GameProgrammingParentton/State/PlayerState.h"
#include"GameProgrammingParentton/State/NormalState.h"

class
	Player {
public:
	Player() : currentState(new NormalState()) {}
	~Player() = default;

	void setState(PlayerState* state) {
		delete currentState;
		currentState = state;
	}

	void atack() {
		currentState->atack();
	}
	void defend() {
		currentState->defend();
	}
	void move() {
		currentState->move();
	}
private:
	PlayerState* currentState;
};
