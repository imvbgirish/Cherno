#include <iostream>
#include <string>

using namespace std;

std::tuple<std::string,int> createPerson(){
    return {"Girish",24};
}

int main()
{
    // case 1
    // std::string name;
    // int age;
    // std::tie(name,age) = createPerson();

    // case 2
    auto[name,age] = createPerson();
    cout << name << ", " << age << endl;

    //case 3
    int arr[3] = { 1, 2, 3 };
    auto[x,y,z] = arr;
    cout << x << ", " << y << ", " << z << endl;

    return 0;
}
