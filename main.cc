#include "header.cc"
#include "partyMember.cc"

int main()
{
    cout << "You are a band of Fremen travellers in the Cave of Birds. You are delivering a priceless artifact to Observatory Mt, but the great-great-grandmother of all storms is approaching.\n You have 100 days to get there, else you will be lost. You set out on your journey with:\n*50L of water\n*4 Fremen Commrades, for a total of 5 Fremen\n*One Priceless Artifact.\n You have to get to Wind Pass within 30 days to be on track. Good Luck.\n";
    cout << "\n\n\n\n";
    PartyMember man1;
    PartyMember man2;
    PartyMember man3;
    PartyMember man4;
    PartyMember man5;
    man1.name = "Andreas";
    man2.name = "Larson";
    man3.name = "Alezander";
    man4.name = "Trent";
    man5.name = "Lilo";
    while (daysPassed <= 100 && alive > 0 && progress < 100 && totalWater >= 0)
    {
        cout << "Currently, " << alive << " men are currently alive.\n";
        cout << "You have " << totalWater << "L of water left.\n";
        cout << "You have made it " << progress << "% of the way there!\n";
        if (daysPassed == 1)
        {
            cout << daysPassed << " day has passed.\n";
        }
        else
        {
            cout << daysPassed << " days have passed.\n";
        }
        choice1();
        if(totalWater < 0)
        {
            die();
        }
        if(alive <= 0)
        {
            die();
        }
        if(daysPassed > 100)
        {
            die();
        }
        if(progress >= 100)
        {
            win();
        }
    }
}

void choice1()
{
    cout << "Would you like to:\nA: Set up and collect water for X days.\nB: Move foward for X days.\nC: Pray to the Precious Artifact for X days.";
    cin >> choice;
    if (choice == "a" || choice == "A")
    {
        cout << "How long would you like to collect water (in days)?\n";
        cin >> choice2;
        tapping(choice2);
    }
    else if (choice == "b" || choice == "B")
    {
        cout << "How many days would you like to walk onwards?\n";
        cin >> choice2;
        walking(choice2);
    }
    else if (choice == "c" || choice == "C")
    {
        cout << "How many days would you like to pray?\n";
        cin >> choice2;
        cout << "You pray to the Artifact for " << choice2 << " day(s). +10 Religion.\n";
        daysPassed += choice2;
        totalWater -= alive*2*choice2;
    }
    else
    {
        cout << "Invalid option, please try again.\n";
        choice1();
    }
}

void tapping(int days)
{
    cout << "You tap for " << days << " day(s), and gained: \n";
    k = (int(rand() % 3) + 2.5) * days;
    cout << "You gained " << k << "L of water!\n";
    totalWater += k;
    daysPassed += days;
    totalWater -= alive*.5*days;
}

void walking(int days)
{
    cout << "You walk for " << days << " day(s), and gained: \n";
    k = (int(rand() % 2) + 1) * days;
    cout << "You walked " << k << "% of the joruney!\n";
    progress += k; 
    daysPassed += days;
    totalWater -= alive*2*days;
}

void die()
{
    cout << "You dies :(\nYou failed to make it on the Arrakis trail.\n";
    throw std::exception();
}

void win()
{
    cout << "Yay you won! You delivered the artifact in time! It only took you " << daysPassed << " days!\n";
}