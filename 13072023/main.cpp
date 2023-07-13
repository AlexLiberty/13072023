#include "character.h"
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "windows.h"

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Player player;
    Enemy enemy;

    Character* target1 = &player;
    Character* target2 = &enemy;

    target1->Attack(target2); 
    target2->Attack(target1); 

    return 0;
}