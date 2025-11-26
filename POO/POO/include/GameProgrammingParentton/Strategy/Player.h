#pragma once
#include"Prerequisites.h"
#include "GameProgrammingParentton/Strategy/IAttackStrategy.h"

class Player
{
public:
	Player()=default;
	~Player()=default;

	void
		SetStrategy(std::unique_ptr<IAttackStrategy> newStrategy) {
		if (!newStrategy) {
			throw std::invalid_argument("Strategy is null");
		}
		m_strategy = std::move(newStrategy);
	}
	int Attack(int baseDamage) const {
		if (!m_strategy) {
			throw std::runtime_error("Strategy not set");
		}
		return m_strategy->Execute(baseDamage);
	}

private:
	std::unique_ptr<IAttackStrategy> m_strategy;

};


