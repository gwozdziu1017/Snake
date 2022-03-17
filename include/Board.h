#pragma once
#include "../include/Coin.h"
#include <iostream>

class Board
{
public:
    Board() : width(0), height(0), coinPtr(std::make_shared<Coin>()) {}
    Board(int _width, int _height) : width(_width), height(_height), coinPtr(std::make_shared<Coin>()) {}
    //Board(Board& val) = delete;
    int getWidth() { return this->width; }
    int getHeight() { return this->height; }
    void printBoard();
    bool isPlaceForCoin(const int _x, const int _y);

protected:
    int width;
    int height;
    std::shared_ptr<Coin> coinPtr;
};