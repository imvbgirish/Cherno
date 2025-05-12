#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>

class Vertex{
public:
    int m_x;
    int m_y;
    int m_z;
};

std::ostream& operator<<(std::ostream& stream,const Vertex& other){
    stream << other.m_x << "," << other.m_y << "," << other.m_z;
    return stream;
}

#endif // VERTEX_H
