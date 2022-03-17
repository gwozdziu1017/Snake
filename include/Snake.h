#pragma once
//#include <utility>
#include "../include/Utils.h"
#include "../include/Board.h"

class Snake
{
public:
    Snake() { setSnakePosition(0, 0); }
    Snake(const int _x, const int _y) { setSnakePosition(_x, _y); }
    //Snake(Snake& val) = delete;
    std::pair<int, int> getSnakePosition() { return this->snakePosition; }
    void setSnakePosition(const int _x, const int _y);
    void setSnakePosition(const std::pair<int, int> newPosition);
    void moveSnake(const std::pair<int, int> newPosition);
    void moveSnake(const Direction _direction);
    bool isMovePossible(std::shared_ptr<Board> boardPtr, const std::pair<int, int> newPosition);
    bool isMovePossible(std::shared_ptr<Board> boardPtr, const Direction _direction);

protected:
    std::pair<int, int> snakePosition;
};