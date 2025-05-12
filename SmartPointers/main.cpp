#include "Entity.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{

    // std::unique_ptr<Entity> entity = make_unique<Entity>();
    // entity->print();

    std::shared_ptr<Entity> shared1;
    {
        std::shared_ptr<Entity> shared2 = make_shared<Entity>();
        std::weak_ptr<Entity> weak = shared1;           //ref count not increased here
        shared1 = shared2;                              //ref count increased here
    }

    shared1->print();

    cout << "Hello World!" << endl;
    return 0;
}
