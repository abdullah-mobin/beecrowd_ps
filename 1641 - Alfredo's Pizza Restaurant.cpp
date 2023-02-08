#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, l, w;
    int i = 0;
    while (cin >> a >> l >> w)
    {
        if (a == 0)
        {
            return 0;
        }

        i++;
        double d = sqrt(l * l + w * w);
        if (d <= 2 * a)
        {
            cout << "Pizza " << i << " fits on the table." << endl;
        }
        else
        {
            cout << "Pizza " << i << " does not fit on the table." << endl;
        }
    }
    return 0;
}