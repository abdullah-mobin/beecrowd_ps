#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, j, sum = 0;
        cin >> a >> b;

        if (a % 2 == 0)
        {
            j = a + 1;
        }
        else
            j = a;

        for (int i = 1; i <= b; i++)
        {
            sum = sum + j;
            j = j + 2;
        }
        cout << sum << endl;
    }

    return 0;
}
