#include "player.h"
#include <iostream>

Player::Player()
{
    std::cout << "Player default constructor" ;
}

Player::Player(const std::string &name):m_name{name}{}

std::string Player::getName(){
    return m_name;
}

std::string Player::naam(){
    return m_name;
}
