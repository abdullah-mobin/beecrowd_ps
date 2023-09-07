#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int  n,q;
    while (cin >> n >> q)
    {
        int people[n], position;
        for (size_t i = 0; i < n; i++)
        {
            cin >> people[i];
        }

        sort(people, people + n);

        for (size_t i = 0; i < q; i++)
        {
            cin >> position;
            cout << people[n-position] << endl;
        }
    }

    return 0;
}