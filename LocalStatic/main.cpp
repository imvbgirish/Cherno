#include <iostream>

using namespace std;

void function(){
    static int a = 0;
    a++;                        //a is returning the same variable and updating it.
    int b = 0;                  //b is initializing to 0 again and again.
    b++;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

}
int main()
{
    cout << "Hello World!" << endl;

    function();
    function();
    function();
    function();
    function();

    return 0;
}
