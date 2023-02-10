#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, x, counter = 0;
    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (x == a)
        {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}