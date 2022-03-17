#include "../include/Board.h"

void Board::printBoard()
{
    for(auto x = 0; x < this->width; x++)
    {
        for (auto y = 0; y < this->height; y++)
        {
            if(isPlaceForCoin(x, y))
                std::cout << "O ";
            else
            {
                std::cout << "x ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool Board::isPlaceForCoin(const int _x, const int _y)
{
    //std::vector<std::pair<int, int> > tempVector = coinPtr->getCoinLocationVector();
    for(auto iter : coinPtr->getCoinLocationVector())
    {
        if(iter.first == _x && iter.second == _y)
            {
                return true;
            }
    }
    return false;
}