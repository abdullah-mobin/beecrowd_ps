#include <iostream>
using namespace std;

int main()
{
	int a;
	while (1)
	{
		cin >> a;
		if (a == 0)
			return 0;

		for (int i = 1; i <= a; i++)
		{
			if (i == a)
			{
				cout << i << endl;
			}
			else
				cout << i << " ";
		}
	}

	return 0;
}
