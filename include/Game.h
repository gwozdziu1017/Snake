#pragma once
#include "../include/Board.h"
#include "../include/Utils.h"
#include "../include/Player.h"
#include "../include/Snake.h"

class Game
{
private:
    /* data */
public:
    void run2();
    bool tryMoveSnake(std::shared_ptr<Snake> snakePtr, std::shared_ptr<Board> boardPtr, Direction _direction);
protected:
};