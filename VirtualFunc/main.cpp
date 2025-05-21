#include <iostream>

using namespace std;
#include "entity.h"
#include "player.h"

void printName(Entity* entity){         //if not virtual then, it calls only base class getName function
    cout << entity->getName() << endl;
}

int main()
{
    //Both calls their corresponding functions
    Entity* e = new Entity();
    printName(e);

    Entity* ptr = new Player;
    printName(ptr);

    Player *p = new Player("Girish");
    printName(p);


    // //Both calls base class function
    // Entity e1;
    // string s1 = e1.getNaam();
    // cout << s1 << endl;

    // Player p1("Girish");
    // string s2 = p1.getNaam();
    // cout << s2 << endl;


    return 0;
}
