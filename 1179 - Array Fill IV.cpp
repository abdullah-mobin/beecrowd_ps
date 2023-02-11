#include <iostream>
using namespace std;
void parDisplay(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "par[" << i << "] = " << arr[i] << endl;
    }
}
void imparDisplay(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "impar[" << i << "] = " << arr[i] << endl;
    }
}

int main()
{
    int i = 0, arr[15], par[5] = {0}, impar[5] = {0};
    for (int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }
    int x = 0, y = 0, count = 0;
    while (i != 15)
    {

        if (arr[i] % 2 == 0)
        {
            par[x] = arr[i];
            x++;
        }

        else
        {
            impar[y] = arr[i];
            y++;
        }

        if (x == 5)
        {
            parDisplay(par, x);
            x = 0;
        }
        if (y == 5)
        {
            imparDisplay(impar, y);
            y = 0;
        }
        i++;
    }
    if (y != 0)
    {
        imparDisplay(impar, y);
    }
    if (x != 0)
    {
        parDisplay(par, x);
    }

    return 0;
}