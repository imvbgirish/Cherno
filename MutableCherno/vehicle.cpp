#include "vehicle.h"

void Vehicle::getValues() const
{
    headlights = 4;     //read only object cannot be modified
    wheels = 4;         //mutable
}
