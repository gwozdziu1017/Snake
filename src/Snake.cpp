#include "../include/Snake.h"

void Snake::setSnakePosition(const int _x, const int _y)
{
    snakePosition.first = _x;
    snakePosition.second = _y;
}

void Snake::setSnakePosition(const std::pair<int, int> newPosition)
{
    this->snakePosition = newPosition;
}

bool Snake::isMovePossible(std::shared_ptr<Board> boardPtr, const std::pair<int, int> newPosition)
{
    if(newPosition.first > 0 && newPosition.first <= boardPtr->getWidth() &&
        newPosition.second > 0 && newPosition.second <= boardPtr->getHeight())
        {
            return true;
        }
        else
        {
            return false;
        }
}

bool Snake::isMovePossible(std::shared_ptr<Board> boardPtr, const Direction _direction)
{
    std::pair<int, int> currentPosition = this->getSnakePosition();
    std::pair<int, int> newPosition = Utils::translateDirectionIntoPair(_direction);

    newPosition.first += currentPosition.first;
    newPosition.second += currentPosition.second;

    return this->isMovePossible(boardPtr, newPosition);
}

void Snake::moveSnake(const std::pair<int, int> newPosition)
{
    setSnakePosition(newPosition);
}

void Snake::moveSnake(const Direction _direction)
{
    auto _snakePosition = this->getSnakePosition();

    switch (_direction)
    {
    case Direction::Up:
        this->setSnakePosition(_snakePosition.first, _snakePosition.second += 1);
        break;
    case Direction::Down:
        this->setSnakePosition(_snakePosition.first, _snakePosition.second -= 1);
        break;
    case Direction::Left:
        this->setSnakePosition(_snakePosition.first -= 1, _snakePosition.second);
        break;
    case Direction::Right:
        this->setSnakePosition(_snakePosition.first += 1, _snakePosition.second);
        break;
    default:
        break;
    }
}