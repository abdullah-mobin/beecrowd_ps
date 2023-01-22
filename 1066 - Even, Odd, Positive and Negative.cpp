#include <iostream>
using namespace std;

int par(int x[])
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (abs(x[i]) % 2 == 0)
            c++;
    }
    return c;
}
int impar(int x[])
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (abs(x[i]) % 2 == 1)
            c++;
    }
    return c;
}
int pos(int x[])
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (x[i] > 0)
            c++;
    }
    return c;
}
int neg(int x[])
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (x[i] < 0)
            c++;
    }
    return c;
}

int main()
{
    int arr[4];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << par(arr) << " valor(es) par(es)" << endl;
    cout << impar(arr) << " valor(es) impar(es)" << endl;
    cout << pos(arr) << " valor(es) positivo(s)" << endl;
    cout << neg(arr) << " valor(es) negativo(s)" << endl;

    return 0;
}
