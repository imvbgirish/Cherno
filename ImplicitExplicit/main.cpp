#include "Entity.h"
#include <iostream>

using namespace std;

int main()
{
    //Entity e1 = "Girish";  --> Error , 2 conversions has to happen -> const char[7] to string then to entity.
    //Entity e2 = 24;     //Implicit conversion from int to entity type.

    cout << "Hello World!" << endl;
    return 0;
}
