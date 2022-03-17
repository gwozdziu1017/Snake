#pragma once

#include <vector>
#include <utility>

class Coin
{
public:
    Coin();
    void setCoinLocationVector();
    bool isEveryCointCollected();
    void decreaseNoOfCoins();
    std::vector<std::pair<int, int> > getCoinLocationVector() { return this->coinLocationVector; }
protected:
    std::vector<std::pair<int, int> > coinLocationVector;
    unsigned int noOfCoins;
};