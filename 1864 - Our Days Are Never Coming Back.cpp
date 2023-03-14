#include <iostream>
#include <string>
using namespace std;

int main()
{
    string msg = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int flag;
    cin >> flag;
    for (size_t i = 0; i < flag; i++)
    {
        cout << msg[i];
    }
    cout << endl;

    return 0;
}