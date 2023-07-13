#pragma once
#include "character.h"

class Enemy : public Character
{
public:
	void Attack(Character* target) override;
};

