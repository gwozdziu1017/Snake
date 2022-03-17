#pragma once

#include <vector>
#include <utility>
#include <iostream>
#include <curses.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

enum Direction
{
    Up = 0,
    Down,
    Left,
    Right,
    Undefined
};

class Utils
{
public:
    static int getRandomNumber(const int _min, const int _max);
    static std::pair<int, int> getPairOfRandomNumbers(const int _min, const int _max);
    static std::vector<std::pair<int, int> > getVectorOfRandomPairs(const int noOfPairs);
    static Direction getUserInputAndReturnDirection();
    static std::pair<int, int> translateDirectionIntoPair(const Direction _direction);
    static void printDirection(const Direction _direction);
};

inline int Utils::getRandomNumber(const int _min, const int _max)
{
    // TODO   
    return 0;
}

inline std::pair<int, int> Utils::getPairOfRandomNumbers(const int _min, const int _max)
{
    std::pair<int, int> pairOfRandomNumbers {getRandomNumber(0, 10), getRandomNumber(0, 10)};
    return pairOfRandomNumbers;
}

inline std::vector<std::pair<int, int> > Utils::getVectorOfRandomPairs(const int noOfPairs)
{
    std::vector<std::pair<int, int> > pairVector;
    pairVector.reserve(noOfPairs);

    for(auto i = 0; i < noOfPairs; i++)
    {
        pairVector.push_back(getPairOfRandomNumbers(0, 10));
    }

    return pairVector;
}

inline std::pair<int, int> Utils::translateDirectionIntoPair(const Direction _direction)
{
    std::pair<int, int> pairOfCoordinatesForNewPosition {0, 0};

    switch (_direction)
    {
    case Direction::Up:
        pairOfCoordinatesForNewPosition.second += 1;
        break;
    case Direction::Down:
        pairOfCoordinatesForNewPosition.second -= 1;
        break;
    case Direction::Left:
        pairOfCoordinatesForNewPosition.first -= 1;
        break;
    case Direction::Right:
        pairOfCoordinatesForNewPosition.first += 1;
        break;
    default: // wrong input will return (0, 0) as new position
        break;
    }

    return pairOfCoordinatesForNewPosition;

}

inline Direction Utils::getUserInputAndReturnDirection()
{
    //auto key = getch();
    char key = 'x';
    std::cin >> key;
    switch (key)
    {
    case 'w':
        return Direction::Up;
        break;
    case 's':
        return Direction::Down;
        break;
    case 'a':
        return Direction::Left;
        break;
    case 'd':
        return Direction::Right;
        break;
    default:
        return Direction::Undefined;
        break;
    }
}

inline void Utils::printDirection(const Direction _direction)
{
    switch (_direction)
    {
    case Direction::Up:
        std::cout << "Up\n";
        break;
    case Direction::Down:
        std::cout << "Down\n";
        break;
    case Direction::Left:
        std::cout << "Left\n";
        break;
    case Direction::Right:
        std::cout << "Right\n";
        break;
    default:
        std::cout << "Undefined\n";
        break;
    }

}