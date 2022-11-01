#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

int totalWater = 0;
int progress = 0;
int consumptionLVL = 1;
int daysPassed = 0;

int genRandom(int min, int max)
{
    int bob = 0;
    while(bob <= min)
    {
        bob = rand() % max; 
    }
    return bob;
}
