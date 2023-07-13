#include "Enemy.h"
#include "Player.h"

void Enemy::Attack(Character* target)
{
    Player* player = dynamic_cast<Player*>(target);
    if (player)
    {
       cout << "Ворог атакує вас!" << endl;
    }
}
