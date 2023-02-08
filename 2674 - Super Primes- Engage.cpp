#include <iostream>
#include <cmath>
using namespace std;

int isprime(int x)
{
    if (x <= 1 )
    {
        return 0;
    }
    for (int i = 2; i <=sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    while (cin >> a)
    {
        if (isprime(a))
        {
            int tem = a;
            while (tem != 0)
            {
                int rem = tem % 10;
                if (isprime(rem))
                {
                    tem = tem / 10;
                    if (tem == 0)
                    {
                        cout << "Super" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "Primo" << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "Nada" << endl;
        }
    }

    return 0;
}