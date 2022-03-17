#include "../include/Game.h"

int main()
{
    Game* gamePtr = new Game();
    gamePtr->run2();

    delete gamePtr;
    return 0;
}