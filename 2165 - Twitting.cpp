#include <iostream>
#include <array>
#include <string.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);

    if (a.length() <= 140)
    {
        cout << "TWEET" << endl;
    }
    else
    {
        cout << "MUTE" << endl;
    }
    return 0;
}