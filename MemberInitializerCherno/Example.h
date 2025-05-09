#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>

class Example{
private:
    int m_num;
public:
    Example(){
        std::cout << "Creating an Entity" << std::endl;
    }

    Example(int num){
        this->m_num = num;
        std::cout << "Creating an Entity "<< num << std::endl;
    }
};

#endif // EXAMPLE_H
