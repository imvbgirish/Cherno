#include "Vertex.h"
#include <iostream>
#include <vector>

using namespace std;

// void function(const std::vector<Vertex>& vertex){       //always call them by const reference
//     std::cout << "Inside function" << std::endl;
// }

int main()
{
    std::vector<Vertex> vertex;
    vertex.push_back({1,2,3});
    vertex.push_back({4,5,6});
    vertex.push_back({7,8,9});
    // vertex.push_back({10,11,12});
    // vertex.push_back({13,14,15});

    cout << &vertex << endl;
    // std::vector<Vertex> vertex1(vertex);

    // function(vertex);

    // for(unsigned int i=0; i<vertex.size(); i++ ){
    //     std::cout << vertex[i] << std::endl;
    // }

    // vertex.erase(vertex.begin()+1);

    // for(const Vertex& v: vertex){
    //     std::cout << v << std::endl;
    // }

    cout << "Hello World!" << endl;
    return 0;
}
