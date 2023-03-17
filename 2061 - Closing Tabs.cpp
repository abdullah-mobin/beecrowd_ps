#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, t;
    cin >> a >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s == "fechou")
        {
            a++;
        }
        else
        {
            a--;
        }
    }
    cout << a << endl;

    return 0;
}