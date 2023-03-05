#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int notget1 = 0, notget2 = 0, notget3 = 0;
    (a1 - b1 >= 0) ? notget1 = 0 : notget1 += (abs(a1 - b1));
    (a2 - b2 >= 0) ? notget2 = 0 : notget2 += (abs(a2 - b2));
    (a3 - b3 >= 0) ? notget3 = 0 : notget3 += (abs(a3 - b3));
    cout << notget1 + notget2 + notget3 << endl;
    return 0;
}