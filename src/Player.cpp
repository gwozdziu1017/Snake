#include "../include/Player.h"

void Player::increasePointsByValue(const int value)
{
    this->points += value;
}

int Player::getPoints()
{
    return this->points;
}