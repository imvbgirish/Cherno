#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

class Entity{
public:
    Entity(){
        std::cout << "Created Entity" << std::endl;
    }

    ~Entity(){
        std::cout << "Destroyed Entity" << std::endl;
    }

    void print(){
        std::cout << "Printing" << std::endl;
    }
};

#endif // ENTITY_H
