#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int a;
	int i = 1, sum = 0;
	while (1)
	{
		cin >> a;
		if (a < 0)
			break;
		else
		{
			sum = sum + a;
			i++;
		}
	}
	cout << fixed << setprecision(2) << float(sum) / (i-1) << endl;

	return 0;
}
