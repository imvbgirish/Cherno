#include <iostream>

using namespace std;

auto getName(){         //auto detected type based on return value
    return "Girish";
}

int main()
{
    cout << getName() << endl;
    cout << "Hello World!" << endl;
    return 0;
}
