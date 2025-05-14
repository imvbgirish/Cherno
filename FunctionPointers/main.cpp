#include <iostream>
#include <vector>

using namespace std;

void Hello(int a){
    cout << "Hello World! Value: " << a << endl;
}

void printValue(int value){
    cout << "Value: " << value << endl;
}

void forEach(const vector<int>& values,void(*func)(int)){
    for(int value: values){
        func(value);
    }
}

int main()
{
    //auto = void(*function)()
    //auto print = Hello;

    typedef void(*function)(int);
    function print = Hello;

    vector<int> values = {1,6,3,8,2,9};
    forEach(values,printValue);

    print(1);
    print(2);
    print(3);
    print(4);

    return 0;
}
