#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >>t;
	while (t--)
	{
		int a, sum = 0;
		cin >> a;
		for (int i = 1; i < a; i++)
		{
			if (a % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == a)
		{
			cout << a << " eh perfeito" << endl;
		}
		else
		{
			cout << a << " nao eh perfeito" << endl;
		}
	}

	return 0;
}