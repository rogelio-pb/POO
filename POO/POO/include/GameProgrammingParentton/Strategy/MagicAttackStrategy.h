#pragma once
#include "Prerequisites.h"
#include "GameProgrammingParentton/Strategy/IAttackStrategy.h"

class 
	MagicAttackStrategy : public IAttackStrategy
{
public:
	MagicAttackStrategy()=default;
	~MagicAttackStrategy()=default;
	// Ataque mágico aumenta el daño en un 50%
	int Execute(int baseDamage) const override {
		return static_cast<int>(baseDamage * 1.5);//aqui se agarra el daño base que heredamos de IAttackStrategy y se le aplica el aumento del 50%
	}
};


