#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"
#include <string>

class Player : public Entity
{
private:
    std::string m_name;
public:
    Player();
    Player(const std::string& name);

    std::string getName() override;

    std::string naam();
};

#endif // PLAYER_H
