#include "../include/Coin.h"

Coin::Coin()
{
    this->noOfCoins = 5;
    this->setCoinLocationVector();
}
void Coin::setCoinLocationVector()
{
    // for now it's tubbed but it should be random places
    std::pair<int, int> coin_1 {2,5};
    std::pair<int, int> coin_2 {3,8};
    std::pair<int, int> coin_3 {5,5};
    std::pair<int, int> coin_4 {5,6};
    std::pair<int, int> coin_5 {8,7};

    this->coinLocationVector.push_back(coin_1);
    this->coinLocationVector.push_back(coin_2);
    this->coinLocationVector.push_back(coin_3);
    this->coinLocationVector.push_back(coin_4);
    this->coinLocationVector.push_back(coin_5);
}

bool Coin::isEveryCointCollected()
{
    return this->noOfCoins == 0 ? true : false;
}

void Coin::decreaseNoOfCoins()
{
    if(!this->isEveryCointCollected())
    {
        this->noOfCoins -= 1;
    }
}

