#ifndef VECTOR_H
#define VECTOR_H

#include <ostream>

class Vector{
private:
    float m_x;
    float m_y;
public:
    //Vector() = default;
    Vector(float x, float y):m_x{x}, m_y(y){}

    Vector add(const Vector& other) const {
        return Vector(m_x + other.m_x,m_y + other.m_y);
        //return *this + other;
    }

    Vector operator+(const Vector& other) const{
        return add(other);
    }

    Vector operator*(const Vector& other) const{
        return Vector(m_x * other.m_x,m_y * other.m_y);
    }

    friend std::ostream& operator<<(std::ostream& stream,const Vector& other);
};

std::ostream& operator<<(std::ostream& stream,const Vector& other) {
    stream << other.m_x << "," << other.m_y;
    return stream;
}

#endif // VECTOR_H
