#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a,x=1;
		cin >> a;
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				x = 2;
				break;
			}
		}
		if (x == 1)
		{
			cout << a << " eh primo" << endl;
		}
		else
		{
			cout << a << " nao eh primo" << endl;
		}
	}

	return 0;
}