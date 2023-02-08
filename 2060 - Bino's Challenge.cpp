#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, two = 0, three = 0, four = 0, five = 0;
    cin >> a;
    int x;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            two++;
        }
        if (x % 3 == 0)
        {
            three++;
        }
        if (x % 4 == 0)
        {
            four++;
        }
        if (x % 5 == 0)
        {
            five++;
        }
    }
    cout << two << " Multiplo(s) de 2" << endl;
    cout << three << " Multiplo(s) de 3" << endl;
    cout << four << " Multiplo(s) de 4" << endl;
    cout << five << " Multiplo(s) de 5" << endl;

    return 0;
}