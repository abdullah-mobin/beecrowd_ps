#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0, cnt = 0;
	cin >> a;
	while (cin >> b)
	{

		if (b > a)
		{
			break;
		}
	}
	int i = a;
	do
	{
		sum = sum + i;
		i++;
		cnt++;
		if (sum > b)
		{
			break;
		}
		
	} while (sum < b);

	cout << cnt << endl;

	return 0;
}