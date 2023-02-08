#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        int x, max = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            if (max < x)
            {
                max = x;
            }
        }
        if (max < 10)
        {
            cout << 1 << endl;
        }
        else if (max >= 10 && max<20)
        {
            cout << 2 << endl;
        }
        if (max >= 20)
        {
            cout << 3 << endl;
        }
    }

    return 0;
}