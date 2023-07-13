#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    Hero()
    {
        cout << "Constructor called" << endl;
    }
};

int main()
{
    // statically created object
    Hero Ram;
    Hero *h = new Hero;
    Hero *h = new Hero(); // same as line 17

    return 0;
}


//PARAMETERISED CINSTRUCTOR

