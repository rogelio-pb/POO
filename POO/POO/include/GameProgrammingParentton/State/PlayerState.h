#pragma once

class
	PlayerState {
public:
	PlayerState() = default;
	~PlayerState() = default;

	virtual void atack() = 0;
	virtual void defend() = 0;
	virtual void move() = 0;
};
