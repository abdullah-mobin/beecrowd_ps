#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << floor( b/(((float)4 / 3) *( 3.1415 * pow(a,3)))) <<endl;
    return 0;
}   