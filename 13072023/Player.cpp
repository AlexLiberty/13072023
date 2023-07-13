#include "Player.h"
#include "Enemy.h"

void Player::Attack(Character* target)
{
    Enemy* enemy = dynamic_cast<Enemy*>(target);
    if (enemy) 
    {
        cout << "¬и атакуЇте ворога!" << endl;
    }
}
