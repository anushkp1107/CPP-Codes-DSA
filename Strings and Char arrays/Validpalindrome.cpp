/*
wheneverr asked in q to have a valid palindrome without unnecessary sybmols  / lowercase letters // count only alphabets etc...use the below function (modify accordingly)
*/
//* read below

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// bool valid(char ch)
// {
//     if ((ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z') || (ch >= '0' and ch <= '9'))
//     {
//         return 1;
//     }
//     return 0;
// }

/*
function to make all letters lowercase [read below for better]
*/

// char ToLowerCase(char ch)
// {
//     if (ch >= 'a' and ch <= 'z') // make sure to use only ' ' and not " "
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

/*
to check is a number is alphanumeric or not we have a funciton in c++  [valid palindrome qs]

    //* isalnum() --->if the character is alphanumeric means letter or number otherwise, returns zero.

    Nonzero: if the argument values are in the range (a-z, A-Z ,0-9), then isalnum returns a non-zero value, i.e., TRUE.

    Zero: if the argument is not between the defined range(a-z, A-Z ,0-9), then isalnum returns 0, i.e., FALSE.
*/

/*
    TO convert strings to lowercase use -->

    transform(s.begin(), s.end() , s.begin(), ::tolower);

*/

// example of lowercase

int main()
{
    string name = "ThiS Is mY NaMe";
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout << name << endl;
    return 0;
}
