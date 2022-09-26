#include "setUp.h"
#include <iostream>
#include <cstdlib>
#include "time.h"

using namespace std;

setUp::setUp()
{
    //neutralize starting value of points to zero
    cpuScore = 0;
    userScore = 0;
}

//function gives a new random number each round
void setUp::randomNumber()
{
    srand(time(0));
    int ranNum = (rand() % (100-1) + 1);

    gameNumber = ranNum;
}
int setUp::getNumber()
{
    return gameNumber;
}
