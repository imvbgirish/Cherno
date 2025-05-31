#include <iostream>

using namespace std;

int main()
{

    int number1 = 10;
    double number2 = number1;
    cout << number2 << "\n";

    double number3 = 10.5;
    int number4 = static_cast<int>(number3);
    char name = static_cast<char>(number3);
    char letter = 'a';

    int number5 = static_cast<int>(letter);
    cout << number5 << endl;
    cout << number4 << "\n";
    cout << name;               //Nothing prints

    cout << "Hello World!" << endl;
    return 0;
}
