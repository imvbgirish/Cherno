#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
    Vector position(4.3f,3.5f);
    Vector speed(3.4f,6.5f);
    Vector powerUp(1.2f,1.1f);

    Vector result = position + speed * powerUp;

    cout << result << endl;
    cout << "Hello World!" << endl;
    return 0;
}
