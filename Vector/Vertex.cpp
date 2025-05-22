#include "Vertex.h"

Vertex::Vertex(){
    std::cout << "Vertex constructor" << std::endl;
}

Vertex::Vertex(int x, int y, int z)
{
    m_x = x;
    m_y = y;
    m_z = z;
    std::cout << "Parameterized constructor" << std::endl;
}

Vertex::~Vertex(){
    std::cout << "Vertex destructor" << std::endl;
}

Vertex::Vertex(const Vertex &v){
    m_x = v.m_x;
    m_y = v.m_y;
    m_z = v.m_z;
    std::cout << "copy constructor" << std::endl;
}

// std::ostream& operator<<(std::ostream& stream,const Vertex& other){
//     std::cout << "operator called" << std::endl;
//     stream << other.m_x << "," << other.m_y << "," << other.m_z;
//     return stream;
// }
