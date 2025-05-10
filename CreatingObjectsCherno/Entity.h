#ifndef ENTITY_H
#define ENTITY_H

#include <string>

using string = std::string;

class Entity{
private:
    string m_name;
public:
    Entity(){
        m_name = "Girish";
    }

    Entity(const string& name):m_name(name){}

    const string& getName(){
        return m_name;
    }
};
#endif // ENTITY_H
