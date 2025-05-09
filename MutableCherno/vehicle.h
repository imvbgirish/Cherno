#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle
{
private:
    std::string name;
    mutable int wheels = 2;
    int headlights = 2;
public:
    void getValues() const;
};

#endif // VEHICLE_H
