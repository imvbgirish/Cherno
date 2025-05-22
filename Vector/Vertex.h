#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>

class Vertex{
public:
    int m_x;
    int m_y;
    int m_z;

    Vertex();
    Vertex(int x,int y,int z);
    Vertex(const Vertex& v);
    ~Vertex();
};

// std::ostream& operator<<(std::ostream& stream,const Vertex& other);

#endif // VERTEX_H
