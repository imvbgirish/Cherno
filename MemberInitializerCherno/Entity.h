#ifndef ENTITY_H
#define ENTITY_H

#include "Example.h"
#include <string>

class Entity{
private:
    std::string m_name;
    Example m_example;
public:
    // Entity(){
    //     m_name = "Girish";
    //     m_example = Example(8);     //Default & Parameterized constructor of Example both were called.(2 obj created)
    // }

    Entity():m_example(Example(8)){}    //Only one object is created, that means only parameterized constructor is called.
};

#endif // ENTITY_H
