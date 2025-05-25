#include <iostream>

using namespace std;

int main()
{

    int number1 = 10;
    double number2 = number1;
    cout << number2 << "\n";

    double number3 = 10.5;
    int number4 = static_cast<int>(number3);
    cout << number4 << "\n";

    cout << "Hello World!" << endl;
    return 0;
}
