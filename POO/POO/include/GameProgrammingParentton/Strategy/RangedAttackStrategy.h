#pragma once
#include"Prerequisites.h"
#include "GameProgrammingParentton/Strategy/IAttackStrategy.h"

class 
	RangedAttackStrategy :public IAttackStrategy
{
public:
	RangedAttackStrategy()=default;
	~RangedAttackStrategy()=default;
	// Ataque a distancia reduce el daño en un 10%
	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage*0.9); // Ranged attack adds 15 damage
	}

};


