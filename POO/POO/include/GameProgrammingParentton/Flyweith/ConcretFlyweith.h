#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Flyweith/Flyweith.h"

class
	ConcreFlyweith : public Flyweith {
public:
	ConcreFlyweith(char _symbol) : symbol(_symbol) {}
	~ConcreFlyweith() = default;

	void draw(int x, int y) override {
		std::cout << "Drawing symbol '" << symbol
		<< "' at position (" << x << ", " << y << ")" << std::endl;
	}
private:
	char symbol;
};
