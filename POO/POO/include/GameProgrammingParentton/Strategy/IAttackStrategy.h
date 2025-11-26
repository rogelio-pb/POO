#pragma once
#include "Prerequisites.h"

class
	IAttackStrategy {
public:
	virtual ~IAttackStrategy() = default;
	virtual int Execute(int baseDamage) const=0;
};
