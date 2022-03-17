#pragma once

class Player
{
public:
    Player() : points(0) {}
    Player(Player& p) = delete;
    void increasePointsByValue(const int value);
    int getPoints();
protected:
    int points;
};