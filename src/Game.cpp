#include "../include/Game.h"

void Game::run2()
{
    std::shared_ptr<Board> boardPtr = std::make_shared<Board>(10, 10);
    std::shared_ptr<Player> playerPtr = std::make_shared<Player>();
    std::shared_ptr<Snake> snakePtr = std::make_shared<Snake>();

    std::pair<int, int> snakePosition = snakePtr->getSnakePosition();
    Direction moveDirection;
    boardPtr -> printBoard();

    while(0==0)
    {
        // printSnake

        moveDirection = Utils::getUserInputAndReturnDirection();
        Utils::printDirection(moveDirection);
        if(this->tryMoveSnake(snakePtr, boardPtr, moveDirection))
        {
        // printSnake in new position
        // check if coin collected
        }
        else
        {
        // move unavailable
        }
    }
}

bool Game::tryMoveSnake(std::shared_ptr<Snake> snakePtr, std::shared_ptr<Board> boardPtr, Direction moveDirection)
{
    bool isMovePossible = snakePtr->isMovePossible(boardPtr, moveDirection);
    if(isMovePossible)
    {
        snakePtr->setSnakePosition(Utils::translateDirectionIntoPair(moveDirection));
    }
    else
    {
        return false;
    }
    
    return true;
}