#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, sum = 0;
	cin >> a;
	while (cin >> b)
	{

		if (b > 0)
		{
			break;
		}
	}
	for (int i = a; i < a + b; i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;

	return 0;
}