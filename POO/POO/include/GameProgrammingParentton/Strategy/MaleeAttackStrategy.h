#pragma once
#include"Prerequisites.h"
#include "GameProgrammingParentton/Strategy/IAttackStrategy.h"

class 
MaleeAttackStrategy: public IAttackStrategy
{
public:
	MaleeAttackStrategy()=default;
	~MaleeAttackStrategy()=default;

	// Cuerpo a cuerpo aumenta el daño en un 20%
	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 1.2);
	}

};
