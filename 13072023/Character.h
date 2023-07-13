#pragma once
#include <iostream>

using namespace std;

class Character
{
public:
    virtual ~Character() {}

    virtual void Attack(Character* target) = 0;
};

