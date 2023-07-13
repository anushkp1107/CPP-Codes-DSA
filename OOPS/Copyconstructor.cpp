#include <iostream>;
using namespace std;

class Hero
{
public:
    int health;
    char level;
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
};

int main()
{
    Hero Suresh(70, 'c');

    Hero R(Suresh); //--> 70 and c copied from suresh to R
}