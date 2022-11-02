#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

class PartyMember
{
    private:

    public:
    string name = "";
    bool alive = true;
    float waterInBody = int(rand() % 15) + 20;
};