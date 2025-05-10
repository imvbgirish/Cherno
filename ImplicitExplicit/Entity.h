#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity{
private:
    std::string m_name;
    int m_num;
public:
    //To prevent implicit conversion , prefix explicit infront of constructor
    Entity(int num):m_name("Girish"),m_num(num){}

    explicit Entity(const std::string& name):m_name(name),m_num(-1){}

};

#endif // ENTITY_H
