#pragma once
#include "character.h"

class Player : public Character
{
public:
	void Attack(Character* target) override;
};

