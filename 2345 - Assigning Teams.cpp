#include <iostream>
#include <algorithm>
#include <cmath>
#define size 4
using namespace std;

int main()
{
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    cout << abs((arr[0] + arr[3]) - (arr[1] + arr[2])) << endl;
    return 0;
}