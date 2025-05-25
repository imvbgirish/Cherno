#include "enemy.h"
#include "entity.h"
#include "player.h"
#include <iostream>

using namespace std;

int main()
{

    Player* player = new Player();
    Entity* actuallyEnemy = new Enemy();

    Entity* actuallyPlayer = player;

    cout << player << endl;

    Player* p0 = dynamic_cast<Player*>(actuallyEnemy);      //Set to null pointer
    Player* p1 = dynamic_cast<Player*>(actuallyPlayer);     //Works

    delete p0;
    delete p1;

    cout << "Hello World!" << endl;
    return 0;
}
