#include <iostream>

using namespace std;

struct Student{
    int height;
    union Size{
        int length;
    }size;
};

int main()
{
    //case 0
    struct Student student;
    cout << "Student size: " << sizeof(student) << endl;
    student.size.length = 10;

    cout << student.size.length << endl;

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

    //case 4
    union name{
        struct size{
            int height;
            float length;
            double width;
        }size;
        int width;
    };

    union name a;
    cout << sizeof(name) << endl;
    cout << sizeof(a.size) << endl;

    cout << "Hello World!" << endl;
    return 0;
}
