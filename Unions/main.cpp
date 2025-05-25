#include <iostream>

using namespace std;

int main()
{
    //case 1
    struct Size{

        union{
            int length;
            float width;
            double height;
        };
    };


    struct Size s;
    cout << sizeof(s) << "\n";
    s.length = 10;
    cout << s.length << endl;

    s.width = 20;
    cout << s.width << endl;

    s.height = 30;
    cout << s.height << "\n" << endl;


    //case 2
    union Student{
        int age;
        float GPA;
    };

    union Student student1;
    cout << sizeof(Student) << "\n";
    student1.age = 24;
    cout << student1.age << "\n";

    student1.GPA = 4.5f;
    cout << student1.GPA << "\n";

    cout << "Hello World!" << endl;
    return 0;
}
