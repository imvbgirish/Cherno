#include <iostream>

using namespace std;

int main()
{

    static int a = 10;
    static int b = 20;

    if(a>b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }

    //Ternary operator
    int max = a>b ? a : b;
    cout << max << endl;

    cout << "Hello World!" << endl;
    return 0;
}
