#include <iostream>
#include <vector>
#include "Vertex.h"

using namespace std;

int main()
{
    std::vector<Vertex> vertices;

    // vertices.push_back({1,2,3});        //printing copied 6 times bcoz creating object here then copying it to the vector
    // vertices.push_back({4,5,6});
    // vertices.push_back({7,8,9});

    cout << "---------------------" << endl;

    vertices.reserve(3);                //Reserving size 3
    vertices.emplace_back(1,2,3);
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);

    cout << "Hello World!" << endl;
    return 0;
}
