#ifndef VERTEX_H
#define VERTEX_H

#include <iostream>

class Vertex{
private:
    int m_x, m_y , m_z;

public:
    Vertex(int x, int y, int z):m_x{x},m_y{y},m_z{z}{
        std::cout << "Assigned" << std::endl;

    }

    Vertex(const Vertex& vertex):m_x(vertex.m_x), m_y{vertex.m_y}, m_z{vertex.m_z}{
        std::cout << "Copied" << std::endl;
    }

};

#endif // VERTEX_H
