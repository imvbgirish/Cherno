#include "Entity.h"
#include <iostream>

using namespace std;

int main()
{
    Entity *e;
    Entity *e1;

    {
        Entity entity("Girish");
        Entity* entity1 = new Entity("Girish");
        e1 = entity1;
        e = &entity;

        cout << e1->getName() << endl;
        cout << e->getName() << endl;
    }

    delete e1;
    cout << "Hello World!" << endl;
    return 0;
}
