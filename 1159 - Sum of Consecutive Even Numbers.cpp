#include <iostream>
using namespace std;

int main()
{
	int a;
	while (1)
	{
		int sum = 0;
		cin >> a;
		if (a == 0)
			return 0;

		if (a % 2 == 0)
		{
			for (int i = 1; i < 6; i++)
			{
				sum = sum + a;
				a = a + 2;
			}
		}
		else{
			for (int i = 1; i < 6; i++)
			{
				sum = sum + a+1;
				a = a + 2;
			}
		}
		cout << sum << endl;
	}

	return 0;
}
