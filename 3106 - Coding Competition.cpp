#include <iostream>
#include <iomanip>
using namespace std;

int possible(int x)
{
    while (x % 3 != 0)
    {
        x--;
    }
    return x;
}

int main()
{
    int x, max = 0;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        max += possible(arr[i]);
    }
    cout << max << endl;
    return 0;
}