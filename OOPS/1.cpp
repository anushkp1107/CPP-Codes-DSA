#include <iostream>
using namespace std;

class Hero
{
    // properties
public: // now we can access health and level anywhere
        // private:
    int health;
    char level;
};

int main()
{
    // static allocation
    Hero A;
    cout << A.level << endl;
    A.setHealth(80);

    // dynamically
    Hero *b = new Hero;
    cout << "level is" << (*b).level << endl;
    b->setHealth(70);

    // creation of object
    // Hero sam;

    // sam.health = 70;
    // sam.level = 'A';

    // cout << "health is : " << sam.health << endl;
    // cout << "level is : " << sam.level << endl;

    return 0;
}