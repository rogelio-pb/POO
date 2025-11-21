#pragma once
#include"Prerequisites.h"
#include "GameProgrammingParentton/Flyweith/Flyweith.h"
#include "GameProgrammingParentton/Flyweith/ConcretFlyweith.h"

class
	FlyweigthFactory {
public:
	FlyweigthFactory() = default;
	~FlyweigthFactory() = default;

	Flyweith* getFlywith(char symbol){
		if(flyweiths.find(symbol) != flyweiths.end()){
			flyweiths[symbol] = new ConcreFlyweith(symbol);
		}
		return flyweiths[symbol];
	}
private:
	std::unordered_map<char, Flyweith*> flyweiths;
};
