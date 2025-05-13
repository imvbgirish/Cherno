#include <iostream>
#include "Array.h"

using namespace std;

// template<typename T>
// void print(T value){
//     cout << value << endl;
// }

int main()
{
    // print(5.5f);
    // print("Girish");
    // print(10);

    Array<int,float> array;

    int res = array.add(2,3);

    cout << res << endl;

    cout << "Hello World!" << endl;
    return 0;
}
