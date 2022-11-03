#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;
void walking(int days);
void tapping(int days);
void choice1();
void die();
void win();
void man1Death();
void man2Death();
void man3Death();
void man4Death();
void man5Death();
void determineIfTheyDieBecauseTheyAreBadAndStupid();

float totalWater = 50;
int progress = 0;
int consumptionLVL = 1;
int daysPassed = 0;
int alive = 5;
string choice;
int choice2;
int k;
bool man1DeathShown;
bool man2DeathShown;
bool man3DeathShown;
bool man4DeathShown;
bool man5DeathShown;
